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

	void Add(Model& model);
	void Translate();
	void Rotate();
};