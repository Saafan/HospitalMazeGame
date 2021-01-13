#pragma once
#include "Renderer.h"

class LightModel
{
public:
	LightModel(int lightIndex = 0, float angle = 20.0f);

	void EnableLight();
	void DisableLight();
	void SetPosition(float x, float y, float z);
	void SetAmbient(float x, float y, float z);
	void SetDiffuse(float x, float y, float z);
	void SetSpecular(float x, float y, float z);

	void Render();

	int lightIndex;
	float angle = 30.0f;
	int exponent = 10;
	bool spotLight = true;
	bool viewWireBoxes = true;

	Model lightSourcePosition;
	Model lightSourceDirection;
	Model lightCone;

	//#TODO To be Added
	GLfloat ambient[4]{ 0.1f, 0.1f, 0.1f, 1.0f };
	GLfloat specular[4]{ 0.1f, 0.1f, 0.1f, 0.1f };
	GLfloat modelAmbient[4]{ 0.1f, 0.1f, 0.1f, 1.0f };
	GLfloat diffuse[4]{ 0.8f, 0.8f, 0.8f, 1.0f };
	GLfloat position[4]{ 0.0f, 3.0f, 0.0f, (GLfloat)spotLight };

	GLfloat GroupTrans[3]{ 0.0f, 0.0f, 0.0f };
	GLfloat direction[3]{ 0.0, -1.0, 0.0};
	void SetDirection(float x, float y, float z);
};
