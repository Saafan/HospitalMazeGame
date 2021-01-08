#include "Model.h"



Model::Model()
{
	id = std::to_string(numofModels++);
}

int Model::numofModels = 0;

void Model::Translate(float f_x, float f_y, float f_z)
{
	position.at(0) = f_x;
	position.at(1) = f_y;
	position.at(2) = f_z;
}

void Model::TranslateAccum(float f_x, float f_y, float f_z)
{
	position.at(0) += f_x;
	position.at(1) += f_y;
	position.at(2) += f_z;
}

void Model::Scale(float f_x, float f_y, float f_z)
{
	scale.at(0) = f_x;
	scale.at(1) = f_y;
	scale.at(2) = f_z;
}

void Model::Rotate(float x, float y, float z, float centerX, float centerY, float centerZ)
{
	rotate.at(0) = x;
	rotate.at(1) = y;
	rotate.at(2) = z;
}

std::string Model::GetPrimitveString()
{
	if (prim == Primitive::Cube)
		return "Cube";

	if (prim == Primitive::WireCube)
		return "CollisionBox";

	if (prim == Primitive::Sphere)
		return "Sphere";

	if (prim == Primitive::Tours)
		return "Torus";

	if (prim == Primitive::Teapot)
		return "Teapot";

	if (prim == Primitive::Cone)
		return "Cone";

	if (prim == Primitive::Cylinder)
		return "Cylinder";

	if (prim == Primitive::Model)
		return "Model3D";

	return "";
}

void Model::AssignVariables(Primitive f_prim, float f_size, float f_radius, float f_height, int f_slices, int f_stacks)
{
	prim = f_prim;
	size = f_size;
	radius = f_radius;
	modelHeight = f_height;
	slices = f_slices;
	stacks = f_stacks;
}

std::string Model::GetName()
{
	std::string name;
	for (size_t i = 7; i < path.length(); i++)
		if (i == 7)
			name += std::toupper(path[i]);
		else if (path[i] != '/')
			name += path[i];
		else
			return name;
}

void Model::SetColor(float R, float G, float B)
{
	color.R = R;
	color.G = G;
	color.B = B;
}

void Model::SetAnimParam(float transX, float transY, float transZ, float rotX, float rotY, float rotZ, float scaleX, float scaleY, float scaleZ)
{

	transFactor.at(0) = transX;
	transFactor.at(1) = transY;
	transFactor.at(2) = transZ;

	rotFactor.at(0) = rotX;
	rotFactor.at(1) = rotY;
	rotFactor.at(2) = rotZ;

	scaleFactor.at(0) = scaleX;
	scaleFactor.at(1) = scaleY;
	scaleFactor.at(2) = scaleZ;
}

void Model::PlaySoundOnce()
{
	if (soundFileName.empty()) return;
	PlaySound(std::string("sounds/" + soundFileName).c_str(), NULL, SND_ASYNC);
}

void Model::PlayAnimSoundOnce()
{
	if (animSoundFileName.empty()) return;
	PlaySound(std::string("sounds/" + animSoundFileName).c_str(), NULL, SND_ASYNC);
}

void drawCircle(int x, int y, float r) {

	glPushMatrix();
	glTranslatef(x, y, 0);
	glColor3f(1.0f, 0.5f, 0.2f);
	GLUquadric* quadObj = gluNewQuadric();
	gluDisk(quadObj, 0, r, 50, 50);
	glPopMatrix();
}

void Model::CreateCube(float size)
{
	AssignVariables(Primitive::Cube, size);
	glutSolidCube(size);
}


void Model::CreateWireCube(float size)
{
	AssignVariables(Primitive::WireCube, size);
	glutWireCube(size);
}

void Model::CreateTours(float innerRadius, float outerRadius, int sidesNum, int rings)
{
	AssignVariables(Primitive::Tours, innerRadius, 0, outerRadius, sidesNum, rings);
	glutSolidTorus(innerRadius, outerRadius, sidesNum, rings);
}

