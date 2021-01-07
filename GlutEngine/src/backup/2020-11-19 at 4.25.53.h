#pragma once
#include "Model.h"
void GenerateModels(std::vector<Model>& models, std::vector<Object>& objs)
{

//Backup at: 2020-11-19 at: 4:25:53

Object Character0("Character");
Character0.centralize = true;
Character0.SetCenter(3.15,8.735,-1.885);
Character0.SetGroupTranslate(-0.1,6,3.8);
Character0.SetGroupRotate(94.8,-472.1,-66.2);

Object Cubes1("Cubes");
Cubes1.centralize = false;
Cubes1.SetCenter(0,0,0);
Cubes1.SetGroupTranslate(0,0,0);
Cubes1.SetGroupRotate(0,0,0);

Object Cones2("Cones");
Cones2.centralize = false;
Cones2.SetCenter(0,0,0);
Cones2.SetGroupTranslate(0,0,0);
Cones2.SetGroupRotate(0,0,0);

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
Cube1.Translate(2.63, 4.07, -5.67);
Cube1.Scale(1.24, 1.24, 1.24);
Cube1.Rotate(94.8, -472.1, -66.2);
Cube1.group = 0;
models.emplace_back(Cube1);

 // Sphere2 of Group Character
Model Sphere2;
Sphere2.CreateSphere(0.5, 3, 2);
Sphere2.Translate(3.87, 1.4, -5.7);
Sphere2.Rotate(94.8, -472.1, -66.2);
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

}
