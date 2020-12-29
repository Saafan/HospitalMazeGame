#pragma once
#include "Renderer.h"

enum class LightType
{
	CUTOFF,
	EXPONENT,
	DIRECTION
};

class LightModel
{
public:
	LightModel(int lightIndex = 0, LightType type = LightType::EXPONENT, float angle = 0.0f);

	void EnableLight();
	void DisableLight();
	void SetPosition(float x, float y, float z);
	void SetAmbient(float x, float y, float z);
	void SetDiffuse(float x, float y, float z);
	void SetSpecular(float x, float y, float z);

	void Render();

	int lightIndex;
	float angle = 30.0f;
	float exponent = 90.0f;

	LightType type = LightType::EXPONENT;

	//#TODO To be Added
	//GLfloat ambient[4]{ 1.0f, 1.0f, 1.0f, 1.0f };
	//GLfloat specular[4]{ 1.0f, 1.0f, 1.0f, 1.0f };

	GLfloat diffuse[4]{ 1.0f, 1.0f, 1.0f, 1.0f };
	GLfloat position[4]{ 5.6f, 10.0f, 7.5f, 1.0f };

	GLfloat direction[3]{ -1.0, 0.0, 0.0};
};
