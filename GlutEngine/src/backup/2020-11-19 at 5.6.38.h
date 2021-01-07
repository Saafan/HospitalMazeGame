#pragma once
#include "Model.h"
void GenerateModels(std::vector<Model>& models, std::vector<Object>& objs)
{

//Backup at: 2020-11-19 at: 5:6:38

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

 // Cube0
Model Cube0;
Cube0.CreateCube(0.5);
Cube0.Translate(0, 0, 0);
models.emplace_back(Cube0);

 // Sphere1
Model Sphere1;
Sphere1.CreateSphere(0.5, 10, 10);
Sphere1.Translate(0, 0, 0);
models.emplace_back(Sphere1);

 // Torus2
Model Torus2;
Torus2.CreateTours(0.1, 0.8, 10, 10);
Torus2.Translate(0, 0, 0);
models.emplace_back(Torus2);

}
