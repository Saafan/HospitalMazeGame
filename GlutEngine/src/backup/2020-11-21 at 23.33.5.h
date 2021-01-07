#pragma once
#include "Model.h"
void GenerateModels(std::vector<Model>& models, std::vector<Object>& objs)
{

//Backup at: 2020-11-21 at: 23:33:5

Object Character0("Character");
Character0.SetCenter(0,0,0);
Character0.SetGroupTranslate(0,0,0);
Character0.SetGroupRotate(0,0,0);
objs.emplace_back(Character0);

Object Coins1("Coins");
Coins1.SetCenter(0,0,0);
Coins1.SetGroupTranslate(0,0,0);
Coins1.SetGroupRotate(0,0,0);
objs.emplace_back(Coins1);

Object Group8002("Group800");
Group8002.SetCenter(0,0,0);
Group8002.SetGroupTranslate(0,0,0);
Group8002.SetGroupRotate(0,0,0);
objs.emplace_back(Group8002);

 // Cube0 of Group Character
Model Cube0;
Cube0.CreateCube(0.5);
Cube0.Translate(-0.61, 0, -0.2);
Cube0.SetColor(0.08176, 0.04037, 0.3922);
Cube0.group = 0;
models.emplace_back(Cube0);

 // Sphere1 of Group Character
Model Sphere1;
Sphere1.CreateSphere(0.5, 10, 10);
Sphere1.Translate(-0.58, 0.49, -0.2);
Sphere1.SetColor(0.9902, 0.02427, 0.02427);
Sphere1.group = 0;
models.emplace_back(Sphere1);

 // CollisionBox2 of Group Character
Model CollisionBox2;
CollisionBox2.CreateWireCube(0.5);
CollisionBox2.Translate(-0.56, 0.17, -0.18);
CollisionBox2.Scale(1.64, 2.5, 1.64);
CollisionBox2.collider = true;
CollisionBox2.group = 0;
models.emplace_back(CollisionBox2);

 // CollisionBox3 of Group Coins
Model CollisionBox3;
CollisionBox3.CreateWireCube(0.5);
CollisionBox3.Translate(-3.01, -0.02, 0);
CollisionBox3.Scale(0.1, 1, 1);
CollisionBox3.collider = true;
CollisionBox3.group = 1;
models.emplace_back(CollisionBox3);

 // Sphere4 of Group Coins
Model Sphere4;
Sphere4.CreateSphere(0.5, 10, 10);
Sphere4.Translate(-3.02, 0, 0);
Sphere4.Scale(-0.05, 0.53, 0.53);
Sphere4.SetColor(1, 0.9405, 0);
Sphere4.group = 1;
models.emplace_back(Sphere4);

}
