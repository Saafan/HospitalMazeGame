#pragma once
#include "Model.h"
void GenerateModels(std::vector<Model>& models, std::vector<Object>& objs)
{

//Backup at: 2020-11-13 at: 2:5:55

 // Cube0
Model Cube0;
Cube0.CreateCube(0.5);
Cube0.Translate(-1.16, 0.19, 0);
Cube0.Scale(3.03, 3.03, 3.03);
Cube0.SetColor(0.451, 0, 0);
models.emplace_back(Cube0);

 // Cube1
Model Cube1;
Cube1.CreateCube(0.5);
Cube1.Translate(-1.13, 0.86, 0);
Cube1.SetColor(0.25, 0, 0);
models.emplace_back(Cube1);

 // Cube2
Model Cube2;
Cube2.CreateCube(0.5);
Cube2.Translate(-1.13, -0.67, 0);
Cube2.SetColor(0, 0.3088, 0.1907);
models.emplace_back(Cube2);

 // CollisionBox3 of Group Character
Model CollisionBox3;
CollisionBox3.CreateWireCube(0.5);
CollisionBox3.Translate(0, 0, 0);
CollisionBox3.collider = true;
CollisionBox3.group = 0;
models.emplace_back(CollisionBox3);

}
