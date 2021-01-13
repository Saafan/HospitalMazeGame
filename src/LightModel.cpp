#include "LightModel.h"

LightModel::LightModel(int lightIndex, float angle)
{
	this->lightIndex = lightIndex + GL_LIGHT0;
	glLightfv(this->lightIndex, GL_POSITION, position);
	glLightfv(this->lightIndex, GL_DIFFUSE, diffuse);
	this->angle = angle;

	lightSourcePosition.CreateWireCube(0.1f);
	lightSourceDirection.CreateWireCube(0.1f);
	lightSourceDirection.CreateWireCube(0.1f);
	lightSourcePosition.SetColor(1.0f, 0.0f, 0.0f);
	lightSourceDirection.SetColor(0.0f, 1.0f, 0.0f);
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
	position[3] = spotLight;
}

void LightModel::SetAmbient(float x, float y, float z)
{
	GLfloat temp[4]{ x, y, z, 1.0f };
	//glLightfv(lightIndex, GL_AMBIENT, ambient);
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
}


void LightModel::SetDirection(float x, float y, float z)
{
	direction[0] = x;
	direction[1] = y;
	direction[2] = z;
}


void LightModel::Render()
{
	glEnable(lightIndex);
	if (viewWireBoxes)
	{
		lightSourcePosition.Translate(position[0] + GroupTrans[0], position[1] + GroupTrans[1], position[2] + GroupTrans[2]);
		lightSourceDirection.Translate(direction[0] + GroupTrans[0], direction[1] + GroupTrans[1], direction[2] + GroupTrans[2]);
		lightSourcePosition.Render();
		lightSourceDirection.Render();
		float lightToSpot[3];
		float lightToSpotDistance;
		for (size_t i = 0; i < 3; i++)
			lightToSpot[i] = lightSourcePosition.position[i] - lightSourceDirection.position[i];
		using namespace std;
		lightToSpotDistance = sqrt(powf(lightToSpot[0], 2) + powf(lightToSpot[1], 2) + powf(lightToSpot[2], 2));
		glBegin(GL_LINE);
		glVertex3f(lightSourcePosition.position[0], lightSourcePosition.position[1], lightSourcePosition.position[2]);
		glVertex3f(lightSourceDirection.position[0], lightSourceDirection.position[1], lightSourceDirection.position[2]);
		glEnd();
	}



	glLightModelfv(GL_LIGHT_MODEL_AMBIENT, modelAmbient);


	glLightf(lightIndex, GL_SPOT_CUTOFF, angle);

	glLightf(lightIndex, GL_SPOT_EXPONENT, exponent);
	float totalDirection[4] = { direction[0] + GroupTrans[0] , direction[1] + GroupTrans[1] , direction[2] + GroupTrans[2]  , 1.0f };
	glLightfv(lightIndex, GL_SPOT_DIRECTION, totalDirection);
	glLightfv(lightIndex, GL_DIFFUSE, diffuse);
	//glLightfv(lightIndex, GL_AMBIENT, ambient);
	glLightfv(lightIndex, GL_SPECULAR, specular);
	float totalPosition[4] = { position[0] + GroupTrans[0] , position[1] + GroupTrans[1] , position[2] + GroupTrans[2]  , spotLight };
	glLightfv(lightIndex, GL_POSITION, totalPosition);

}
