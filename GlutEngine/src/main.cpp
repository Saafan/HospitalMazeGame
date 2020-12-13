#include <imgui/imgui.h>
#include <imgui/imgui_impl_opengl2.h>
#include <imgui/imgui_impl_glut.h>
#include <algorithm>
#include <sstream>
#include <iomanip>
#include <fstream>

#include "Renderer.h"
#include "Model.h"
#include "Object.h"
#include "ModelsGenerator.h"
#include <math.h>
#include <map>

std::vector<Object> objs;

std::vector<std::string> groups
{
	"Character",
	"Cubes",
	"Cones",
};

std::vector<bool> modelExpand(objs.size(), false);
std::vector<float[3]> modelTrans(objs.size());

bool backup = false;

struct vec3
{
	float x = 0.0f;
	float y = 0.0f;
	float z = 0.0f;
};

vec3 cameraPos;
vec3 cameraFront;

int WIDTH = 1100;
int HEIGHT = 950;

int mouseX, mouseY = 0;

float radius = 1.5f;
float angle = -45.11f;
float elapsedTime = 0.0f;

float gameOverTime = 10;

static float lightColor[]{ 1.0f, 1.0f, 1.0f };
static float lightPos[]{ 5.6f, 10.0f, 7.5f };

void WriteHeader();

std::stringstream code;

void SetupCamera()
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	//glOrtho(-0.5, 0.5, -0.5, 0.5, -1, 1);
	gluPerspective(60, 16 / 9, 0.001, 100);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	cameraPos.x = std::sin(angle * 3.14f / 180.0f) * radius;
	cameraPos.z = std::cos(angle * 3.14f / 180.0f) * radius;

	gluLookAt(cameraPos.x + 1.0, cameraPos.y + 3.0, cameraPos.z + 2.8, cameraFront.x, cameraFront.y, cameraFront.z, 0.0f, 1.0f, 0.0f);
}

std::vector<Model> models;


void SetupLights()
{

	GLfloat ambient[] = { 0.7f, 0.7f, 0.7, 1.0f };
	GLfloat diffuse[] = { 0.6f, 0.6f, 0.6, 1.0f };
	GLfloat specular[] = { 1.0f, 1.0f, 1.0, 1.0f };
	GLfloat shininess[] = { 50 };
	glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, ambient);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, diffuse);
	glMaterialfv(GL_FRONT, GL_SPECULAR, specular);
	glMaterialfv(GL_FRONT, GL_SHININESS, shininess);

	GLfloat lightIntensity[] = { lightColor[0], lightColor[1], lightColor[2], 1.0f };
	GLfloat lightPosition[] = { lightPos[0], lightPos[1], lightPos[2], 0.0f };
	glLightfv(GL_LIGHT0, GL_POSITION, lightPosition);
	glLightfv(GL_LIGHT0, GL_DIFFUSE, lightIntensity);
}


void SortObjects()
{
	objs.clear();
	for (size_t i = 0; i < groups.size(); i++)
		objs.push_back(Object(groups.at(i)));
	for (auto& model : models)
		if (model.group != -1)
			objs.at(model.group).obj.push_back(&model);
}

