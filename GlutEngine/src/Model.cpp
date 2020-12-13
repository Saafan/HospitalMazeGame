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

void Model::Rotate(float x, float y, float z)
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

void Model::SetColor(float R, float G, float B)
{
	color.R = R;
	color.G = G;
	color.B = B;
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

void Model::Render()
{
	glPushMatrix();


	glColor3f(color.R, color.G, color.B);


	glTranslatef(position.at(0) + groupTrans.at(0), position.at(1) + groupTrans.at(1), position.at(2) + groupTrans.at(2));

	glRotatef(rotate.at(0), 1, 0, 0);
	glRotatef(rotate.at(1), 0, 1, 0);
	glRotatef(rotate.at(2), 0, 0, 1);

	glScalef(scale.at(0), scale.at(1), scale.at(2));

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

	glColor3f(1.0f, 1.0f, 1.0f);

	glPopMatrix();
}
