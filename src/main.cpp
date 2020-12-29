#include <algorithm>
#include <sstream>
#include <iomanip>
#include <fstream>


#include "TextureBuilder.h"
#include "Model_3DS.h"
#include "GLTexture.h"

#include "Renderer.h"
#include "Model.h"
#include "Object.h"
#include "ModelsGenerator.h"
#include "Randomize.h"

#include <math.h>
#include "UI.h"
#include "LightModel.h"

std::vector<Object> objs;
GLTexture tex_ground;

std::vector<bool> modelExpand(objs.size(), false);
std::vector<float[3]> modelTrans(objs.size());

std::vector<LightModel> lights;

Model sphere;

std::vector<bool> views{ true, false, false };

bool backup = false;
bool updateData = true;

Model* lastHit = nullptr;
vec3 cameraPos;
vec3 cameraCenter;

int coinsVal = 0;
int scoreVal = 0;
int healthVal = 100;
UI coins({ 1.00f, 0.0f, 0.0f }, "Coins: ", & coinsVal, { 1.2f, 2.2f, 0.0f });
UI score({ 0.0f, 0.0f, 0.0f }, "Score: ", & scoreVal, { 1.2f, 2.05f, 0.0f });
UI health({ 1.00f, 0.0f, 0.0f }, "Health: ", & healthVal, { 1.2f, 1.90f, 0.0f });

int WIDTH = 1100;
int HEIGHT = 950;

float mouseDeltX, mouseDeltY = 0;

float radius = 1.5f;
float angle = -45.11f;
float elapsedTime = 0.0f;


static float lightColor[]{ 1.0f, 1.0f, 1.0f };
static float lightPos[]{ 5.6f, 10.0f, 7.5f };

void WriteHeader();
void CheckCoinsCollision();

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

	gluLookAt(cameraPos.x + 1.0, cameraPos.y + 3.0, cameraPos.z + 2.8, cameraCenter.x, cameraCenter.y, cameraCenter.z, 0.0f, 1.0f, 0.0f);
}

std::vector<Model> models;

std::vector<std::vector<Model>> modelsHistory;


void SetupLights()
{
	for (size_t i = 0; i < lights.size(); i++)
		lights.at(i).Render();
}


void SortObjects()
{
	for (auto& objOfGroup : objs)
		if (!objOfGroup.obj.empty())
			objOfGroup.obj.clear();

	for (auto& model : models)
		if (model.group != -1)
		{
			objs.at(model.group).obj.push_back(&model);
			model.groupCenter = objs.at(model.group).center;
			model.groupTrans = objs.at(model.group).transGroup;
		}
}

void ShowModelAttributes(Model& model, std::string name)
{
	if (ImGui::CollapsingHeader(name.c_str()))
	{
		ImGui::Checkbox(std::string("Select " + model.id).c_str(), &model.selected);
		ImGui::Checkbox(std::string("Uniform Scale " + model.id).c_str(), &model.uniformScale);
		ImGui::ColorEdit3(std::string("Color " + model.id).c_str(), &model.color.R);
		ImGui::DragFloat3(std::string("Position " + model.id).c_str(), &model.position.at(0), 0.01f);

		if (model.uniformScale)
		{
			ImGui::DragFloat(std::string("Scale " + model.id).c_str(), &model.scale.at(0), 0.001f);
			model.scale.at(2) = model.scale.at(1) = model.scale.at(0);
		}
		else
			ImGui::DragFloat3(std::string("Scale " + model.id).c_str(), &model.scale.at(0), 0.001f);

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

		if (model.GetPrimitive() != Primitive::Cube && model.GetPrimitive() != Primitive::WireCube && model.GetPrimitive() != Primitive::Teapot && model.GetPrimitive() != Primitive::Model)
		{
			ImGui::DragInt(std::string("Slices " + model.id).c_str(), &model.slices, 1);
			ImGui::DragInt(std::string("Stacks " + model.id).c_str(), &model.stacks, 1);
		}

		if (model.GetPrimitive() == Primitive::Model)
		{
			static char tempBuf[60] = { 0 };
			ImGui::InputText(std::string("Model Name " + model.id).c_str(), tempBuf, IM_ARRAYSIZE(tempBuf));
			ImGui::SameLine();
			if (ImGui::Button("Apply Path"))
				model.Assign3DModel("models/" + std::string(tempBuf) + "/" + std::string(tempBuf) + ".3ds");
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

			model.TranslateAccum(model.groupTrans.at(0), model.groupTrans.at(1), model.groupTrans.at(2));
			model.groupCenter.at(0) = model.groupCenter.at(1) = model.groupCenter.at(2) = 0.0f;
			model.groupTrans.at(0) = model.groupTrans.at(1) = model.groupTrans.at(2) = 0.0f;
			SortObjects();
		}

		ImGui::Spacing();
	}
}