void ShowModelAttributes(Model& model, std::string name)
{
	if (ImGui::CollapsingHeader(name.c_str()))
	{
		ImGui::Checkbox(std::string("Uniform Scale " + model.id).c_str(), &model.uniformScale);
		ImGui::ColorEdit3(std::string("Color " + model.id).c_str(), &model.color.R);
		ImGui::DragFloat3(std::string("Position " + model.id).c_str(), &model.position.at(0), 0.01f);

		if (model.uniformScale)
		{
			ImGui::DragFloat(std::string("Scale " + model.id).c_str(), &model.scale.at(0), 0.01f);
			model.scale.at(2) = model.scale.at(1) = model.scale.at(0);
		}
		else
			ImGui::DragFloat3(std::string("Scale " + model.id).c_str(), &model.scale.at(0), 0.01f);

		ImGui::DragFloat3(std::string("Rotate " + model.id).c_str(), &model.rotate.at(0), 0.5f);

		if (model.GetPrimitive() == Primitive::Tours)
		{
			ImGui::DragFloat(std::string("Inner Radius " + model.id).c_str(), &model.size, 0.1f);
			ImGui::DragFloat(std::string("Outer Radius " + model.id).c_str(), &model.modelHeight, 0.1f);
		}

		if (model.GetPrimitive() == Primitive::Cone)
		{
			ImGui::DragFloat(std::string("Base " + model.id).c_str(), &model.size, 0.05f);
			ImGui::DragFloat(std::string("Height " + model.id).c_str(), &model.modelHeight, 0.05f);
		}

		if (model.GetPrimitive() == Primitive::Sphere)
		{
			ImGui::DragFloat(std::string("Radius " + model.id).c_str(), &model.size, 0.01f);
		}

		if (model.GetPrimitive() == Primitive::Cylinder)
		{
			ImGui::DragFloat(std::string("Base Radius " + model.id).c_str(), &model.size, 0.01f);
			ImGui::DragFloat(std::string("Top Radius " + model.id).c_str(), &model.radius, 0.01f);
			ImGui::DragFloat(std::string("Height " + model.id).c_str(), &model.modelHeight, 0.01f);
		}

		if (model.GetPrimitive() != Primitive::Cube && model.GetPrimitive() != Primitive::WireCube && model.GetPrimitive() != Primitive::Teapot)
		{
			ImGui::DragInt(std::string("Slices " + model.id).c_str(), &model.slices, 1);
			ImGui::DragInt(std::string("Stacks " + model.id).c_str(), &model.stacks, 1);
		}

		if (ImGui::Button(std::string("Reset Position: " + name).c_str()))
			model.position.at(0) = model.position.at(1) = model.position.at(2) = 0;
		ImGui::SameLine();
		if (ImGui::Button(std::string("Reset Rotation: " + name).c_str()))
			model.rotate.at(0) = model.rotate.at(1) = model.rotate.at(2) = 0;
		ImGui::SameLine();
		if (ImGui::Button(std::string("Reset Scale: " + name).c_str()))
			model.scale.at(0) = model.scale.at(1) = model.scale.at(2) = 1;
		ImGui::SameLine();
		if (ImGui::Button(std::string("Reset Color: " + name).c_str()))
			model.color.R = model.color.G = model.color.B = 1;


		if (ImGui::Button(std::string("Delete: " + name).c_str()))
		{
			for (size_t q = 0; q < models.size(); q++)
				if (&models.at(q) == &model)
					models.erase(models.begin() + q);
			SortObjects();
			return;
		}

		if (ImGui::Button(std::string("Duplicate: " + name).c_str()))
		{
			Model newModel = model;
			newModel.id = std::to_string(model.numofModels++);
			models.push_back(newModel);
			SortObjects();
			return;
		}

		ImGui::Indent(20);
		if (ImGui::CollapsingHeader(std::string("Group " + name + " in ").c_str()))
			for (size_t i = 0; i < objs.size(); i++)
			{
				if (ImGui::Button(std::string(objs.at(i).name + " " + name).c_str()))
				{
					model.group = i;
					SortObjects();
				}
				if ((i % 3 != 0) || i == 0)
					ImGui::SameLine();
			}
		ImGui::Spacing();
		ImGui::Unindent(20);

		if (ImGui::Button(std::string("Delete " + model.id + " from Group").c_str()))
		{
			model.group = -1;
			SortObjects();
		}
		ImGui::Spacing();
	}
}


