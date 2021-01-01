#include "Object.h"

Object::Object(std::string name)
{
	this->name = name;
	centerCube.CreateCube(0.2f);

}


void Object::RenderCenter()
{
	centerCube.Translate(center.at(0), center.at(1), center.at(2));
	centerCube.Render();
}

void Object::Add(Model& model)
{
	obj.push_back(&model);
}

void Object::CalculateEstimatedCenter()
{
	vec3 sumCenters;
	for (size_t i = 0; i < obj.size(); i++)
	{
		sumCenters.x += obj.at(i)->position.at(0) + transGroup.at(0);
		sumCenters.y += obj.at(i)->position.at(1) + transGroup.at(1);
		sumCenters.z += obj.at(i)->position.at(2) + transGroup.at(2);
	}
	SetCenter(sumCenters.x / obj.size(), sumCenters.y / obj.size(), sumCenters.z / obj.size());
}

void Object::Translate()
{
	for (const auto& model : obj)
	{
		model->groupTrans.at(0) = transGroup.at(0);
		model->groupTrans.at(1) = transGroup.at(1);
		model->groupTrans.at(2) = transGroup.at(2);
	}
}

void Object::Rotate()
{
	for (const auto& model : obj)
	{
		model->groupCenter.at(0) = center.at(0);
		model->groupCenter.at(1) = center.at(1);
		model->groupCenter.at(2) = center.at(2);


		model->Rotate(model->rotate.at(0), model->rotate.at(1), model->rotate.at(2), center.at(0), center.at(1), center.at(2));
		model->groupRotate.at(0) = rotateGroup.at(0);
		model->groupRotate.at(1) = rotateGroup.at(1);
		model->groupRotate.at(2) = rotateGroup.at(2);
	}
}

void Object::SetCenter(float x, float y, float z)
{
	center.at(0) = x;
	center.at(1) = y;
	center.at(2) = z;
}

void Object::SetGroupTranslate(float x, float y, float z)
{
	transGroup.at(0) = x;
	transGroup.at(1) = y;
	transGroup.at(2) = z;
}

void Object::SetGroupRotate(float x, float y, float z)
{
	rotateGroup.at(0) = x;
	rotateGroup.at(1) = y;
	rotateGroup.at(2) = z;
}