void CheckAllCollisions()
{
	if (lastHit == nullptr)
		return;
	CheckCoinsCollision();
	lastHit = nullptr;
}

void RenderUI()
{
	coins.Render();
	score.Render();
	health.Render();
}

void ClearSelected()
{
	for (auto& model : models)
		model.selected = false;
}

void SelectUnSelectGroup(int i)
{
	for (auto& model : models)
		if (model.group == i)
			model.selected = !model.selected;
}

void MouseMove()
{
	ImGuiIO& io = ImGui::GetIO();
	mouseDeltX = io.MouseDelta.x / 100.0f;
	mouseDeltY = io.MouseDelta.y / 100.0f;
	if (io.MouseDown[0] && !ImGui::IsAnyWindowHovered() && !ImGui::IsAnyWindowFocused())
		for (auto& model : models)
			if (model.selected)
				model.TranslateAccum(mouseDeltX, 0, mouseDeltY);
}



void RenderIMGUI()
{
	CheckAllCollisions();
	MouseMove();

	RenderUI();



	static bool showCode = false;
	ImGui::Begin("3D Editor");


	if (ImGui::Button("Unselect All"))
		ClearSelected();

	ImGui::Checkbox("Show Code", &showCode);

	if (ImGui::CollapsingHeader("Camera Settings"))
	{
		if (ImGui::Button("Reset Camera Position"))
		{
			cameraPos.x = cameraPos.y = cameraPos.z = 0;
			cameraCenter.x = cameraCenter.y = cameraCenter.z = 0;
			angle = 0.0f;
			radius = 1.5f;
		}
		ImGui::DragFloat3("Camera Eye", &cameraPos.x, 0.1f);
		ImGui::DragFloat3("Camera Center", &cameraCenter.x, 0.1f);
	}

	if (ImGui::CollapsingHeader("UI"))
	{
		if (ImGui::Button("Reset Camera Position"))
		{

		}
		ImGui::DragFloat3("Camera Eye", &score.pos.at(0), 0.1f);
		ImGui::DragFloat3("Camera Center", &cameraCenter.x, 0.1f);
	}

	if (ImGui::CollapsingHeader("Light Settings"))
	{
		if (ImGui::Button("Reset Light Setup"))
			for (size_t i = 0; i < lights.size(); i++)
				lightColor[0] = lightColor[1] = lightColor[2] = 1.0f;


		for (size_t i = 0; i < lights.size(); i++)
		{
			if (ImGui::CollapsingHeader(std::string("Light " + std::to_string(i)).c_str()))
			{
				ImGui::Indent(20);
				ImGui::ColorEdit3(std::string("Light Color: " + std::to_string(i)).c_str(), lights.at(i).diffuse);
				ImGui::DragFloat3(std::string("Light Position: " + std::to_string(i)).c_str(), lights.at(i).position, 0.1f);



				static int selectedType = 0;
				ImGui::RadioButton("Exponent", &selectedType, 0);	ImGui::SameLine();
				ImGui::RadioButton("Cutoff", &selectedType, 1);	ImGui::SameLine();
				ImGui::RadioButton("Direction", &selectedType, 2);

				if (lights.at(i).type == LightType::EXPONENT)
					ImGui::DragFloat(std::string("Exponent: " + std::to_string(i)).c_str(), &lights.at(i).exponent, 0.1f);
				if (lights.at(i).type == LightType::CUTOFF)
					ImGui::DragFloat(std::string("Cutoff Angle: " + std::to_string(i)).c_str(), &lights.at(i).angle, 0.1f);
				if (lights.at(i).type == LightType::DIRECTION)
					ImGui::DragFloat3(std::string("Direction: " + std::to_string(i)).c_str(), lights.at(i).direction, 0.1f);

				switch (selectedType)
				{
				case 0: lights.at(i).type = LightType::EXPONENT; break;
				case 1: lights.at(i).type = LightType::CUTOFF; break;
				case 2: lights.at(i).type = LightType::DIRECTION; break;
				default:
					break;
				}

				ImGui::Unindent(20);
			}

		}
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

	ImGui::SameLine();
	if (ImGui::Button("Group"))
		objs.push_back(Object("Group" + std::to_string(Randomize(0, 1000))));


	if (ImGui::Button("3D Model"))
	{
		Model* model3D = new Model();
		model3D->Assign3DModel("");
		models.push_back(*model3D);
	}
	ImGui::SameLine();
	if (ImGui::Button("Light"))
		if (lights.size() < GL_MAX_LIGHTS)
		{
			LightModel light(lights.size());
			lights.push_back(light);
		}



	static int i;
	for (auto& obj : objs)
	{

		if (ImGui::Button(std::string("(Un)Select " + obj.name).c_str()))
			if (!obj.obj.empty())
				SelectUnSelectGroup(obj.obj.at(0)->group);

		ImGui::SameLine();
		if (ImGui::CollapsingHeader(std::string("Group " + obj.name).c_str()))
		{
			float arr[]{ 0.1, 0.1, 0.1 };
			ImGui::DragFloat3(std::string("Position: " + obj.name).c_str(), &obj.transGroup.at(0), 0.1f);
			ImGui::SameLine();
			if (ImGui::Button("Reset Position"))
				obj.transGroup.at(0) = obj.transGroup.at(1) = obj.transGroup.at(2) = 0.0f;
			obj.Translate();
			ImGui::DragFloat3(std::string("Rotation: " + obj.name).c_str(), &obj.rotateGroup.at(0), 0.1f);
			ImGui::SameLine();
			if (ImGui::Button("Reset Rotation"))
				obj.rotateGroup.at(0) = obj.rotateGroup.at(1) = obj.rotateGroup.at(2) = 0.0f;
			obj.Rotate();

			if (ImGui::Button(std::string("Duplicate Group " + obj.name).c_str()))
			{
				for (auto& model : obj.obj)
				{
					Model newModel = *model;
					newModel.group = objs.size();
					newModel.id = std::to_string(model->numofModels++);
					models.push_back(newModel);
				}
				objs.push_back(Object(obj.name + std::to_string(Randomize(0, 1000))));
				SortObjects();
				break;
			}

			ImGui::Checkbox(std::string("Show Center " + obj.name).c_str(), &obj.showCenter);

			if (obj.showCenter)
			{
				ImGui::DragFloat3(std::string("Center Position: " + obj.name).c_str(), &obj.center.at(0), 0.01f);
				ImGui::Checkbox(std::string("Centralize: " + obj.name).c_str(), &obj.centralize);

				if (obj.centralize)
					obj.CalculateEstimatedCenter();

				obj.RenderCenter();
				ImGui::Spacing();
				ImGui::Spacing();
			}
			ImGui::Indent(20);
			for (size_t j = 0; j < obj.obj.size(); j++)
			{
				if (obj.obj.size() == j)
				{
					SortObjects();
					break;
				}
				std::string name = obj.obj.at(j)->GetPrimitveString() + std::to_string(i++);
				ShowModelAttributes(*obj.obj.at(j), name);
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

		if (model.GetPrimitive() == Primitive::Model)
			code << name << ".Assign3DModel(\"" << model.path << "\");\n";

		code << name << ".Translate(" << model.position.at(0) << ", " << model.position.at(1) << ", " << model.position.at(2) << ");\n";

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

	if (updateData)
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

Model* CheckCollision(float x, float z)
{
	for (auto& model : models)
		if (model.collider)
			for (auto& modelCollision : models)
				if (modelCollision.collider && &modelCollision != &model && model.group != -1)
					if (ModelsIntresect(model, modelCollision, x, z) && objs.at(model.group).name == "Character")
						return &modelCollision;
	return nullptr;
}

static int historyNum = 0;
void key(unsigned char key, int x, int y)
{
	ImGuiIO& io = ImGui::GetIO();
	io.AddInputCharacter(key);
	if (key == 'n')
		if (modelsHistory.size() - historyNum > 0)
		{
			historyNum++;
			models = modelsHistory[modelsHistory.size() - historyNum];
		}


	//#TODO Work on The Redo 
	if (key == 'm')
		if (historyNum > 1)
		{
			historyNum--;
			models = modelsHistory[(modelsHistory.size() - historyNum)];
		}

	if (key == 'w')
		radius -= 0.5f;
	if (key == 's')
		radius += 0.5f;

	if (key == 'a')
		angle -= 5.0f;
	if (key == 'd')
		angle += 5.0f;

	if (key == 'q')
		cameraPos.y += 0.5f;
	if (key == 'e')
		cameraPos.y -= 0.5f;

	if (key == 'i')
		cameraCenter.z -= 0.1f;
	if (key == 'k')
		cameraCenter.z += 0.1f;

	if (key == 'j')
		cameraCenter.x -= 0.1f;
	if (key == 'l')
		cameraCenter.x += 0.1f;

	if (key == 'z')
		for (auto& model : models)
			if (model.selected)
				model.TranslateAccum(0, 0.1, 0);

	if (key == 'x')
		for (auto& model : models)
			if (model.selected)
				model.TranslateAccum(0, -0.1, 0);

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

void CheckCoinsCollision()
{
	if (objs.at(lastHit->group).name.substr(0, 5) == "Coins")
	{
		for (size_t i = 0; i < objs.at(lastHit->group).obj.size(); i++)
		{
			objs.at(lastHit->group).obj.at(i)->collider = false;
			objs.at(lastHit->group).obj.at(i)->visible = false;
		}

		std::cout << "Hit coins!!" << std::endl;
		coinsVal++;
	}
}

void key(int key, int x, int y)
{

	ImGuiIO& io = ImGui::GetIO();
	io.AddInputCharacter(key + 256);

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

	if (!pass)
	{
		Model* collidedWith = nullptr;
		collidedWith = CheckCollision(0.0f, limit);
		if (collidedWith == nullptr)
			collidedWith = CheckCollision(0.0f, -limit);
		if (collidedWith == nullptr)
			collidedWith = CheckCollision(limit, 0.0f);
		if (collidedWith == nullptr)
			collidedWith = CheckCollision(-limit, 0.0f);
		if (collidedWith != nullptr)
			if (collidedWith->group != -1)
			{
				std::cout << objs.at(collidedWith->group).name << std::endl;
				lastHit = collidedWith;
			}
	}
	else
		lastHit = nullptr;


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

	std::stringstream groupCode;
	for (size_t i = 0; i < objs.size(); i++)
	{
		std::string groupName = objs.at(i).name + std::to_string(i);
		groupCode << "Object " << groupName << "(\"" << objs.at(i).name << "\");\n";

		if (!objs.at(i).centralize)
			groupCode << groupName + ".centralize = false;\n";

		if (objs.at(i).center.at(0) == 0 && objs.at(i).center.at(1) == 0 && objs.at(i).center.at(2) == 0)
			groupCode << groupName + ".SetCenter(" << objs.at(i).center.at(0) << "," << objs.at(i).center.at(1) << "," << objs.at(i).center.at(2) << ");\n";

		if (objs.at(i).transGroup.at(0) == 0 && objs.at(i).transGroup.at(1) == 0 && objs.at(i).transGroup.at(2) == 0)
			groupCode << groupName + ".SetGroupTranslate(" << objs.at(i).transGroup.at(0) << "," << objs.at(i).transGroup.at(1) << "," << objs.at(i).transGroup.at(2) << ");\n";

		if (objs.at(i).rotateGroup.at(0) == 0 && objs.at(i).rotateGroup.at(1) == 0 && objs.at(i).rotateGroup.at(2) == 0)
			groupCode << groupName + ".SetGroupRotate(" << objs.at(i).rotateGroup.at(0) << "," << objs.at(i).rotateGroup.at(1) << "," << objs.at(i).rotateGroup.at(2) << ");\n";

		groupCode << "objs" << ".emplace_back(" << groupName << ");\n\n";
	}

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
			myFile << groupCode.str();
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
			myFile << groupCode.str();
			myFile << code.str();
			myFile << "}\n";
		}
	}
}

void HistoryTimer(int value)
{
	bool same = true;

	//#TODO Optimize to only include the changed

	if (!modelsHistory.empty())
		for (size_t i = 0; i < (models.size() < modelsHistory.at(modelsHistory.size() - 1).size() ? models.size() : modelsHistory.at(modelsHistory.size() - 1).size()); i++)
		{
			Model& modelHis = modelsHistory.at(modelsHistory.size() - 1).at(i);
			Model& model = models.at(i);
			for (size_t i = 0; i < model.position.size(); i++)
				if (model.position.at(i) != modelHis.position.at(i) || model.groupTrans.at(i) != modelHis.groupTrans.at(i) || model.scale.at(i) != modelHis.scale.at(i) || model.rotate.at(i) != modelHis.rotate.at(i))
					same = false;
		}
	else
		same = false;

	if (!same)
	{
		modelsHistory.erase(modelsHistory.end() - historyNum, modelsHistory.end());
		historyNum = 0;
		modelsHistory.push_back(models);
	}
	glutTimerFunc(2000, HistoryTimer, 2000);
}

void WriteHeaderBackup()
{
	backup = true;
	WriteHeader();
}



int main(int argc, char** argv)
{
	srand(time(0));
	float R = (float)((rand() % 100) / 100.0f);
	std::cout << R << std::endl;
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGB);
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
	glPixelStorei(GL_UNPACK_ALIGNMENT, 1);


	IMGUI_CHECKVERSION();
	ImGui::CreateContext();
	ImGuiIO& io = ImGui::GetIO(); (void)io;
	ImGui::StyleColorsDark();
	ImGui_ImplGLUT_Init();
	ImGui_ImplGLUT_InstallFuncs();
	ImGui_ImplOpenGL2_Init();

	gluOrtho2D(0, WIDTH, 0, HEIGHT);

	glutDisplayFunc(glut_display_func);

	glutKeyboardFunc(key);
	glutSpecialFunc(key);
	Generate(100);
	glutTimerFunc(10, HistoryTimer, 10);
	SortObjects();
	std::atexit(WriteHeaderBackup);


	glEnable(GL_DEPTH_TEST);
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	glEnable(GL_NORMALIZE);
	glEnable(GL_COLOR_MATERIAL);

	glShadeModel(GL_SMOOTH);

	LightModel baseLight(0);
	baseLight.SetPosition(5.6f, 10.0f, 7.5f);
	lights.push_back(baseLight);
	glutMainLoop();

	// Cleanup
	ImGui_ImplOpenGL2_Shutdown();
	ImGui_ImplGLUT_Shutdown();
	ImGui::DestroyContext();



	return 1;
}