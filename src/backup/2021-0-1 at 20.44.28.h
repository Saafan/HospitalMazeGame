#pragma once
#include "Model.h"
void GenerateModels(std::vector<Model>& models, std::vector<Object>& objs)
{

//Backup at: 2021-0-1 at: 20:44:28

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
ground4.centralize = false;
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

 // Model3D0 of Group Coins
Model Model3D0;
Model3D0.Assign3DModel("models/coins/coins.3ds");
Model3D0.Translate(-6.64, -0.81, -1.09);
Model3D0.Scale(-0.006, -0.006, -0.006);
Model3D0.Rotate(0, 90, 0);
Model3D0.group = 1;
models.emplace_back(Model3D0);

 // Model3D1 of Group ground
Model Model3D1;
Model3D1.Assign3DModel("models/floor/floor.3ds");
Model3D1.Translate(-5.56, -1.5, 0);
Model3D1.Scale(0.06, 0.1, 0.03);
Model3D1.group = 4;
models.emplace_back(Model3D1);

 // Model3D2 of Group Group43
Model Model3D2;
Model3D2.Assign3DModel("models/walls/walls.3ds");
Model3D2.Translate(-2.61, 2.63, -1.74);
Model3D2.Scale(0.037, 0.062, 0.035);
Model3D2.Rotate(-90, 0, 0);
Model3D2.group = 7;
models.emplace_back(Model3D2);

 // Model3D3 of Group Group43
Model Model3D3;
Model3D3.Assign3DModel("models/walls/walls.3ds");
Model3D3.Translate(-1.38, -3.77, -1.67);
Model3D3.Scale(0.037, 0.042, 0.034);
Model3D3.Rotate(-90, 0, -90);
Model3D3.group = 7;
models.emplace_back(Model3D3);

 // Model3D4 of Group door
Model Model3D4;
Model3D4.Assign3DModel("models/door/door.3ds");
Model3D4.Translate(0.4, 1.72, -2.79);
Model3D4.Scale(-0.039, -0.062, -0.036);
Model3D4.group = 2;
models.emplace_back(Model3D4);

 // Model3D5 of Group keys
Model Model3D5;
Model3D5.Assign3DModel("models/keys/keys.3ds");
Model3D5.Translate(1000, 0, 0);
Model3D5.Scale(0.05, 0.05, 0.05);
Model3D5.group = 5;
models.emplace_back(Model3D5);

 // Model3D6 of Group chains
Model Model3D6;
Model3D6.Assign3DModel("models/chains/chains.3ds");
Model3D6.Translate(10, -1.5, 4.68);
Model3D6.Scale(-0.064, 0.06, 0.037);
Model3D6.group = 6;
models.emplace_back(Model3D6);

 // Model3D7
Model Model3D7;
Model3D7.Assign3DModel("models/sign/sign.3ds");
Model3D7.Translate(2.45, 3.42, -0.58);
Model3D7.Scale(0.104, 0.104, 0.104);
Model3D7.Rotate(-90, -90, 0);
models.emplace_back(Model3D7);

 // Model3D8
Model Model3D8;
Model3D8.Assign3DModel("models/pic1/pic1.3ds");
Model3D8.Translate(-2.2, -3.75, -1.79);
Model3D8.Scale(0.143, 0.143, 0.143);
Model3D8.Rotate(90, 0, -90);
models.emplace_back(Model3D8);

 // Model3D9
Model Model3D9;
Model3D9.Assign3DModel("models/pic2/pic2.3ds");
Model3D9.Translate(4.11, -5.69, -2.46);
Model3D9.Scale(0.171, 0.171, 0.171);
Model3D9.Rotate(90, 0, 90);
models.emplace_back(Model3D9);

 // Model3D10
Model Model3D10;
Model3D10.Assign3DModel("models/doctorBed/doctorBed.3ds");
Model3D10.Translate(1000, 0, 0);
Model3D10.Scale(0.011, 0.011, 0.011);
models.emplace_back(Model3D10);

 // Model3D11
Model Model3D11;
Model3D11.Assign3DModel("models/secretary/secretary.3ds");
Model3D11.Translate(4.37, -1.28, -1.66);
Model3D11.Scale(0.014, 0.014, 0.014);
Model3D11.Rotate(0, -365.5, 0);
models.emplace_back(Model3D11);

 // Model3D12 of Group Character
Model Model3D12;
Model3D12.Assign3DModel("models/character/character.3ds");
Model3D12.Translate(1.85, -1.41, -5.39);
Model3D12.Scale(0.014, 0.014, 0.014);
Model3D12.Rotate(0, 180, 0);
Model3D12.group = 0;
models.emplace_back(Model3D12);

 // Model3D13
Model Model3D13;
Model3D13.Assign3DModel("models/doctor/doctor.3ds");
Model3D13.Translate(1000, 0, 0);
Model3D13.Scale(0.005, 0.005, 0.005);
models.emplace_back(Model3D13);

 // Model3D14
Model Model3D14;
Model3D14.Assign3DModel("models/chair/chair.3ds");
Model3D14.Translate(5.55, -1.27, 3.68);
Model3D14.Scale(0.114, 0.114, 0.114);
models.emplace_back(Model3D14);

 // Model3D15
Model Model3D15;
Model3D15.Assign3DModel("models/table/table.3ds");
Model3D15.Translate(-0.52, -1.54, 2.38);
Model3D15.Scale(0.195, 0.195, 0.195);
models.emplace_back(Model3D15);

 // Model3D16
Model Model3D16;
Model3D16.Assign3DModel("models/chair/chair.3ds");
Model3D16.Translate(3.6, -1.29, -4.37);
Model3D16.Scale(0.114, 0.114, 0.114);
Model3D16.Rotate(0, 180, 0);
models.emplace_back(Model3D16);

 // Model3D17
Model Model3D17;
Model3D17.Assign3DModel("models/secdisk/secdisk.3ds");
Model3D17.Translate(-1.16, -2.55, 6.3);
Model3D17.Scale(0.083, 0.083, 0.083);
Model3D17.Rotate(0, 90, 0);
models.emplace_back(Model3D17);

 // Model3D18
Model Model3D18;
Model3D18.Assign3DModel("models/docdesk/docdesk.3ds");
Model3D18.Translate(1000, 0, 0);
Model3D18.Scale(0.041, 0.041, 0.041);
models.emplace_back(Model3D18);

 // Model3D19
Model Model3D19;
Model3D19.Assign3DModel("models/maga1/maga1.3ds");
Model3D19.Translate(0.28, -0.08, 4.49);
Model3D19.Scale(0.046, 0.046, 0.046);
Model3D19.Rotate(0, -12.5, 0);
models.emplace_back(Model3D19);

 // Model3D20
Model Model3D20;
Model3D20.Assign3DModel("models/maga2/maga2.3ds");
Model3D20.Translate(0.6, -0.08, 4.94);
Model3D20.Scale(0.046, 0.046, 0.046);
Model3D20.Rotate(0, -19.5, 0);
models.emplace_back(Model3D20);

 // Model3D21 of Group Group43
Model Model3D21;
Model3D21.Assign3DModel("models/walls/walls.3ds");
Model3D21.Translate(-1.61, 5.71, -1.78);
Model3D21.Scale(0.035, 0.015, 0.034);
Model3D21.Rotate(-90, 0, -90);
Model3D21.group = 7;
models.emplace_back(Model3D21);

 // Model3D22
Model Model3D22;
Model3D22.Assign3DModel("models/chair/chair.3ds");
Model3D22.Translate(5.62, -1.27, 5.48);
Model3D22.Scale(0.114, 0.114, 0.114);
models.emplace_back(Model3D22);

 // Model3D23
Model Model3D23;
Model3D23.Assign3DModel("models/chair/chair.3ds");
Model3D23.Translate(3.52, -1.3, -3.67);
Model3D23.Scale(0.114, 0.114, 0.114);
Model3D23.Rotate(0, 180, 0);
models.emplace_back(Model3D23);

 // Model3D24
Model Model3D24;
Model3D24.Assign3DModel("models/chair/chair.3ds");
Model3D24.Translate(3.58, -1.37, 1.76);
Model3D24.Scale(0.114, 0.114, 0.114);
Model3D24.Rotate(0, 180, 0);
models.emplace_back(Model3D24);

 // Model3D25 of Group Coins
Model Model3D25;
Model3D25.Assign3DModel("models/coins/coins.3ds");
Model3D25.Translate(-3.96, -0.93, -3.5);
Model3D25.Scale(-0.006, -0.006, -0.006);
Model3D25.Rotate(0, 90, 0);
Model3D25.group = 1;
models.emplace_back(Model3D25);

 // Model3D26 of Group Coins
Model Model3D26;
Model3D26.Assign3DModel("models/coins/coins.3ds");
Model3D26.Translate(1.57, -0.93, -2.08);
Model3D26.Scale(-0.006, -0.006, -0.006);
Model3D26.Rotate(0, 90, 0);
Model3D26.group = 1;
models.emplace_back(Model3D26);

 // Model3D27 of Group Coins
Model Model3D27;
Model3D27.Assign3DModel("models/coins/coins.3ds");
Model3D27.Translate(0.48, -0.96, 3.52);
Model3D27.Scale(-0.006, -0.006, -0.006);
Model3D27.Rotate(0, 90, 0);
Model3D27.group = 1;
models.emplace_back(Model3D27);

 // Model3D28 of Group Coins
Model Model3D28;
Model3D28.Assign3DModel("models/coins/coins.3ds");
Model3D28.Translate(-3.16, -1.09, 4.26);
Model3D28.Scale(-0.006, -0.006, -0.006);
Model3D28.Rotate(0, 90, 0);
Model3D28.group = 1;
models.emplace_back(Model3D28);

 // Model3D29 of Group Coins
Model Model3D29;
Model3D29.Assign3DModel("models/coins/coins.3ds");
Model3D29.Translate(-4.77, -1.03, 5.12);
Model3D29.Scale(-0.006, -0.006, -0.006);
Model3D29.Rotate(0, 90, 0);
Model3D29.group = 1;
models.emplace_back(Model3D29);

 // Model3D30 of Group Coins
Model Model3D30;
Model3D30.Assign3DModel("models/coins/coins.3ds");
Model3D30.Translate(-2.7, -0.9, 1.1);
Model3D30.Scale(-0.006, -0.006, -0.006);
Model3D30.Rotate(0, 90, 0);
Model3D30.group = 1;
models.emplace_back(Model3D30);

 // Model3D31
Model Model3D31;
Model3D31.Assign3DModel("models/bridge/bridge.3ds");
Model3D31.Translate(-10.82, 0, 0);
Model3D31.Scale(0.062, 0.062, 0.062);
models.emplace_back(Model3D31);

 // Model3D32
Model Model3D32;
Model3D32.Assign3DModel("models/tableu/tableu.3ds");
Model3D32.Translate(-1.17, -6.43, 11.64);
Model3D32.Scale(1.35, 1.35, 1.35);
models.emplace_back(Model3D32);

 // Model3D33
Model Model3D33;
Model3D33.Assign3DModel("");
Model3D33.Translate(0, 0, 0);
models.emplace_back(Model3D33);

}
