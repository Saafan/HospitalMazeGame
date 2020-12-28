#pragma once
#include "Model.h"
void GenerateModels(std::vector<Model>& models, std::vector<Object>& objs)
{

//Backup at: 2020-11-19 at: 5:17:57

Object Character0("Character");
Character0.centralize = true;
Character0.SetCenter(-6.43,2.8,-3.3);
Character0.SetGroupTranslate(0,0,0);
Character0.SetGroupRotate(0,0,0);
objs.emplace_back(Character0);

Object Cubes1("Cubes");
Cubes1.centralize = true;
Cubes1.SetCenter(-1.14,0,0);
Cubes1.SetGroupTranslate(0,0,0);
Cubes1.SetGroupRotate(14.6,-33.7,-62.1);
objs.emplace_back(Cubes1);

Object Cones2("Cones");
Cones2.centralize = false;
Cones2.SetCenter(0,0,0);
Cones2.SetGroupTranslate(0,0,0);
Cones2.SetGroupRotate(0,0,0);
objs.emplace_back(Cones2);

Object Group4753("Group475");
Group4753.centralize = true;
Group4753.SetCenter(0,0.3,0);
Group4753.SetGroupTranslate(0,0.3,0);
Group4753.SetGroupRotate(130.4,10.2,-95.3);
objs.emplace_back(Group4753);

 // Cube0 of Group Group475
Model Cube0;
Cube0.CreateCube(0.5);
Cube0.Translate(0, 0, 0);
Cube0.Rotate(130.4, 10.2, -95.3);
Cube0.SetColor(0.4117, 0, 1);
Cube0.group = 3;
models.emplace_back(Cube0);

 // Cylinder1 of Group Group475
Model Cylinder1;
Cylinder1.CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder1.Translate(0, 0, 0);
Cylinder1.Rotate(130.4, 10.2, -95.3);
Cylinder1.SetColor(0.2647, 0, 0);
Cylinder1.group = 3;
models.emplace_back(Cylinder1);

}
