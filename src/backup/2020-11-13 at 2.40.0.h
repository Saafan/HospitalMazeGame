#pragma once
#include "Model.h"
void GenerateModels(std::vector<Model>& models, std::vector<Object>& objs)
{

//Backup at: 2020-11-13 at: 2:40:0

 // Cube0
Model Cube0;
Cube0.CreateCube(0.5);
Cube0.Translate(-0.5, 0.3, 0);
Cube0.Scale(-0.23, -0.52, -0.39);
Cube0.Rotate(0, 0, -5.5);
Cube0.SetColor(0.9686, 0.3333, 0.6235);
models.emplace_back(Cube0);

 // Cube1 of Group Character
Model Cube1;
Cube1.CreateCube(0.5);
Cube1.Translate(-0.38, 0, 0);
Cube1.Rotate(33.2, 13.9, -35.8);
Cube1.group = 0;
models.emplace_back(Cube1);

}
