#include <algorithm>
#include <sstream>
#include <iomanip>
#include <fstream>
#include <windows.h>

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
UI health({ 1.00f, 0.0f, 0.0f }, "Health: ", & healthVal, { 1.2f, 1.90f, 0.0f }, "%%");

int WIDTH = 1100;
int HEIGHT = 950;

bool rotateAround = false;
bool moveWithCenter = true;
bool mouseLock = false;

float mouseDeltX, mouseDeltY = 0;

float radius = 1.5f;
float angle = -45.11f;
float elapsedTime = 0.0f;

static float lightColor[]{ 1.0f, 1.0f, 1.0f };
static float lightPos[]{ 5.6f, 10.0f, 7.5f };

void WriteHeader();

std::stringstream code;

std::vector<Model> models;

std::vector<std::vector<Model>> modelsHistory;

bool firstPerson = true;


vec3 GetCharacterPos()
{
	vec3 pos;
	for (const auto& model : models)
	{
		if (model.group != -1)
			if (objs.at(model.group).name._Equal("Character"))
				if (model.collider)
				{
					pos.x = model.position.at(0);
					pos.y = model.position.at(1);
					pos.z = model.position.at(2);
				}
	}
	return pos;
}

vec3 firstCenter;
vec3 thirdCenter;
float firstAngle;


