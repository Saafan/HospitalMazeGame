#pragma once
#include "Model.h"
void GenerateModels(std::vector<Model>& models, std::vector<Object>& objs)
{

//Backup at: 2020-11-13 at: 2:45:47

 // Cube0
Model Cube0;
Cube0.CreateCube(0.5);
Cube0.Translate(-0.81, -0.31, 0);
Cube0.Scale(-0.23, -0.52, -0.39);
Cube0.Rotate(0, 0, -5.5);
Cube0.SetColor(0.9686, 0.3333, 0.6235);
models.emplace_back(Cube0);

 // Cube1 of Group Character
Model Cube1;
Cube1.CreateCube(0.5);
Cube1.Translate(-1.38, 0.5, -1.8);
Cube1.Rotate(9.2, -33.3, 0);
Cube1.group = 0;
models.emplace_back(Cube1);

 // Sphere2 of Group Character
Model Sphere2;
Sphere2.CreateSphere(0.5, 10, 10);
Sphere2.Translate(-0.7, -1.2, -1.8);
Sphere2.SetColor(0.138, 0, 0.9902);
Sphere2.group = 0;
models.emplace_back(Sphere2);

}
