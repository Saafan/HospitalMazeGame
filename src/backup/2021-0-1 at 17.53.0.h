#pragma once
#include "Model.h"
void GenerateModels(std::vector<Model>& models, std::vector<Object>& objs)
{

//Backup at: 2021-0-1 at: 17:53:0

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

Object ground4("ground");
ground4.SetCenter(0,0,0);
ground4.SetGroupTranslate(0,0,0);
ground4.SetGroupRotate(0,0,0);
objs.emplace_back(ground4);

Object keys5("keys");
keys5.SetCenter(0,0,0);
keys5.SetGroupTranslate(0,0,0);
keys5.SetGroupRotate(0,0,0);
objs.emplace_back(keys5);

Object chains6("chains");
chains6.SetCenter(0,0,0);
chains6.SetGroupTranslate(0,0,0);
chains6.SetGroupRotate(0,0,0);
objs.emplace_back(chains6);

Object Group437("Group43");
Group437.SetCenter(0,0,0);
Group437.SetGroupTranslate(0,0,0);
Group437.SetGroupRotate(0,0,0);
objs.emplace_back(Group437);

 // Model3D0 of Group Character
Model Model3D0;
Model3D0.Assign3DModel("models/patient/patient.3ds");
Model3D0.Translate(-1.8, 0, 2.48);
Model3D0.Scale(0.017, 0.014, 0.014);
Model3D0.group = 0;
models.emplace_back(Model3D0);

 // CollisionBox1 of Group Character
Model CollisionBox1;
CollisionBox1.CreateWireCube(0.5);
CollisionBox1.Translate(-1.67, 0.3, 2.48);
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

 // Model3D3 of Group ground
Model Model3D3;
Model3D3.Assign3DModel("models/floor/floor.3ds");
Model3D3.Translate(-5.56, -1.5, 0);
Model3D3.Scale(0.056, 0.024, 0.024);
Model3D3.group = 4;
models.emplace_back(Model3D3);

 // Model3D4
Model Model3D4;
Model3D4.Assign3DModel("");
Model3D4.Translate(0, 0.29, 0);
Model3D4.Scale(1.062, 1, 1);
models.emplace_back(Model3D4);

 // Model3D5 of Group Group43
Model Model3D5;
Model3D5.Assign3DModel("models/walls/walls.3ds");
Model3D5.Translate(-2.98, 2.01, -1.63);
Model3D5.Scale(0.036, 0.062, 0.035);
Model3D5.Rotate(-90, 0, 0);
Model3D5.group = 7;
models.emplace_back(Model3D5);

 // Model3D6 of Group Group43
Model Model3D6;
Model3D6.Assign3DModel("models/walls/walls.3ds");
Model3D6.Translate(-1.27, 5.02, -1.67);
Model3D6.Scale(0.028, 0.042, 0.034);
Model3D6.Rotate(-90, 0, -90);
Model3D6.group = 7;
models.emplace_back(Model3D6);

 // Model3D7 of Group Group43
Model Model3D7;
Model3D7.Assign3DModel("models/walls/walls.3ds");
Model3D7.Translate(-1.27, -4.03, -1.67);
Model3D7.Scale(0.028, 0.042, 0.034);
Model3D7.Rotate(-90, 0, -90);
Model3D7.group = 7;
models.emplace_back(Model3D7);

 // Model3D8 of Group door
Model Model3D8;
Model3D8.Assign3DModel("models/door/door.3ds");
Model3D8.Translate(0, 1.21, -2.26);
Model3D8.Scale(-0.029, -0.052, -0.043);
Model3D8.group = 2;
models.emplace_back(Model3D8);

 // Model3D9 of Group keys
Model Model3D9;
Model3D9.Assign3DModel("models/keys/keys.3ds");
Model3D9.Translate(-0.02, 0, 0);
Model3D9.Scale(0.05, 0.05, 0.05);
Model3D9.group = 5;
models.emplace_back(Model3D9);

 // Model3D10 of Group chains
Model Model3D10;
Model3D10.Assign3DModel("models/chains/chains.3ds");
Model3D10.Translate(-1.92, -1.5, 4.68);
Model3D10.Scale(-0.064, 0.06, 0.037);
Model3D10.group = 6;
models.emplace_back(Model3D10);

 // Model3D11
Model Model3D11;
Model3D11.Assign3DModel("models/sign/sign.3ds");
Model3D11.Translate(1.65, 2.59, -0.15);
Model3D11.Scale(0.104, 0.104, 0.104);
Model3D11.Rotate(-90, -90, 0);
models.emplace_back(Model3D11);

 // Model3D12
Model Model3D12;
Model3D12.Assign3DModel("models/pic1/pic1.3ds");
Model3D12.Translate(-2.03, -3.91, -1.79);
Model3D12.Scale(0.143, 0.143, 0.143);
Model3D12.Rotate(90, 0, -90);
models.emplace_back(Model3D12);

 // Model3D13
Model Model3D13;
Model3D13.Assign3DModel("models/pic2/pic2.3ds");
Model3D13.Translate(1.37, -4.99, -2.46);
Model3D13.Scale(0.171, 0.171, 0.171);
Model3D13.Rotate(90, 0, 90);
models.emplace_back(Model3D13);

 // Model3D14
Model Model3D14;
Model3D14.Assign3DModel("models/doctorBed/doctorBed.3ds");
Model3D14.Translate(1.34, 0, 0);
Model3D14.Scale(0.011, 0.011, 0.011);
models.emplace_back(Model3D14);

 // Model3D15
Model Model3D15;
Model3D15.Assign3DModel("models/secretary/secretary.3ds");
Model3D15.Translate(0, 0, 0);
Model3D15.Scale(0.005, 0.005, 0.005);
Model3D15.Rotate(0, -306, 0);
models.emplace_back(Model3D15);

 // CollisionBox16 of Group Character
Model CollisionBox16;
CollisionBox16.CreateWireCube(0.5);
CollisionBox16.Translate(1.8, 0.5, -1.01);
CollisionBox16.Scale(0.629, 1.783, 0.503);
CollisionBox16.Rotate(0, 180, 0);
CollisionBox16.collider = true;
CollisionBox16.group = 0;
models.emplace_back(CollisionBox16);

 // Model3D17 of Group Character
Model Model3D17;
Model3D17.Assign3DModel("models/character/character.3ds");
Model3D17.Translate(1.8, 0, -0.82);
Model3D17.Scale(0.005, 0.005, 0.005);
Model3D17.Rotate(0, 180, 0);
Model3D17.group = 0;
models.emplace_back(Model3D17);

 // Model3D18
Model Model3D18;
Model3D18.Assign3DModel("models/doctor/doctor.3ds");
Model3D18.Translate(0, 0, 0);
Model3D18.Scale(0.005, 0.005, 0.005);
models.emplace_back(Model3D18);

}
