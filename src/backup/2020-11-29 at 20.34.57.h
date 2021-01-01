#pragma once
#include "Model.h"
void GenerateModels(std::vector<Model>& models, std::vector<Object>& objs)
{

//Backup at: 2020-11-29 at: 20:34:57

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

Object door2("door");
door2.SetCenter(0,0,0);
door2.SetGroupTranslate(0,0,0);
door2.SetGroupRotate(0,0,0);
objs.emplace_back(door2);

Object Character7613("Character761");
Character7613.SetCenter(0,0,0);
Character7613.SetGroupTranslate(0,0,0);
Character7613.SetGroupRotate(0,0,0);
objs.emplace_back(Character7613);

Object Group7094("Group709");
Group7094.SetCenter(0,0,0);
Group7094.SetGroupTranslate(0,0,0);
Group7094.SetGroupRotate(0,0,0);
objs.emplace_back(Group7094);

 // Model3D0 of Group Character
Model Model3D0;
Model3D0.Assign3DModel("models/patient/patient.3ds");
Model3D0.Translate(-1, 0, 2.9);
Model3D0.Scale(0.017, 0.014, 0.014);
Model3D0.group = 0;
models.emplace_back(Model3D0);

 // CollisionBox1 of Group Character
Model CollisionBox1;
CollisionBox1.CreateWireCube(0.5);
CollisionBox1.Translate(-0.87, 0.3, 2.9);
CollisionBox1.Scale(1, 1.643, 1);
CollisionBox1.collider = true;
CollisionBox1.group = 0;
models.emplace_back(CollisionBox1);

 // Model3D2 of Group Coins
Model Model3D2;
Model3D2.Assign3DModel("models/coins/coins.3ds");
Model3D2.Translate(0, 0.11, 0);
Model3D2.Scale(-0.006, -0.006, -0.006);
Model3D2.group = 1;
models.emplace_back(Model3D2);

 // Model3D3
Model Model3D3;
Model3D3.Assign3DModel("models/floor/floor.3ds");
Model3D3.Translate(-5.51, -1.5, 0);
Model3D3.Scale(0.056, 0.024, 0.024);
models.emplace_back(Model3D3);

 // Model3D4
Model Model3D4;
Model3D4.Assign3DModel("");
Model3D4.Translate(0, 0, 0);
models.emplace_back(Model3D4);

 // Model3D5
Model Model3D5;
Model3D5.Assign3DModel("models/walls/walls.3ds");
Model3D5.Translate(-2.98, 2.01, -1.63);
Model3D5.Scale(0.036, 0.062, 0.035);
Model3D5.Rotate(-90, 0, 0);
models.emplace_back(Model3D5);

 // Model3D6
Model Model3D6;
Model3D6.Assign3DModel("models/walls/walls.3ds");
Model3D6.Translate(-1.27, 5.02, -1.67);
Model3D6.Scale(0.028, 0.042, 0.034);
Model3D6.Rotate(-90, 0, -90);
models.emplace_back(Model3D6);

 // Model3D7
Model Model3D7;
Model3D7.Assign3DModel("models/walls/walls.3ds");
Model3D7.Translate(-1.27, -4.03, -1.67);
Model3D7.Scale(0.028, 0.042, 0.034);
Model3D7.Rotate(-90, 0, -90);
models.emplace_back(Model3D7);

 // Model3D8 of Group door
Model Model3D8;
Model3D8.Assign3DModel("models/door/door.3ds");
Model3D8.Translate(0, 1.21, -2.26);
Model3D8.Scale(-0.029, -0.052, -0.043);
Model3D8.group = 2;
models.emplace_back(Model3D8);

}