void RenderIMGUI()
{
	static bool showCode = false;
	ImGui::Begin("3D Editor");

	ImGui::Checkbox("Show Code", &showCode);

	if (ImGui::CollapsingHeader("Camera Settings"))
	{
		if (ImGui::Button("Reset Camera Position"))
		{
			cameraPos.x = cameraPos.y = cameraPos.z = 0;
			cameraFront.x = cameraFront.y = cameraFront.z = 0;
			angle = 0.0f;
			radius = 1.5f;
		}
		ImGui::DragFloat3("Camera Eye", &cameraPos.x, 0.1f);
		ImGui::DragFloat3("Camera Center", &cameraFront.x, 0.1f);
	}

	if (ImGui::CollapsingHeader("Light Settings"))
	{
		if (ImGui::Button("Reset Light Setup"))
		{
			lightColor[0] = lightColor[1] = lightColor[2] = 1.0f;

			lightPos[0] = 5.6f;
			lightPos[1] = 10.0f;
			lightPos[2] = 7.5f;
		}

		ImGui::ColorEdit3("Light Color", &lightColor[0]);
		ImGui::DragFloat3("Light Position", &lightPos[0], 0.1f);
	}

	ImGui::Spacing();
	ImGui::Spacing();
	ImGui::Spacing();

	if (ImGui::Button("Cube"))
	{
		Model* cube = new Model();
		cube->CreateCube();
		models.push_back(*cube);
	}
	ImGui::SameLine();

	if (ImGui::Button("Sphere"))
	{
		Model* sphere = new Model();
		sphere->CreateSphere();
		models.push_back(*sphere);
	}
	ImGui::SameLine();

	if (ImGui::Button("Torus"))
	{
		Model* torus = new Model();
		torus->CreateTours();
		models.push_back(*torus);
	}

	if (ImGui::Button("Cylinder"))
	{
		Model* cylinder = new Model();
		cylinder->CreateCylinder();
		models.push_back(*cylinder);
	}

	ImGui::SameLine();
	if (ImGui::Button("Cone"))
	{
		Model* cone = new Model();
		cone->CreateCone();
		models.push_back(*cone);
	}

	ImGui::SameLine();
	if (ImGui::Button("Teapot"))
	{
		Model* teapot = new Model();
		teapot->CreateTeapot(0.5f);
		models.push_back(*teapot);
	}

	if (ImGui::Button("Collision Box"))
	{
		Model* cube = new Model();
		cube->CreateWireCube();
		cube->collider = true;
		models.push_back(*cube);
	}


	static int i;
	for (auto& obj : objs)
	{
		if (ImGui::CollapsingHeader(std::string("Group " + obj.name).c_str()))
		{
			float arr[]{ 0.1, 0.1, 0.1 };
			ImGui::DragFloat3(std::string("Position: " + obj.name).c_str(), &obj.transGroup.at(0), 0.1f);
			obj.Translate();
			ImGui::DragFloat3(std::string("Rotation: " + obj.name).c_str(), &obj.rotateGroup.at(0), 0.1f);
			ImGui::Indent(20);
			for (const auto& model : obj.obj)
			{
				if (model == nullptr)
					return;
				std::string name = model->GetPrimitveString() + std::to_string(i++);
				ShowModelAttributes(*model, name);
			}
			ImGui::Unindent(20);
		}
		ImGui::Spacing();
		ImGui::Spacing();
	}


	for (auto& model : models)
		if (model.group == -1)
		{
			std::string name = model.GetPrimitveString() + std::to_string(i++);
			ShowModelAttributes(model, name);
		}
	i = 0;


	ImGui::Text("Application average %.3f ms/frame (%.1f FPS)", 1000.0f / ImGui::GetIO().Framerate, ImGui::GetIO().Framerate);
	ImGui::End();

	std::string codeString;

	code.str("");
	code << std::setprecision(4) << std::noshowbase;

	if (models.empty())
		code << " \n \n";

	for (size_t i = 0; i < models.size(); i++)
	{
		Model& model = models.at(i);
		std::string name = model.GetPrimitveString() + std::to_string(i);

		if (model.group != -1)
			code << " // " + name + " of Group " + objs.at(model.group).name + "\n";
		else
			code << " // " + name + "\n";

		code << "Model " << name << ";\n";

		if (model.GetPrimitive() == Primitive::Cube)
			code << name << ".CreateCube(" << model.size << ");\n";

		if (model.GetPrimitive() == Primitive::WireCube)
			code << name << ".CreateWireCube(" << model.size << ");\n";

		if (model.GetPrimitive() == Primitive::Teapot)
			code << name << ".CreateTeapot(" << model.size << ");\n";

		if (model.GetPrimitive() == Primitive::Tours)
			code << name << ".CreateTours(" << (model.size) << ", " << (model.modelHeight) << ", " << (model.slices) << ", " << (model.stacks) << ");\n";

		if (model.GetPrimitive() == Primitive::Cone)
			code << name << ".CreateCone(" << (model.size) << ", " << (model.modelHeight) << ", " << (model.slices) << ", " << (model.stacks) << ");\n";

		if (model.GetPrimitive() == Primitive::Sphere)
			code << name << ".CreateSphere(" << (model.size) << ", " << (model.slices) << ", " << (model.stacks) << ");\n";

		if (model.GetPrimitive() == Primitive::Cylinder)
			code << name << ".CreateCylinder(" << (model.size) << ", " << (model.radius) << ", " << (model.modelHeight) << ", " << (model.slices) << ", " << (model.stacks) << ");\n";

		code << name << ".Translate(" << model.position.at(0) + model.groupTrans.at(0) << ", " << model.position.at(1) + model.groupTrans.at(1) << ", " << model.position.at(2) + model.groupTrans.at(2) << ");\n";

		if (model.scale.at(0) != 1 || model.scale.at(1) != 1 || model.scale.at(2) != 1)
			code << name << ".Scale(" << model.scale.at(0) << ", " << model.scale.at(1) << ", " << model.scale.at(2) << ");\n";

		if (model.rotate.at(0) != 0 || model.rotate.at(1) != 0 || model.rotate.at(2) != 0)
			code << name << ".Rotate(" << model.rotate.at(0) << ", " << model.rotate.at(1) << ", " << model.rotate.at(2) << ");\n";

		if (model.color.R != 1 || model.color.G != 1 || model.color.B != 1)
			code << name << ".SetColor(" << model.color.R << ", " << model.color.G << ", " << model.color.B << ");\n";

		if (model.collider)
			code << name << ".collider = " << "true;\n";

		if (model.group != -1)
			code << name << ".group = " << model.group << ";\n";

		code << "models.emplace_back(" << name << ");\n\n";
	}

	if (showCode)
	{
		ImGui::Begin("Code:");
		codeString = code.str();
		char* c = const_cast<char*>(codeString.c_str());

		if (ImGui::Button("Copy Code"))
			ImGui::SetClipboardText(c);

		ImGui::InputTextMultiline("Code: ", c, codeString.length());
		ImGui::Text("W, A, S, D Buttons to change Camera's Eye");
		ImGui::Text("UP, LEFT, DOWN, RIGHT Arrows to change Camera's Center");
		ImGui::End();
	}

	WriteHeader();

	WIDTH = glutGet(GLUT_WINDOW_WIDTH);
	HEIGHT = glutGet(GLUT_WINDOW_HEIGHT);
	glViewport(0, 0, WIDTH, HEIGHT);

}

