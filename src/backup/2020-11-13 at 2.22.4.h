#pragma once
#include "Model.h"
void GenerateModels(std::vector<Model>& models, std::vector<Object>& objs)
{

//Backup at: 2020-11-13 at: 2:22:4

 // Cube0
Model Cube0;
Cube0.CreateCube(0.5);
Cube0.Translate(0, 0, 0);
models.emplace_back(Cube0);

}
