#include "Object.h"

Object::Object(std::string name)
{
	this->name = name;
}

void Object::Add(Model& model)
{
	obj.push_back(&model);
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
		model->Rotate(rotateGroup.at(0), rotateGroup.at(1), rotateGroup.at(2));
}