void RenderScene(void)
{
	SetupCamera();
	SetupLights();

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glClearColor(0.2f, 0.5f, 0.8f, 1.0f);

	for (auto& model : models)
		model.Render();

	RenderIMGUI();
}


bool ModelsIntresect(Model& model1, Model& model2, float x, float z)
{
	if (std::abs((model1.position.at(0) + x) - model2.position.at(0)) < model1.scale.at(0) / 4 + model2.scale.at(0) / 4)
		if (std::abs(model1.position.at(1) - model2.position.at(1)) < model1.scale.at(1) / 4 + model2.scale.at(1) / 4)
			if (std::abs((model1.position.at(2) + z) - model2.position.at(2)) < model1.scale.at(2) / 4 + model2.scale.at(2) / 4)
				return true;

	return false;
}

bool CheckCollision(float x, float z)
{
	for (auto& model : models)
		if (model.collider)
			for (auto& modelCollision : models)
				if (modelCollision.collider && &modelCollision != &model && model.group != -1)
					if (ModelsIntresect(model, modelCollision, x, z) && objs.at(model.group).name == "Character")
						return true;
	return false;
}

void key(unsigned char key, int x, int y)
{
	if (key == 'w')
		radius -= 0.5f;
	if (key == 's')
		radius += 0.5f;

	if (key == 'a')
		angle -= 5.0f;
	if (key == 'd')
		angle += 5.0f;

	if (key == 'q')
		cameraPos.y += 0.1f;
	if (key == 'e')
		cameraPos.y -= 0.1f;

	if (key == 't')
	{
		angle = -45.11f;
		radius = 1.5f;
	}

	if (key == 'y')
	{
		angle = -120.11f;
		radius = 5.5f;
	}

	if (key == 'u')
	{
		angle = 7.11f;
		radius = -7.5f;
	}
}