void Model::CreateCylinder(float baseRadius, float topRadius, float height, float slices, float stacks)
{
	AssignVariables(Primitive::Cylinder, baseRadius, topRadius, height, slices, stacks);
	GLUquadricObj* qobj;
	qobj = gluNewQuadric();
	gluQuadricDrawStyle(qobj, GLU_FILL);
	gluCylinder(qobj, size, radius, height, slices, stacks);
}

void Model::CreateCone(float base, float height, int slices, int stacks)
{
	AssignVariables(Primitive::Cone, base, 0, height, slices, stacks);
	prim = Primitive::Cone;
	glutSolidCone(base, height, slices, stacks);
}

void Model::CreateSphere(float radius, float slices, float stacks)
{
	AssignVariables(Primitive::Sphere, size, 0, 0, slices, stacks);
	glutSolidSphere(radius, slices, stacks);
}

void Model::CreateTeapot(float size)
{
	AssignVariables(Primitive::Teapot, size);
	glutSolidTeapot(size);
}

void Model::Assign3DModel(std::string path)
{
	AssignVariables(Primitive::Model);
	if (path.empty()) return;
	this->path = path;
	model3D = new Model_3DS();
	model3D->Load((char*)path.c_str());
}

void Model::Draw3DModel()
{
	if (path.empty()) return;
	model3D->Draw();
}

void Model::Render()
{

	if (hidden)
		return;

	glPushMatrix();

	if (animateNow)
		Animate();

	if (animated)
		glColor3f(1, 0, 1);
	else if (selected)
		glColor3f(0.31f, 0.98f, 0.48f);
	else
		glColor3f(color.R, color.G, color.B);

	glTranslatef(position.at(0) + groupTrans.at(0) + std::sin(positionAnim.at(0)), position.at(1) + groupTrans.at(1) + std::sin(positionAnim.at(1)), position.at(2) + groupTrans.at(2) + std::sin(positionAnim.at(2)));


	glRotatef(rotate.at(0) + groupRotate.at(0) + rotateAnim.at(0) * 180, 1, 0, 0);
	glRotatef(rotate.at(1) + groupRotate.at(1) + rotateAnim.at(1) * 180, 0, 1, 0);
	glRotatef(rotate.at(2) + groupRotate.at(2) + rotateAnim.at(2) * 180, 0, 0, 1);


	if (prim == Primitive::Model)
		glScalef((scale.at(0) + std::sin(scaleAnim.at(0)))/100, (scale.at(1) + std::sin(scaleAnim.at(1)))/100, (scale.at(2) + std::sin(scaleAnim.at(2)))/100);
	else
		glScalef(scale.at(0) + std::sin(scaleAnim.at(0)), scale.at(1) + std::sin(scaleAnim.at(1)), scale.at(2) + std::sin(scaleAnim.at(2)));


	if (prim == Primitive::Cube)
		CreateCube(size);

	if (prim == Primitive::WireCube)
		CreateWireCube(size);

	if (prim == Primitive::Cone)
		CreateCone(size, modelHeight, slices, stacks);

	if (prim == Primitive::Sphere)
		CreateSphere(size, slices, stacks);

	if (prim == Primitive::Cylinder)
		CreateCylinder(size, radius, modelHeight, slices, stacks);

	if (prim == Primitive::Tours)
		CreateTours(size, modelHeight, slices, stacks);

	if (prim == Primitive::Teapot)
		CreateTeapot(size);

	if (prim == Primitive::Model)
		Draw3DModel();

	glColor3f(1.0f, 1.0f, 1.0f);

	glPopMatrix();
}

void Model::Animate()
{
	ImGuiIO& io = ImGui::GetIO();
	static float timeSum = 0;
	timeSum += io.DeltaTime;

	std::cout << timeSum << std::endl;

	if (timeSum < animTime)
		for (size_t i = 0; i < 3; i++)
		{
			rotateAnim[i] += rotFactor[i];
			positionAnim[i] += transFactor[i];
			scaleAnim[i] += scaleFactor[i];
		}
	else
		for (size_t i = 0; i < 3; i++)
		{
			rotateAnim[i] = 0;
			positionAnim[i] = 0;
			scaleAnim[i] = 0;
			animateNow = false;
			timeSum = 0;
		}

}
