#pragma once
#include "Model.h"
void GenerateModels(std::vector<Model>& models, std::vector<Object>& objs)
{

//Backup at: 2020-11-19 at: 4:57:44

Object Character0("Character");
Character0.centralize = true;
Character0.SetCenter(-6.43,2.8,-3.3);
Character0.SetGroupTranslate(-6.8,1.4,-1.6);
Character0.SetGroupRotate(23.4,-260.4,-26.1);
objs.emplace_back(Character0);

Object Cubes1("Cubes");
Cubes1.centralize = true;
Cubes1.SetCenter(-nan(ind),-nan(ind),-nan(ind));
Cubes1.SetGroupTranslate(0,0,0);
Cubes1.SetGroupRotate(14.6,-33.7,-62.1);
objs.emplace_back(Cubes1);

Object Cones2("Cones");
Cones2.centralize = false;
Cones2.SetCenter(0,0,0);
Cones2.SetGroupTranslate(0,0,0);
Cones2.SetGroupRotate(0,0,0);
objs.emplace_back(Cones2);

 // Sphere0 of Group Character
Model Sphere0;
Sphere0.CreateSphere(0.5, 3, 2);
Sphere0.Translate(0.37, 1.4, -1.7);
Sphere0.Scale(2.68, 1, 1);
Sphere0.Rotate(23.4, -260.4, -26.1);
Sphere0.SetColor(0.138, 0, 0.9902);
Sphere0.group = 0;
models.emplace_back(Sphere0);

 // Teapot1
Model Teapot1;
Teapot1.CreateTeapot(0.5);
Teapot1.Translate(-1.6, 0.68, 0);
Teapot1.Scale(-0.01, 0.89, 0.89);
Teapot1.Rotate(-1.5, -1, 1.5);
Teapot1.SetColor(0.008939, 0.3039, 0);
models.emplace_back(Teapot1);

 // Cube2
Model Cube2;
Cube2.CreateCube(0.5);
Cube2.Translate(-4.6, 0, 0);
Cube2.Scale(3.91, 5.66, 0.62);
Cube2.Rotate(224.1, -122.7, -62.1);
Cube2.SetColor(0.2647, 0.001298, 0.001298);
models.emplace_back(Cube2);

 // Cube3
Model Cube3;
Cube3.CreateCube(0.5);
Cube3.Translate(-0.18, 3.53, 0);
Cube3.Scale(0.83, 0.65, 1);
Cube3.Rotate(0, -16.5, 0);
models.emplace_back(Cube3);

}
