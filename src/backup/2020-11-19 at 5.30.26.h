#pragma once
#include "Model.h"
void GenerateModels(std::vector<Model>& models, std::vector<Object>& objs)
{

//Backup at: 2020-11-19 at: 5:30:26

Object Character0("Character");
Character0.centralize = true;
Character0.SetCenter(-0.06,0.01,0.025);
Character0.SetGroupTranslate(0,0,0);
Character0.SetGroupRotate(0,0,0);
objs.emplace_back(Character0);

Object Group6261("Group626");
Group6261.centralize = true;
Group6261.SetCenter(0,0,0);
Group6261.SetGroupTranslate(0,0,0);
Group6261.SetGroupRotate(0,0,0);
objs.emplace_back(Group6261);

 // Cube0 of Group Character
Model Cube0;
Cube0.CreateCube(0.5);
Cube0.Translate(0.08, 0.02, 0.85);
Cube0.Scale(0.55, 0.55, 0.55);
Cube0.SetColor(0.4117, 0, 1);
Cube0.group = 0;
models.emplace_back(Cube0);

 // Cylinder1 of Group Character
Model Cylinder1;
Cylinder1.CreateCylinder(0.5, 0.5, 0.5, 125, 124);
Cylinder1.Translate(0.2, 0, 0.8);
Cylinder1.Scale(1, 0.3, 1);
Cylinder1.SetColor(0.2647, 0, 0);
Cylinder1.group = 0;
models.emplace_back(Cylinder1);

 // CollisionBox2
Model CollisionBox2;
CollisionBox2.CreateWireCube(0.5);
CollisionBox2.Translate(-0.14, 0, 0);
CollisionBox2.Scale(1.84, 1.63, 1.46);
CollisionBox2.Rotate(0, 12, 0);
CollisionBox2.collider = true;
models.emplace_back(CollisionBox2);

 // CollisionBox3 of Group Character
Model CollisionBox3;
CollisionBox3.CreateWireCube(0.5);
CollisionBox3.Translate(0.22, -0.02, 0.98);
CollisionBox3.Scale(2.32, 1.2, 1);
CollisionBox3.collider = true;
CollisionBox3.group = 0;
models.emplace_back(CollisionBox3);

}
