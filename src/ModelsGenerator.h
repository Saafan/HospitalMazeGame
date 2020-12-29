#pragma once
#include "Model.h"
void GenerateModels(std::vector<Model>& models, std::vector<Object>& objs)
{

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

Object Character7613("Character761");
Character7613.SetCenter(0,0,0);
Character7613.SetGroupTranslate(0,0,0);
Character7613.SetGroupRotate(0,0,0);
objs.emplace_back(Character7613);

 // Model3D0 of Group Character
Model Model3D0;
Model3D0.Assign3DModel("models/patient/patient.3ds");
Model3D0.Translate(0.3, 0, 0.2);
Model3D0.Scale(0.017, 0.014, 0.014);
Model3D0.Rotate(0, 90, 0);
Model3D0.group = 0;
models.emplace_back(Model3D0);

 // Model3D1
Model Model3D1;
Model3D1.Assign3DModel("models/coins/coins.3ds");
Model3D1.Translate(-0.38, 0, 0);
Model3D1.Scale(0.222, 0.222, 0.222);
Model3D1.Rotate(18, -19.5, 0);
models.emplace_back(Model3D1);

 // CollisionBox2 of Group Character
Model CollisionBox2;
CollisionBox2.CreateWireCube(0.5);
CollisionBox2.Translate(0.43, 0.3, 0.2);
CollisionBox2.Scale(1, 1.643, 1);
CollisionBox2.Rotate(0, 90, 0);
CollisionBox2.collider = true;
CollisionBox2.group = 0;
models.emplace_back(CollisionBox2);

 // CollisionBox3 of Group Coins
Model CollisionBox3;
CollisionBox3.CreateWireCube(0.5);
CollisionBox3.Translate(-3e+04, -3e+04, -3e+04);
CollisionBox3.collider = true;
CollisionBox3.group = 1;
models.emplace_back(CollisionBox3);

 // CollisionBox4 of Group Coins
Model CollisionBox4;
CollisionBox4.CreateWireCube(0.5);
CollisionBox4.Translate(-2e+04, -2e+04, -2e+04);
CollisionBox4.collider = true;
CollisionBox4.group = 1;
models.emplace_back(CollisionBox4);

 // CollisionBox5 of Group Coins
Model CollisionBox5;
CollisionBox5.CreateWireCube(0.5);
CollisionBox5.Translate(-1e+04, -1e+04, -1e+04);
CollisionBox5.Scale(1, 1.016, 1);
CollisionBox5.collider = true;
CollisionBox5.group = 1;
models.emplace_back(CollisionBox5);

 // Model3D6
Model Model3D6;
Model3D6.Assign3DModel("models/coins/coins.3ds");
Model3D6.Translate(0, 0.18, 0);
Model3D6.Scale(0.008, 0.008, 0.008);
models.emplace_back(Model3D6);

 // Model3D7
Model Model3D7;
Model3D7.Assign3DModel("models/doctorBed/doctorBed.3ds");
Model3D7.Translate(1.34, 0, 0);
Model3D7.Scale(0.011, 0.011, 0.011);
models.emplace_back(Model3D7);

 // Model3D8
Model Model3D8;
Model3D8.Assign3DModel("models/floor/floor.3ds");
Model3D8.Translate(0, 0, 0);
Model3D8.Scale(0.013, 0.067, 0.011);
models.emplace_back(Model3D8);

}
