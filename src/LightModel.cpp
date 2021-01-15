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
	diffuse[3] = 1.0f;
	glLightfv(lightIndex, GL_DIFFUSE, diffuse);
}

void LightModel::SetSpecular(float x, float y, float z)
{
}


void LightModel::SetSourceAnimation(float x, float y, float z)
{
	animateSource[0] = x;
	animateSource[1] = y;
	animateSource[2] = z;
}

void LightModel::SetFactorAnimation(float x, float y, float z)
{
	animateFactor[0] = x;
	animateFactor[1] = y;
	animateFactor[2] = z;
}

void LightModel::SetAnimationRadius(float x, float y, float z)
{
	animRadius[0] = x;
	animRadius[1] = y;
	animRadius[2] = z;
}

void LightModel::SetAnimationColor(bool r, bool g, bool b)
{
	animColor[0] = r;
	animColor[1] = g;
	animColor[2] = b;
}

void LightModel::SetDirection(float x, float y, float z)
{
	direction[0] = x;
	direction[1] = y;
	direction[2] = z;
}

void LightModel::AnimateLights()
{
	ImGuiIO& io = ImGui::GetIO();
	animateSource[0] += animateFactor[0] * io.DeltaTime;
	animateSource[1] += animateFactor[1] * io.DeltaTime;
	animateSource[2] += animateFactor[2] * io.DeltaTime;

}

void LightModel::Render()
{
	if (enableLight)
		glEnable(lightIndex);
	else
		glDisable(lightIndex);

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

	ImGuiIO& io = ImGui::GetIO();
	glLightf(lightIndex, GL_SPOT_CUTOFF, angle);

	glLightf(lightIndex, GL_SPOT_EXPONENT, exponent);
	float totalDirection[3] = { direction[0] + sin(animateSource[0]) * animRadius[0] + GroupTrans[0] , direction[1] + sin(animateSource[1]) * animRadius[1] + GroupTrans[1] , direction[2] + sin(animateSource[2]) * animRadius[2] + GroupTrans[2] };
	glLightfv(lightIndex, GL_SPOT_DIRECTION, totalDirection);
	for (size_t i = 0; i < 3; i++)
		if (animColor[i])
			animColorFactor[i] += io.DeltaTime * lightChangeSpeed;
	float totalDiffuse[4]{ diffuse[0] + sin(animColorFactor[0]/0.95f) , diffuse[1] + sin(animColorFactor[1] / 0.9f) , diffuse[2] + sin(animColorFactor[2] / 0.85f) , diffuse[3] };
	glLightfv(lightIndex, GL_DIFFUSE, totalDiffuse);
	//glLightfv(lightIndex, GL_AMBIENT, ambient);
	glLightfv(lightIndex, GL_SPECULAR, specular);
	float totalPosition[4] = { position[0] + GroupTrans[0] , position[1] + GroupTrans[1] , position[2] + GroupTrans[2]  , spotLight };
	glLightfv(lightIndex, GL_POSITION, totalPosition);

}