void SetupCamera()
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	//glOrtho(-0.5, 0.5, -0.5, 0.5, -1, 1);
	gluPerspective(60, 16 / 9, 0.001, 100);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	if (rotateAround)
	{
		cameraPos.x = std::sin(angle * 3.14f / 180.0f) * radius;
		cameraPos.z = std::cos(angle * 3.14f / 180.0f) * radius;
	}

	if (firstPerson)
	{
		firstCenter.x = -std::cos(firstAngle * 3.14f / 180.0f) * 10;
		firstCenter.z = std::sin(firstAngle * 3.14f / 180.0f) * 10;
		gluLookAt(cameraPos.x, cameraPos.y + 0.6f, cameraPos.z, cameraPos.x + firstCenter.x, cameraCenter.y + firstCenter.y, cameraPos.z + firstCenter.z, 0.0f, 1.0f, 0.0f);
	}
	else
	{
		thirdCenter.x = -std::cos(firstAngle * 3.14f / 180.0f) * 4;
		thirdCenter.z = std::sin(firstAngle * 3.14f / 180.0f) * 4;
		gluLookAt(cameraPos.x + thirdCenter.x, cameraPos.y + 3.0, cameraPos.z + thirdCenter.z, cameraCenter.x, cameraCenter.y, cameraCenter.z, 0.0f, 1.0f, 0.0f);
	}

}
void SetupLights()
{
	for (auto& light : lights)
		light.Render();
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
	if (!model.path.empty())
		name = model.GetName() + " " + model.id;

	ImGui::Checkbox(std::string("Select " + model.id).c_str(), &model.selected); ImGui::SameLine();

	if (ImGui::CollapsingHeader(name.c_str()))
	{
		ImGui::Checkbox(std::string("Hide " + model.id).c_str(), &(model.hidden));
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
			ImGui::InputText(std::string("Model Name " + model.id + " " + model.path).c_str(), tempBuf, IM_ARRAYSIZE(tempBuf));
			ImGui::SameLine();
			if (ImGui::Button(std::string("Apply Path Model" + model.id).c_str()))
				model.Assign3DModel("models/" + std::string(tempBuf) + "/" + std::string(tempBuf) + ".3ds");
		}

		if (model.GetPrimitive() == Primitive::WireCube)
		{
			ImGui::Checkbox(std::string("Animate Within " + model.id).c_str(), &model.animated);
			ImGui::Checkbox(std::string("Collider " + model.id).c_str(), &model.collider);
			if (ImGui::CollapsingHeader(std::string("Sound: " + name).c_str()))
			{
				static char tempBuf0[60] = { 0 };
				ImGui::InputText(std::string("Collision Sound Name " + model.id).c_str(), tempBuf0, IM_ARRAYSIZE(tempBuf0));
				ImGui::SameLine();
				if (ImGui::Button(std::string("Apply Path Sound" + model.id).c_str()))
					model.soundFileName = tempBuf0;

				static char tempBuf1[60] = { 0 };
				ImGui::InputText(std::string("Animation Sound Name " + model.id).c_str(), tempBuf1, IM_ARRAYSIZE(tempBuf1));
				ImGui::SameLine();
				if (ImGui::Button(std::string("Apply Path AnimSound" + model.id).c_str()))
					model.animSoundFileName = tempBuf1;
			}
		}

		if (ImGui::CollapsingHeader(std::string("Animate: " + name).c_str()))
		{
			ImGui::DragFloat3("Animate Pos", &model.transFactor[0], 0.0001); ImGui::SameLine();
			if (ImGui::Button(std::string("Reset Pos" + model.id).c_str()))
				model.transFactor[0] = model.transFactor[1] = model.transFactor[2] = 0.0f;

			ImGui::DragFloat3("Animate Rot", &model.rotFactor[0], 0.0001); ImGui::SameLine();
			if (ImGui::Button(std::string("Reset Rot" + model.id).c_str()))
				model.rotFactor[0] = model.rotFactor[1] = model.rotFactor[2] = 0.0f;

			ImGui::DragFloat3("Animate Scale", &model.scaleFactor[0], 0.0001); ImGui::SameLine();
			if (ImGui::Button(std::string("Reset Scale" + model.id).c_str()))
				model.scaleFactor[0] = model.scaleFactor[1] = model.scaleFactor[2] = 0.0f;

			ImGui::DragFloat("Animation Time", &model.animTime, 0.001);
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

void CheckAllCollisions();


Model cubeDirection;



void RenderUI()
{
	glDisable(GL_DEPTH_TEST);
	if (firstPerson)
	{
		coins.Translate(cameraPos.x + firstCenter.x, cameraCenter.y + firstCenter.y + 4.4f, cameraPos.z + firstCenter.z);
		health.Translate(cameraPos.x + firstCenter.x, cameraCenter.y + firstCenter.y + 4.0f, cameraPos.z + firstCenter.z);
	}
	else
	{
		coins.Translate(cameraCenter.x, cameraCenter.y + 2.2f, cameraCenter.z);
		health.Translate(cameraCenter.x, cameraCenter.y + 2.0f, cameraCenter.z);
	}


	coins.Render();
	health.Render();

	glEnable(GL_DEPTH_TEST);
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
	{
		for (auto& model : models)
			if (model.selected)
				model.TranslateAccum(-mouseDeltY, 0, mouseDeltX);
		if (io.MouseDown[0] && !mouseLock)
			firstAngle -= mouseDeltX * 10;
	}
}



void RenderIMGUI()
{
	CheckAllCollisions();
	MouseMove();


	cameraPos = GetCharacterPos();

	static bool showCode = false;
	ImGui::Begin("3D Editor");

	ImGui::Checkbox("Lock Mouse", &mouseLock);

	if (ImGui::Button("Unselect All"))
		ClearSelected();

	static int selectedType = 1;
	ImGui::RadioButton("First Person View", &selectedType, 0);	ImGui::SameLine();
	ImGui::RadioButton("Third Person View", &selectedType, 1);
	if (selectedType == 0)
		firstPerson = true;
	else
		firstPerson = false;

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
		static int selectedType = 1;
		ImGui::RadioButton("Rotate Around", &selectedType, 0);	ImGui::SameLine();
		ImGui::RadioButton("Move with Center", &selectedType, 1);
		rotateAround = false;
		moveWithCenter = false;
		if (selectedType == 0)
			rotateAround = true;
		if (selectedType == 1)
			moveWithCenter = true;
		ImGui::DragFloat3("Camera Eye", &cameraPos.x, 0.1f);
		ImGui::DragFloat3("Camera Center", &cameraCenter.x, 0.1f);
	}

	if (ImGui::CollapsingHeader("UI"))
	{
		if (ImGui::Button("Reset Camera Position"))
		{
		}
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
		objs.emplace_back("Group" + std::to_string(Randomize(0, 1000)));

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
				objs.emplace_back(obj.name + std::to_string(Randomize(0, 1000)));
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

		if (model.animated)
		{
			code << name << ".animated = " << "true;\n";
			code << name << ".SetAnimParam(" << model.transFactor.at(0) << ", " << model.transFactor.at(1) << ", " << model.transFactor.at(2) << ", " << model.rotFactor.at(0) << ", " << model.rotFactor.at(1) << ", " << model.rotFactor.at(2) << ", " << model.scaleFactor.at(0) << ", " << model.scaleFactor.at(1) << ", " << model.scaleFactor.at(2) << ");\n";
		}

		if (model.soundFileName != "")
			code << name << ".soundFileName = \"" << model.soundFileName << "\";\n";

		if (model.animSoundFileName != "")
			code << name << ".animSoundFileName = \"" << model.animSoundFileName << "\";\n";

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
	{
		if (model.animateNow)
			if (model.animated)
				model.Animate();
		model.Render();
	}

	RenderUI();

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
					{
						lastHit = &modelCollision;
						modelCollision.PlaySoundOnce();
						return &modelCollision;
					}
	lastHit = nullptr;
	return nullptr;
}

static int historyNum = 0;
void key(unsigned char key, int x, int y)
{


	ImGuiIO& io = ImGui::GetIO();
	io.AddInputCharacter(key);
	if (key == '[')
		if (modelsHistory.size() - historyNum > 0)
		{
			historyNum++;
			models = modelsHistory[modelsHistory.size() - historyNum];
		}

	//#TODO Work on The Redo
	if (key == ']')
		if (historyNum > 1)
		{
			historyNum--;
			models = modelsHistory[(modelsHistory.size() - historyNum)];
		}

	if (key == 'w')
	{
		if (moveWithCenter)
		{
			cameraCenter.z -= 0.5f;
			cameraPos.z -= 0.5f;
		}
		else
			radius -= 0.5f;
	}
	if (key == 's')
		if (moveWithCenter)
		{
			cameraCenter.z += 0.5f;
			cameraPos.z += 0.5f;
		}
		else
			radius += 0.5f;

	if (key == 'a')
		if (moveWithCenter)
		{
			cameraCenter.x -= 0.5f;
			cameraPos.x -= 0.5f;
		}
		else
			angle -= 5.0f;

	if (key == 'd')
		if (moveWithCenter)
		{
			cameraCenter.x += 0.5f;
			cameraPos.x += 0.5f;
		}
		else
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

	if (key == 'r')
		if (lastHit != nullptr && lastHit->collider && lastHit->animated)
		{
			for (auto& model : models)
			{
				if (model.animateNow || model.animated)
					for (size_t i = 0; i < 3; i++)
					{
						model.positionAnim[i] = 0.0f;
						model.rotateAnim[i] = 0.0f;
						model.scaleAnim[i] = 0.0f;
						lastHit->positionAnim[i] = 0.0f;
						lastHit->rotateAnim[i] = 0.0f;
						lastHit->scaleAnim[i] = 0.0f;
					}
				
			}


			lastHit->PlayAnimSoundOnce();
			lastHit->animateNow = true;
			for (auto& model : objs.at(lastHit->group).obj)
			{

				model->transFactor = lastHit->transFactor;
				model->rotFactor = lastHit->rotFactor;
				model->scaleFactor = lastHit->scaleFactor;

				model->animateNow = true;
			}
		}

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

bool CheckCoinsCollision()
{
	std::string name = "coin";
	if (objs.at(lastHit->group).name.substr(0, name.length()) == name)
	{
		for (auto& model : objs.at(lastHit->group).obj)
		{
			model->collider = false;
			model->hidden = true;
		}

		if (lastHit != nullptr)
			coinsVal += 10;
		lastHit = nullptr;
		return true;
	}
	return false;
}

bool CheckKeyCollision1()
{
	std::string name = "key1";
	if (objs.at(lastHit->group).name.substr(0, name.length()) == name)
	{
		for (auto& model : objs.at(lastHit->group).obj)
		{
			model->collider = false;
			model->hidden = true;
		}
		for (auto& model : models)
		{

			if (model.group != -1)
			{
				if (objs.at(model.group).name == "smallBridge")
				{
					model.collider = false;
					model.hidden = true;
				}
			}
		}

		return true;
	}
	return false;
}

bool CheckKeyCollision2()
{
	std::string name = "key2";
	if (objs.at(lastHit->group).name.substr(0, name.length()) == name)
	{
		for (auto& model : objs.at(lastHit->group).obj)
		{
			model->collider = false;
			model->hidden = true;
		}
		for (auto& model : models)
		{

			if (model.group != -1)
			{
				if (objs.at(model.group).name == "chain")
				{
					model.collider = false;
					model.hidden = true;
				}
			}
		}

		return true;
	}
	return false;
}

bool CheckHealthKitCollision()
{
	std::string name = "HealthKit";
	if (objs.at(lastHit->group).name.substr(0, name.length()) == name)
	{
		//#TODO HealthKit Collision Logic	
		return true;
	}
	return false;
}

bool CheckDeskCollision()
{
	std::string name = "Desk";
	if (objs.at(lastHit->group).name.substr(0, name.length()) == name)
	{
		//#TODO Desk Collision Logic	
		return true;
	}
	return false;
}

bool CheckPrescriptionCollision()
{
	std::string name = "prescription";
	if (objs.at(lastHit->group).name.substr(0, name.length()) == name)
	{

		for (auto& model : models)
		{
			if (coinsVal >= 50) {

				if (model.group != -1)
				{
					if (objs.at(model.group).name == "door")
					{
						model.collider = false;
						model.Rotate(0, 150, 0);
						model.Translate(2.14, 0, -0.34);
						model.soundFileName = "prescription.wav";
					}
					if (objs.at(model.group).name == "hidee")
					{
						model.collider = false;
						model.hidden = true;

					}
				}
			}
		}


		return true;
	}
	return false;
}

void CheckAllCollisions()
{
	if (lastHit == nullptr || lastHit->group == -1)
		return;
	if (!CheckCoinsCollision())
		if (!CheckKeyCollision1())
			if (!CheckKeyCollision2())
				if (!CheckDeskCollision())
					if (!CheckPrescriptionCollision())
						CheckHealthKitCollision();
}

void key(int key, int x, int y)
{
	ImGuiIO& io = ImGui::GetIO();
	io.AddInputCharacter(key + 256);


	if (firstPerson)
		cameraPos = GetCharacterPos();
	else
		cameraCenter = GetCharacterPos();


	bool pass = false;
	const float limit = 0.2f;
	const float speed = 0.1f;
	for (auto& model : models)
		if (model.group != -1)
			if (objs.at(model.group).name == "Character")
			{
				if ((key == GLUT_KEY_DOWN && CheckCollision(-limit, 0.0f) == nullptr) || (key == GLUT_KEY_UP && CheckCollision(limit, 0.0f) == nullptr) || (key == GLUT_KEY_LEFT && CheckCollision(0.0f, -limit) == nullptr) || (key == GLUT_KEY_RIGHT && CheckCollision(0.0f, limit) == nullptr))
					pass = true;
				if (pass)
					if (key == GLUT_KEY_UP) {
						model.TranslateAccum(speed, 0.0f, 0.0f);
						if (firstPerson)
							cameraCenter.z -= speed;
						else
							cameraPos.z -= speed;
					}
					else if (key == GLUT_KEY_DOWN)
					{
						model.TranslateAccum(-speed, 0.0f, 0.0f);
						if (firstPerson)
							cameraCenter.z += speed;
						else
							cameraPos.z += speed;
					}
					else if (key == GLUT_KEY_LEFT)
					{
						model.TranslateAccum(0.0f, 0.0f, -speed);
						if (firstPerson)
							cameraCenter.x -= speed;
						else
							cameraPos.x += speed;
					}
					else if (key == GLUT_KEY_RIGHT)
					{
						model.TranslateAccum(0.0f, 0.0f, speed);
						if (firstPerson)
							cameraCenter.x += speed;
						else
							cameraPos.x -= speed;
					}
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


	for (auto& model : models)
	{
		if (model.GetPrimitive() == Primitive::WireCube)
			model.collider = true;
		model.hidden = false;
		if (model.group != -1)
		{
			if (objs.at(model.group).name == "Character")
			{
				objs.at(model.group).obj.at(0)->position.at(0) = 1.13;
				objs.at(model.group).obj.at(0)->position.at(1) = 0;
				objs.at(model.group).obj.at(0)->position.at(2) = -1.1;

				objs.at(model.group).obj.at(1)->position.at(0) = 1.1;
				objs.at(model.group).obj.at(1)->position.at(1) = 0.64;
				objs.at(model.group).obj.at(1)->position.at(2) = -1.08;
			}

			if (objs.at(model.group).name == "door")
			{
				objs.at(model.group).obj.at(0)->Translate(2.33, 0, 0.04);
				objs.at(model.group).obj.at(0)->Rotate(0, 90, 0);

				objs.at(model.group).obj.at(1)->Translate(2.35, 0.870, 0.04);
				objs.at(model.group).obj.at(1)->Rotate(0, 90, 0);
			}
		}
	}

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