#pragma once
#include "Model.h"
void GenerateModels(std::vector<Model>& models, std::vector<Object>& objs)
{

//Backup at: 2020-11-19 at: 6:55:55

Object Character0("Character");
Character0.SetCenter(0,0,0);
Character0.SetGroupTranslate(0,0,0);
Character0.SetGroupRotate(0,0,0);
objs.emplace_back(Character0);

Object Group6261("Group626");
Group6261.SetCenter(0,0,0);
Group6261.SetGroupTranslate(0,0,0);
Group6261.SetGroupRotate(0,0,0);
objs.emplace_back(Group6261);

 // Cube0 of Group Character
Model Cube0;
Cube0.CreateCube(0.5);
Cube0.Translate(-0.62, 0.02, 0.75);
Cube0.Scale(0.55, 0.55, 0.55);
Cube0.Rotate(13.2, -34.4, -91.5);
Cube0.SetColor(0.4117, 0, 1);
Cube0.group = 0;
models.emplace_back(Cube0);

 // Cylinder1 of Group Character
Model Cylinder1;
Cylinder1.CreateCylinder(0.5, 0.5, 0.5, 125, 124);
Cylinder1.Translate(-0.59, 0, 0.7);
Cylinder1.Scale(0.37, -0.44, 4.43);
Cylinder1.Rotate(13.2, -34.4, -91.5);
Cylinder1.SetColor(0.2647, 0, 0);
Cylinder1.group = 0;
models.emplace_back(Cylinder1);

 // CollisionBox2
Model CollisionBox2;
CollisionBox2.CreateWireCube(0.5);
CollisionBox2.Translate(-0.14, 0, 0);
CollisionBox2.Scale(1.84, 1.63, 1.46);
CollisionBox2.Rotate(-53, 12, 0);
CollisionBox2.collider = true;
models.emplace_back(CollisionBox2);

 // CollisionBox3 of Group Character
Model CollisionBox3;
CollisionBox3.CreateWireCube(0.5);
CollisionBox3.Translate(-0.48, -0.02, 0.88);
CollisionBox3.Scale(2.32, 1.2, 1);
CollisionBox3.Rotate(13.2, -34.4, -91.5);
CollisionBox3.collider = true;
CollisionBox3.group = 0;
models.emplace_back(CollisionBox3);

}
