#pragma once
#include "Renderer.h"
class Object
{

public:
	//#TODO Implement Rotation Around Object's Center
	Object(std::string name);
	std::string name;
	std::vector<Model*> obj;

	std::vector<float> center{ 0.0f,0.0f, 0.0f };
	std::vector<float> rotateGroup{ 0.0f, 0.0f, 0.0f };
	std::vector<float> transGroup{ 0.0f, 0.0f, 0.0f };

	Model centerCube;
	bool showCenter = false;
	bool centralize = true;
	bool centralizeCollisionBox = false;
	void RenderCenter();

	void Add(Model& model);
	void CalculateEstimatedCenter();
	void Translate();
	void Rotate();

	void SetCenter(float x, float y, float z);
	void SetGroupTranslate(float x, float y, float z);
	void SetGroupRotate(float x, float y, float z);

};