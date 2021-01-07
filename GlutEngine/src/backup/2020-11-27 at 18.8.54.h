#pragma once
#include "Model.h"
void GenerateModels(std::vector<Model>& models, std::vector<Object>& objs)
{

//Backup at: 2020-11-27 at: 18:8:54

Object Character0("Character");
Character0.SetCenter(0,0,0);
Character0.SetGroupTranslate(0,0,0);
Character0.SetGroupRotate(0,0,0);
objs.emplace_back(Character0);

Object Coins1("Coins");
Coins1.SetCenter(0,0,0);
Coins1.SetGroupTranslate(0,0,0);
Coins1.SetGroupRotate(0,0,0);
objs.emplace_back(Coins1);

Object Group8002("Group800");
Group8002.SetCenter(0,0,0);
Group8002.SetGroupTranslate(0,0,0);
Group8002.SetGroupRotate(0,0,0);
objs.emplace_back(Group8002);

 // Cube0
Model Cube0;
Cube0.CreateCube(0.5);
Cube0.Translate(0.08, 2.01, 0.22);
Cube0.Scale(3.43, 9.45, 3.51);
Cube0.SetColor(0.9706, 0, 0);
models.emplace_back(Cube0);

 // Cylinder1
Model Cylinder1;
Cylinder1.CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder1.Translate(0, 0, 0);
models.emplace_back(Cylinder1);

}
