#include "LightModel.h"

LightModel::LightModel(int lightIndex, LightType type, float angle)
{
	this->lightIndex = lightIndex + GL_LIGHT0;
	this->type = type;
	glLightfv(this->lightIndex, GL_POSITION, position);
	glLightfv(this->lightIndex, GL_DIFFUSE, diffuse);
	this->angle = angle;
}

void LightModel::EnableLight()
{
	glEnable(lightIndex);
}

void LightModel::DisableLight()
{
	glDisable(lightIndex);
}

void LightModel::SetPosition(float x, float y, float z)
{
	position[0] = x;
	position[1] = y;
	position[2] = z;
	position[3] = 0.0f;
}

void LightModel::SetAmbient(float x, float y, float z)
{
	GLfloat temp[4]{ x, y, z, 1.0f };
	glLightfv(lightIndex, GL_AMBIENT, position);
}

void LightModel::SetDiffuse(float x, float y, float z)
{
	diffuse[0] = x;
	diffuse[1] = y;
	diffuse[2] = z;
	diffuse[3] = 0.0f;
	glLightfv(lightIndex, GL_DIFFUSE, diffuse);
}

void LightModel::SetSpecular(float x, float y, float z)
{
	GLfloat temp[4]{ x, y, z, 1.0f };
	glLightfv(lightIndex, GL_SPECULAR, position);
}

void LightModel::Render()
{

	if (type == LightType::CUTOFF)
		glLightf(lightIndex, GL_SPOT_CUTOFF, angle);

	if (type == LightType::EXPONENT)
		glLightf(lightIndex, GL_SPOT_EXPONENT, exponent);
	if (type == LightType::DIRECTION)
		glLightfv(lightIndex, GL_SPOT_DIRECTION, direction);

	glLightfv(lightIndex, GL_POSITION, position);
	glLightfv(lightIndex, GL_DIFFUSE, diffuse);
}
