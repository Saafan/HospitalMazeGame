#pragma once
#include "Model.h"
void GenerateModels(std::vector<Model>& models, std::vector<Object>& objs)
{

//Backup at: 2020-11-19 at: 4:46:25

Object Character0("Character");
Character0.centralize = true;
Character0.SetCenter(-0.35,1.335,-2.485);
Character0.SetGroupTranslate(-2.5,0.7,-0.8);
Character0.SetGroupRotate(15.3,-138.8,-26.1);
objs.emplace_back(Character0);

Object Cubes1("Cubes");
Cubes1.centralize = false;
Cubes1.SetCenter(0,0,0);
Cubes1.SetGroupTranslate(0,0,0);
Cubes1.SetGroupRotate(0,0,0);
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
Cube0.Translate(2.02, 2.01, 1.98);
Cube0.Scale(-0.23, -0.52, -0.39);
Cube0.Rotate(0, 0, -5.5);
Cube0.SetColor(0.9686, 0.3333, 0.6235);
models.emplace_back(Cube0);

 // Cube1 of Group Character
Model Cube1;
Cube1.CreateCube(0.5);
Cube1.Translate(-0.87, 4.07, -1.67);
Cube1.Scale(1.24, 1.24, 1.24);
Cube1.Rotate(15.3, -138.8, -26.1);
Cube1.group = 0;
models.emplace_back(Cube1);

 // Sphere2 of Group Character
Model Sphere2;
Sphere2.CreateSphere(0.5, 3, 2);
Sphere2.Translate(0.37, 1.4, -1.7);
Sphere2.Scale(2.68, 1, 1);
Sphere2.Rotate(15.3, -138.8, -26.1);
Sphere2.SetColor(0.138, 0, 0.9902);
Sphere2.group = 0;
models.emplace_back(Sphere2);

 // Teapot3
Model Teapot3;
Teapot3.CreateTeapot(0.5);
Teapot3.Translate(-1.6, 0.68, 0);
Teapot3.Scale(-0.01, 0.89, 0.89);
Teapot3.Rotate(-1.5, -1, 1.5);
Teapot3.SetColor(0.008939, 0.3039, 0);
models.emplace_back(Teapot3);

 // Cube4 of Group Cubes
Model Cube4;
Cube4.CreateCube(0.5);
Cube4.Translate(0, 0, 0);
Cube4.group = 1;
models.emplace_back(Cube4);

}
