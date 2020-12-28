#pragma once
#include "Model.h"
void GenerateModels(std::vector<Model>& models, std::vector<Object>& objs)
{

//Backup at: 2020-11-13 at: 1:54:46

 // Cube0
Model Cube0;
Cube0.CreateCube(0.5);
Cube0.Translate(-1.16, 0.19, 0);
Cube0.Scale(3.03, 3.03, 3.03);
models.emplace_back(Cube0);

 // Cube1
Model Cube1;
Cube1.CreateCube(0.5);
Cube1.Translate(-1.13, 0.86, 0);
models.emplace_back(Cube1);

 // Cube2
Model Cube2;
Cube2.CreateCube(0.5);
Cube2.Translate(-1.13, -0.67, 0);
models.emplace_back(Cube2);

}
