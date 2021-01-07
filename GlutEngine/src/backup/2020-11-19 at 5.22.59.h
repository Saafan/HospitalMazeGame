#pragma once
#include "Model.h"
void GenerateModels(std::vector<Model>& models, std::vector<Object>& objs)
{

//Backup at: 2020-11-19 at: 5:22:59

Object Group1480("Group148");
Group1480.centralize = true;
Group1480.SetCenter(-0.06,0.01,0.025);
Group1480.SetGroupTranslate(0,0,0);
Group1480.SetGroupRotate(12.7,-22.7,-142);
objs.emplace_back(Group1480);

 // Cube0 of Group Group148
Model Cube0;
Cube0.CreateCube(0.5);
Cube0.Translate(-0.12, 0.02, 0.05);
Cube0.Scale(0.55, 0.55, 0.55);
Cube0.Rotate(12.7, -22.7, -142);
Cube0.SetColor(0.4117, 0, 1);
Cube0.group = 0;
models.emplace_back(Cube0);

 // Cylinder1 of Group Group148
Model Cylinder1;
Cylinder1.CreateCylinder(0.5, 0.5, 0.5, 125, 124);
Cylinder1.Translate(0, 0, 0);
Cylinder1.Scale(1, 0.3, 1);
Cylinder1.Rotate(12.7, -22.7, -142);
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

}
