#pragma once
#include "Model.h"
void GenerateModels(std::vector<Model>& models, std::vector<Object>& objs)
{

//Backup at: 2020-11-17 at: 4:41:30

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
Cube1.Translate(-3.47, 3.47, 1.03);
Cube1.Scale(1.24, 1.24, 1.24);
Cube1.Rotate(141.8, 38, 118.2);
Cube1.group = 0;
models.emplace_back(Cube1);

 // Sphere2 of Group Character
Model Sphere2;
Sphere2.CreateSphere(0.5, 3, 2);
Sphere2.Translate(-2.23, 0.8, 1);
Sphere2.Rotate(141.8, 38, 118.2);
Sphere2.SetColor(0.138, 0, 0.9902);
Sphere2.group = 0;
models.emplace_back(Sphere2);

 // Teapot3
Model Teapot3;
Teapot3.CreateTeapot(0.5);
Teapot3.Translate(-1.6, 0.68, 0);
Teapot3.Scale(0.65, 0.89, 0.89);
Teapot3.Rotate(-1.5, -1, 1.5);
Teapot3.SetColor(0.008939, 0.3039, 0);
models.emplace_back(Teapot3);

 // Cube4
Model Cube4;
Cube4.CreateCube(0.5);
Cube4.Translate(0, 0, 0);
models.emplace_back(Cube4);

 // Cube5
Model Cube5;
Cube5.CreateCube(0.5);
Cube5.Translate(-0.59, 0, 0);
models.emplace_back(Cube5);

}
