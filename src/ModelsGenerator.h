#pragma once
#include "Model.h"
void GenerateModels(std::vector<Model>& models, std::vector<Object>& objs)
{

Object Character0("Character");
Character0.SetCenter(0,0,0);
Character0.SetGroupTranslate(0,0,0);
Character0.SetGroupRotate(0,0,0);
objs.emplace_back(Character0);

 // Model3D0
Model Model3D0;
Model3D0.Assign3DModel("models/floor/floor.3ds");
Model3D0.Translate(2.97, 0, -0.06);
Model3D0.Scale(15.08, 2.171, 3.129);
models.emplace_back(Model3D0);

 // Model3D1
Model Model3D1;
Model3D1.Assign3DModel("models/chair/chair.3ds");
Model3D1.Translate(-1.41, 0.22, -1.85);
Model3D1.Scale(0.178, 0.178, 0.178);
Model3D1.Rotate(0, 90, 0);
models.emplace_back(Model3D1);

 // Model3D2
Model Model3D2;
Model3D2.Assign3DModel("models/chair/chair.3ds");
Model3D2.Translate(-1.14, 0.22, -1.85);
Model3D2.Scale(0.178, 0.178, 0.178);
Model3D2.Rotate(0, 90, 0);
models.emplace_back(Model3D2);

 // Model3D3
Model Model3D3;
Model3D3.Assign3DModel("models/chair/chair.3ds");
Model3D3.Translate(0.98, 0.22, -1.87);
Model3D3.Scale(0.178, 0.178, 0.263);
Model3D3.Rotate(0, 90, 0);
models.emplace_back(Model3D3);

 // Model3D4
Model Model3D4;
Model3D4.Assign3DModel("models/chair/chair.3ds");
Model3D4.Translate(-1.26, 0.22, 1.88);
Model3D4.Scale(0.199, 0.199, 0.199);
Model3D4.Rotate(0, -90, 0);
models.emplace_back(Model3D4);

 // Model3D5
Model Model3D5;
Model3D5.Assign3DModel("models/chair/chair.3ds");
Model3D5.Translate(-0.01, 0.22, 1.89);
Model3D5.Scale(0.199, 0.199, 0.199);
Model3D5.Rotate(0, -90, 0);
models.emplace_back(Model3D5);

 // Model3D6
Model Model3D6;
Model3D6.Assign3DModel("models/coins/coins.3ds");
Model3D6.Translate(-1.85, 0.2, -1.07);
Model3D6.Scale(0.191, 0.191, 0.191);
models.emplace_back(Model3D6);

 // Model3D7
Model Model3D7;
Model3D7.Assign3DModel("models/coins/coins.3ds");
Model3D7.Translate(2.01, 0.2, -1.17);
Model3D7.Scale(0.191, 0.191, 0.191);
models.emplace_back(Model3D7);

 // Model3D8
Model Model3D8;
Model3D8.Assign3DModel("models/coins/coins.3ds");
Model3D8.Translate(-0.77, 0.2, 1.84);
Model3D8.Scale(0.191, 0.191, 0.191);
models.emplace_back(Model3D8);

 // Model3D9
Model Model3D9;
Model3D9.Assign3DModel("models/coins/coins.3ds");
Model3D9.Translate(0.11, 0.2, 0.27);
Model3D9.Scale(0.191, 0.191, 0.191);
models.emplace_back(Model3D9);

 // Model3D10
Model Model3D10;
Model3D10.Assign3DModel("models/secdisk/secdisk.3ds");
Model3D10.Translate(1.12, -0.39, 2.14);
Model3D10.Scale(3.242, 3.242, 3.242);
models.emplace_back(Model3D10);

 // Model3D11
Model Model3D11;
Model3D11.Assign3DModel("models/secretary/secretary.3ds");
Model3D11.Translate(2.2, 0, 1.41);
Model3D11.Scale(0.572, 0.572, 0.572);
Model3D11.Rotate(0, -90, 0);
models.emplace_back(Model3D11);

 // Model3D12
Model Model3D12;
Model3D12.Assign3DModel("models/table/table.3ds");
Model3D12.Translate(-0.59, 0, -0.03);
Model3D12.Scale(0.395, 0.395, 0.395);
Model3D12.Rotate(0, 90, 0);
models.emplace_back(Model3D12);

 // Model3D13
Model Model3D13;
Model3D13.Assign3DModel("models/maga1/maga1.3ds");
Model3D13.Translate(-0.6, 0.66, 0.14);
Model3D13.Scale(0.268, 0.268, 0.268);
Model3D13.Rotate(0, -116, 0);
models.emplace_back(Model3D13);

 // Model3D14
Model Model3D14;
Model3D14.Assign3DModel("models/maga2/maga2.3ds");
Model3D14.Translate(-0.37, 0.68, -0.21);
Model3D14.Scale(0.076, 0.108, 0.076);
Model3D14.Rotate(0, -113, 0);
models.emplace_back(Model3D14);

 // Model3D15
Model Model3D15;
Model3D15.Assign3DModel("models/walls/walls.3ds");
Model3D15.Translate(3.05, 0, -2.05);
Model3D15.Scale(1.8, 2, 0.731);
models.emplace_back(Model3D15);

 // Model3D16
Model Model3D16;
Model3D16.Assign3DModel("models/walls/walls.3ds");
Model3D16.Translate(3.04, -0.08, 2.05);
Model3D16.Scale(1.8, 2.031, 0.731);
models.emplace_back(Model3D16);

 // Model3D17
Model Model3D17;
Model3D17.Assign3DModel("models/walls/walls.3ds");
Model3D17.Translate(2.37, 0, 0);
Model3D17.Scale(0.69, 1.968, 0.731);
Model3D17.Rotate(0, 90, 0);
models.emplace_back(Model3D17);

 // Cube18
Model Cube18;
Cube18.CreateCube(0.5);
Cube18.Translate(2.37, 0.76, 0.05);
Cube18.Scale(-0.152, 3.101, 1);
Cube18.SetColor(1e-06, 0, 0);
models.emplace_back(Cube18);

 // Model3D19
Model Model3D19;
Model3D19.Assign3DModel("models/door/door.3ds");
Model3D19.Translate(2.34, 0, 0.05);
Model3D19.Scale(0.105, 0.236, 0.138);
Model3D19.Rotate(0, -90, 0);
models.emplace_back(Model3D19);

 // Model3D20
Model Model3D20;
Model3D20.Assign3DModel("models/pic1/pic1.3ds");
Model3D20.Translate(0.2, 1.78, -2.02);
Model3D20.Scale(0.384, 0.043, 0.384);
Model3D20.Rotate(90, 90, 0);
models.emplace_back(Model3D20);

 // Model3D21
Model Model3D21;
Model3D21.Assign3DModel("models/pic2/pic2.3ds");
Model3D21.Translate(-0.6, 2, 2.05);
Model3D21.Scale(0.374, 0.166, 0.327);
Model3D21.Rotate(-90, -90, 0);
models.emplace_back(Model3D21);

 // Model3D22
Model Model3D22;
Model3D22.Assign3DModel("models/chains/chains.3ds");
Model3D22.Translate(7.75, 0.78, 0.22);
Model3D22.Scale(0.496, 0.496, 0.496);
Model3D22.Rotate(0, -180, 0);
models.emplace_back(Model3D22);

 // Model3D23
Model Model3D23;
Model3D23.Assign3DModel("");
Model3D23.Translate(0, 0, 0);
models.emplace_back(Model3D23);

 // Model3D24
Model Model3D24;
Model3D24.Assign3DModel("models/walls/walls.3ds");
Model3D24.Translate(8.45, 0, 0);
Model3D24.Scale(0.69, 1.968, 0.731);
Model3D24.Rotate(0, 90, 0);
models.emplace_back(Model3D24);

 // Model3D25
Model Model3D25;
Model3D25.Assign3DModel("models/doctor/doctor.3ds");
Model3D25.Translate(8.3, -0.26, 0.36);
Model3D25.Scale(0.186, 0.186, 0.186);
Model3D25.Rotate(0, -90, 0);
models.emplace_back(Model3D25);

 // Model3D26
Model Model3D26;
Model3D26.Assign3DModel("models/docdesk/docdesk.3ds");
Model3D26.Translate(7.61, 0.41, 0.34);
Model3D26.Scale(0.083, 0.11, 0.083);
Model3D26.Rotate(0, -180, 0);
models.emplace_back(Model3D26);

 // Model3D27
Model Model3D27;
Model3D27.Assign3DModel("models/doctorBed/doctorBed.3ds");
Model3D27.Translate(7.43, 0.44, -1.53);
Model3D27.Rotate(0, -90, 0);
models.emplace_back(Model3D27);

 // Model3D28
Model Model3D28;
Model3D28.Assign3DModel("models/bridge/bridge.3ds");
Model3D28.Translate(5.9, 0.24, -0.02);
Model3D28.Scale(4.245, 4.249, 2.952);
models.emplace_back(Model3D28);

 // Model3D29
Model Model3D29;
Model3D29.Assign3DModel("models/keys/keys.3ds");
Model3D29.Translate(5.28, 0.56, -1.1);
Model3D29.Scale(0.62, 0.62, 0.62);
Model3D29.Rotate(0, 0, 90);
models.emplace_back(Model3D29);

 // Model3D30
Model Model3D30;
Model3D30.Assign3DModel("models/keys/keys.3ds");
Model3D30.Translate(6.29, 0.56, 1.56);
Model3D30.Scale(0.62, 0.62, 0.62);
Model3D30.Rotate(0, 0, 90);
models.emplace_back(Model3D30);

 // Model3D31
Model Model3D31;
Model3D31.Assign3DModel("models/tableu/tableu.3ds");
Model3D31.Translate(6.13, 1.7, 2.07);
Model3D31.Scale(1, 0.681, 1);
Model3D31.Rotate(90, 0, 180);
models.emplace_back(Model3D31);

 // Model3D32
Model Model3D32;
Model3D32.Assign3DModel("models/sign/sign.3ds");
Model3D32.Translate(2.34, 1.83, 0.06);
Model3D32.Scale(0.277, 0.277, 0.277);
Model3D32.Rotate(0, 0, 90);
models.emplace_back(Model3D32);

 // Model3D33 of Group Character
Model Model3D33;
Model3D33.Assign3DModel("models/character/character.3ds");
Model3D33.Translate(0.1, -0.06, 0.2);
Model3D33.Scale(0.253, 0.253, 0.253);
Model3D33.group = 0;
models.emplace_back(Model3D33);

 // CollisionBox34 of Group Character
Model CollisionBox34;
CollisionBox34.CreateWireCube(0.5);
CollisionBox34.Translate(0.15, 0.55, 0.2);
CollisionBox34.Scale(0.696, 2.111, 0.634);
CollisionBox34.collider = true;
CollisionBox34.group = 0;
models.emplace_back(CollisionBox34);

 // Model3D35
Model Model3D35;
Model3D35.Assign3DModel("models/coins/coins.3ds");
Model3D35.Translate(-0.53, 0.14, -1.78);
Model3D35.Scale(0.191, 0.191, 0.191);
models.emplace_back(Model3D35);

 // Model3D36
Model Model3D36;
Model3D36.Assign3DModel("models/coins/coins.3ds");
Model3D36.Translate(1.85, 0.22, 0.97);
Model3D36.Scale(0.191, 0.191, 0.191);
models.emplace_back(Model3D36);

 // Model3D37
Model Model3D37;
Model3D37.Assign3DModel("models/coins/coins.3ds");
Model3D37.Translate(0.67, 0.24, 1.34);
Model3D37.Scale(0.191, 0.191, 0.191);
models.emplace_back(Model3D37);

}