void key(int key, int x, int y)
{
	bool pass = false;
	const float limit = 0.2f;
	const float speed = 0.1f;
	for (auto& model : models)
		if (model.group != -1)
			if (objs.at(model.group).name == "Character")
			{
				if ((key == GLUT_KEY_DOWN && !CheckCollision(0.0f, limit)) || (key == GLUT_KEY_UP && !CheckCollision(0.0f, -limit)) || (key == GLUT_KEY_LEFT && !CheckCollision(-limit, 0.0f)) || (key == GLUT_KEY_RIGHT && !CheckCollision(limit, 0.0f)))
					pass = true;
				if (pass)
					if (key == GLUT_KEY_DOWN)
						model.TranslateAccum(0.0f, 0.0f, speed);
					else if (key == GLUT_KEY_UP)
						model.TranslateAccum(0.0f, 0.0f, -speed);
					else if (key == GLUT_KEY_LEFT)
						model.TranslateAccum(-speed, 0.0f, 0.0f);
					else if (key == GLUT_KEY_RIGHT)
						model.TranslateAccum(speed, 0.0f, 0.0f);
			}
}

void glut_display_func()
{
	// Start the Dear ImGui frame
	ImGui_ImplOpenGL2_NewFrame();
	ImGui_ImplGLUT_NewFrame();

	RenderScene();

	// Rendering
	ImGui::Render();
	ImGuiIO& io = ImGui::GetIO();
	ImGui_ImplOpenGL2_RenderDrawData(ImGui::GetDrawData());

	glutSwapBuffers();
	glutPostRedisplay();
}

void Generate(int value)
{
	GenerateModels(models, objs);
}

void WriteHeader()
{
	time_t now = time(0);
	tm* ltm = localtime(&now);

	if (backup)
	{
		std::stringstream path;
		path << "src/backup/" << 1900 + ltm->tm_year << "-" << ltm->tm_mon << "-" << ltm->tm_mday << " at " << ltm->tm_hour << "." << ltm->tm_min << "." << ltm->tm_sec << ".h";
		std::string pathStr = path.str();
		std::ofstream myFile(pathStr);
		if (myFile.is_open())
		{
			myFile << "#pragma once\n#include \"Model.h\"\nvoid GenerateModels(std::vector<Model>& models, std::vector<Object>& objs)\n{\n\n";
			myFile << "//Backup at: " << 1900 + ltm->tm_year << "-" << ltm->tm_mon << "-" << ltm->tm_mday << " at: " << ltm->tm_hour << ":" << ltm->tm_min << ":" << ltm->tm_sec << "\n\n";
			myFile << code.str();
			myFile << "}\n";
		}
	}
	else
	{
		std::ofstream myFile("src/ModelsGenerator.h");
		if (myFile.is_open())
		{
			myFile << "#pragma once\n#include \"Model.h\"\nvoid GenerateModels(std::vector<Model>& models, std::vector<Object>& objs)\n{\n\n";
			myFile << code.str();
			myFile << "}\n";
		}
	}
}

void WriteHeaderBackup()
{
	backup = true;
	WriteHeader();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(WIDTH, HEIGHT);

	glutCreateWindow("Garden Game");

	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glEnable(GL_BLEND);
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	glEnable(GL_NORMALIZE);
	glEnable(GL_COLOR_MATERIAL);
	glEnable(GL_TEXTURE_2D);


	IMGUI_CHECKVERSION();
	ImGui::CreateContext();
	ImGuiIO& io = ImGui::GetIO(); (void)io;
	ImGui::StyleColorsDark();
	ImGui_ImplGLUT_Init();
	ImGui_ImplGLUT_InstallFuncs();
	ImGui_ImplOpenGL2_Init();

	gluOrtho2D(0, WIDTH, 0, HEIGHT);

	glutDisplayFunc(glut_display_func);


	for (size_t i = 0; i < groups.size(); i++)
		objs.push_back(Object(groups.at(i)));


	glutKeyboardFunc(key);
	glutSpecialFunc(key);
	Generate(100);
	SortObjects();
	std::atexit(WriteHeaderBackup);

	glutMainLoop();


	// Cleanup
	ImGui_ImplOpenGL2_Shutdown();
	ImGui_ImplGLUT_Shutdown();
	ImGui::DestroyContext();



	return 1;
}