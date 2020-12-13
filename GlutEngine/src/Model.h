#pragma once
#include "Renderer.h"

enum class Primitive
{
	Cube = 0,
	Cylinder = 1,
	Cone = 2,
	Tours = 3,
	Teapot = 4,
	Sphere = 5,
	WireCube
};

struct Color
{
	float R = 1.0f, G = 1.0f, B = 1.0f;
};



class Model
{

public:
	Model();
	static int numofModels;

	void Render();

	void Translate(float f_x, float f_y, float f_z);
	void TranslateAccum(float f_x, float f_y, float f_z);

	void Scale(float f_x, float f_y, float f_z);

	void Rotate(float x, float y, float z);

	Primitive GetPrimitive() const { return prim; }
	std::string GetPrimitveString();
	void SetPrimitive(Primitive val) { prim = val; }


	void SetColor(float R, float G, float B);

	void CreateTours(float innerRadius = 0.1f, float outerRadius = 0.8f, int sidesNum = 10, int rings = 10);
	void CreateCylinder(float baseRadius = 0.5f, float topRadius = 0.5f, float height = 0.5f, float slices = 10, float stacks = 10);
	void CreateCube(float size = 0.5f);
	void CreateWireCube(float size = 0.5f);
	void CreateCone(float base = 0.5f, float height = 0.5f, int slices = 10, int stacks = 10);
	void CreateSphere(float radius = 0.5f, float slices = 10, float stacks = 10);
	void CreateTeapot(float size = 0.5f);

	float size = 0.5f;	// Also Base & Base Radius
	float radius = 1.0f;
	float modelHeight = 1.0f; // Also outerRadius
	int slices = 10; //Also SidesNum
	int stacks = 10; //Also Rings

	int group = -1;
	std::string id = "0";
	bool uniformScale = false;
	bool collider = false;

	std::vector<float> position{ 0.0f, 0.0f, 0.0f };
	std::vector<float> scale{ 1.0f, 1.0f, 1.0f };
	std::vector<float> rotate{ 0.0f, 0.0f, 0.0f };
	std::vector<float> groupTrans{0.0f, 0.0f, 0.0f};

	Color color;

private:
	Primitive prim;
	
	void AssignVariables(Primitive prim = Primitive::Cube, float size = 0.0f, float radius = 0.0f, float outerRadius = 0.0f, int slices = 0, int slacks = 0);

};