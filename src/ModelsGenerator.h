#pragma once
#include "Model.h"
#include "LightModel.h"
void GenerateModels(std::vector<Model>& models, std::vector<Object>& objs, std::vector<LightModel>& lights)
{

LightModel light0(0, 20);
light0.lightIndex =16384;
light0.lightIndex =16384;
light0.SetPosition(-1.199, 2.459, 0.006);
light0.SetDiffuse(1, 1, 1);
light0.SetDirection(0.027, -0.088, 0.006);
light0.SetFactorAnimation(0, 0, 2.5);
light0.SetAnimationColor(true, true, true);
light0.lightChangeSpeed =4.33;
lights.push_back(light0);

LightModel light1(1, 20);
light1.lightIndex =16385;
light1.lightIndex =16385;
light1.SetPosition(0.119, 1.696, 0.209);
light1.SetDiffuse(1, 1, 0.972549);
light1.SetDirection(0.698, -1, 0.067);
light1.SetFactorAnimation(3.94, 0, 0);
light1.SetAnimationRadius(0.106, 0.085, 0.085);
light1.SetAnimationColor(true, true, true);
lights.push_back(light1);

LightModel light2(2, 20);
light2.lightIndex =16386;
light2.lightIndex =16386;
light2.SetPosition(0.767, 2.165, 0.6);
light2.SetDiffuse(0.5, 0.5, 0.5);
light2.SetDirection(0.767, -1.226, 0.6);
lights.push_back(light2);

LightModel light3(3, 20);
light3.lightIndex =16387;
light3.lightIndex =16387;
light3.SetPosition(0.652, 2.381, 0.03);
light3.SetDiffuse(1, 1, 1);
light3.SetDirection(2.512, -1.01, 0.03);
lights.push_back(light3);

LightModel light4(4, 20);
light4.lightIndex =16388;
light4.lightIndex =16388;
light4.SetPosition(0.624, 0.707, 0);
light4.SetDiffuse(0.823529, 0.823529, 0.823529);
light4.SetDirection(-0.916, -1.677, 0);
light4.spotLight = false;
light4.SetFactorAnimation(0, 0, 0.09);
light4.SetAnimationRadius(0.085, 0.085, 0.196);
lights.push_back(light4);

LightModel light5(5, 20);
light5.lightIndex =16389;
light5.lightIndex =16389;
light5.SetPosition(0.092, 2.731, -0.239);
light5.SetDiffuse(1, 1, 1);
light5.SetDirection(0.054, -0.486, 0.045);
light5.spotLight = false;
light5.SetFactorAnimation(1.63, 0, 2.03);
light5.SetAnimationRadius(0.085, 0.096, 0.282);
light5.firstRoom =false;
lights.push_back(light5);

LightModel light6(6, 20);
light6.lightIndex =16390;
light6.lightIndex =16390;
light6.SetPosition(0, 3.176, 0);
light6.SetDiffuse(0.470588, 0.470588, 0.470588);
light6.SetDirection(-0.196, -1, 0);
light6.spotLight = false;
light6.SetAnimationColor(true, true, true);
light6.firstRoom =false;
lights.push_back(light6);


Object Character0("Character");
Character0.SetCenter(0,0,0);
Character0.SetGroupTranslate(0,0,0);
Character0.SetGroupRotate(0,0,0);
objs.emplace_back(Character0);

Object coin11("coin1");
coin11.SetCenter(0,0,0);
coin11.SetGroupTranslate(0,0,0);
coin11.SetGroupRotate(0,0,0);
objs.emplace_back(coin11);

Object coin22("coin2");
coin22.SetCenter(0,0,0);
coin22.SetGroupTranslate(0,0,0);
coin22.SetGroupRotate(0,0,0);
objs.emplace_back(coin22);

Object chairbig3("chairbig");
chairbig3.SetCenter(0,0,0);
chairbig3.SetGroupTranslate(0,0,0);
chairbig3.SetGroupRotate(0,0,0);
objs.emplace_back(chairbig3);

Object chair14("chair1");
chair14.SetCenter(0,0,0);
chair14.SetGroupTranslate(0,0,0);
chair14.SetGroupRotate(0,0,0);
objs.emplace_back(chair14);

Object chair25("chair2");
chair25.SetCenter(0,0,0);
chair25.SetGroupTranslate(0,0,0);
chair25.SetGroupRotate(0,0,0);
objs.emplace_back(chair25);

Object chair36("chair3");
chair36.SetCenter(0,0,0);
chair36.SetGroupTranslate(0,0,0);
chair36.SetGroupRotate(0,0,0);
objs.emplace_back(chair36);

Object coin37("coin3");
coin37.SetCenter(0,0,0);
coin37.SetGroupTranslate(0,0,0);
coin37.SetGroupRotate(0,0,0);
objs.emplace_back(coin37);

Object coin48("coin4");
coin48.SetCenter(0,0,0);
coin48.SetGroupTranslate(0,0,0);
coin48.SetGroupRotate(0,0,0);
objs.emplace_back(coin48);

Object table9("table");
table9.SetCenter(0,0,0);
table9.SetGroupTranslate(0,0,0);
table9.SetGroupRotate(0,0,0);
objs.emplace_back(table9);

Object coin510("coin5");
coin510.SetCenter(0,0,0);
coin510.SetGroupTranslate(0,0,0);
coin510.SetGroupRotate(0,0,0);
objs.emplace_back(coin510);

Object coin611("coin6");
coin611.SetCenter(0,0,0);
coin611.SetGroupTranslate(0,0,0);
coin611.SetGroupRotate(0,0,0);
objs.emplace_back(coin611);

Object coin712("coin7");
coin712.SetCenter(0,0,0);
coin712.SetGroupTranslate(0,0,0);
coin712.SetGroupRotate(0,0,0);
objs.emplace_back(coin712);

Object walls13("walls");
walls13.SetCenter(0,0,0);
walls13.SetGroupTranslate(0,0,0);
walls13.SetGroupRotate(0,0,0);
objs.emplace_back(walls13);

Object secdesk14("secdesk");
secdesk14.SetCenter(0,0,0);
secdesk14.SetGroupTranslate(0,0,0);
secdesk14.SetGroupRotate(0,0,0);
objs.emplace_back(secdesk14);

Object secretary15("secretary");
secretary15.SetCenter(0,0,0);
secretary15.SetGroupTranslate(0,0,0);
secretary15.SetGroupRotate(0,0,0);
objs.emplace_back(secretary15);

Object door16("door");
door16.SetCenter(0,0,0);
door16.SetGroupTranslate(0,0,0);
door16.SetGroupRotate(0,0,0);
objs.emplace_back(door16);

Object hiddenwall17("hiddenwall");
hiddenwall17.SetCenter(0,0,0);
hiddenwall17.SetGroupTranslate(0,0,0);
hiddenwall17.SetGroupRotate(0,0,0);
objs.emplace_back(hiddenwall17);

Object prescription18("prescription");
prescription18.SetCenter(0,0,0);
prescription18.SetGroupTranslate(0,0,0);
prescription18.SetGroupRotate(0,0,0);
objs.emplace_back(prescription18);

Object key119("key1");
key119.SetCenter(0,0,0);
key119.SetGroupTranslate(0,0,0);
key119.SetGroupRotate(0,0,0);
objs.emplace_back(key119);

Object key220("key2");
key220.SetCenter(0,0,0);
key220.SetGroupTranslate(0,0,0);
key220.SetGroupRotate(0,0,0);
objs.emplace_back(key220);

Object bridge21("bridge");
bridge21.SetCenter(0,0,0);
bridge21.SetGroupTranslate(0,0,0);
bridge21.SetGroupRotate(0,0,0);
objs.emplace_back(bridge21);

Object drbed22("drbed");
drbed22.SetCenter(0,0,0);
drbed22.SetGroupTranslate(0,0,0);
drbed22.SetGroupRotate(0,0,0);
objs.emplace_back(drbed22);

Object chain23("chain");
chain23.SetCenter(0,0,0);
chain23.SetGroupTranslate(0,0,0);
chain23.SetGroupRotate(0,0,0);
objs.emplace_back(chain23);

Object dranddesk24("dranddesk");
dranddesk24.SetCenter(0,0,0);
dranddesk24.SetGroupTranslate(0,0,0);
dranddesk24.SetGroupRotate(0,0,0);
objs.emplace_back(dranddesk24);

Object bridgeoff25("bridgeoff");
bridgeoff25.SetCenter(0,0,0);
bridgeoff25.SetGroupTranslate(0,0,0);
bridgeoff25.SetGroupRotate(0,0,0);
objs.emplace_back(bridgeoff25);

Object hidee26("hidee");
hidee26.SetCenter(0,0,0);
hidee26.SetGroupTranslate(0,0,0);
hidee26.SetGroupRotate(0,0,0);
objs.emplace_back(hidee26);

Object smallBridge27("smallBridge");
smallBridge27.SetCenter(0,0,0);
smallBridge27.SetGroupTranslate(0,0,0);
smallBridge27.SetGroupRotate(0,0,0);
objs.emplace_back(smallBridge27);

Object floorsroom28("floorsroom");
floorsroom28.SetCenter(0,0,0);
floorsroom28.SetGroupTranslate(0,0,0);
floorsroom28.SetGroupRotate(0,0,0);
objs.emplace_back(floorsroom28);

Object picsroom129("picsroom1");
picsroom129.SetCenter(0,0,0);
picsroom129.SetGroupTranslate(0,0,0);
picsroom129.SetGroupRotate(0,0,0);
objs.emplace_back(picsroom129);

Object picroom230("picroom2");
picroom230.SetCenter(0,0,0);
picroom230.SetGroupTranslate(0,0,0);
picroom230.SetGroupRotate(0,0,0);
objs.emplace_back(picroom230);

Object Group34031("Group340");
Group34031.SetCenter(0,0,0);
Group34031.SetGroupTranslate(0,0,0);
Group34031.SetGroupRotate(0,0,0);
objs.emplace_back(Group34031);

Object Group21632("Group216");
Group21632.SetCenter(0,0,0);
Group21632.SetGroupTranslate(0,0,0);
Group21632.SetGroupRotate(0,0,0);
objs.emplace_back(Group21632);

 // Model3D0 of Group floorsroom
Model Model3D0;
Model3D0.Assign3DModel("models/floor/floor.3ds");
Model3D0.Translate(-0.06, 0, -0.06);
Model3D0.Scale(7, 2.161, 3.26);
Model3D0.group = 28;
models.emplace_back(Model3D0);

 // Model3D1 of Group chairbig
Model Model3D1;
Model3D1.Assign3DModel("models/chair/chair.3ds");
Model3D1.Translate(-1.41, 0.22, -1.85);
Model3D1.Scale(0.178, 0.178, 0.178);
Model3D1.Rotate(0, 90, 0);
Model3D1.group = 3;
models.emplace_back(Model3D1);

 // Model3D2 of Group chairbig
Model Model3D2;
Model3D2.Assign3DModel("models/chair/chair.3ds");
Model3D2.Translate(-1.14, 0.22, -1.85);
Model3D2.Scale(0.178, 0.178, 0.178);
Model3D2.Rotate(0, 90, 0);
Model3D2.group = 3;
models.emplace_back(Model3D2);

 // Model3D3 of Group chair2
Model Model3D3;
Model3D3.Assign3DModel("models/chair/chair.3ds");
Model3D3.Translate(0.98, 0.22, -1.87);
Model3D3.Scale(0.178, 0.178, 0.263);
Model3D3.Rotate(0, 90, 0);
Model3D3.group = 5;
models.emplace_back(Model3D3);

 // Model3D4 of Group chair1
Model Model3D4;
Model3D4.Assign3DModel("models/chair/chair.3ds");
Model3D4.Translate(-1.26, 0.22, 1.88);
Model3D4.Scale(0.199, 0.199, 0.199);
Model3D4.Rotate(0, -90, 0);
Model3D4.group = 4;
models.emplace_back(Model3D4);

 // Model3D5 of Group chair3
Model Model3D5;
Model3D5.Assign3DModel("models/chair/chair.3ds");
Model3D5.Translate(-0.01, 0.22, 1.89);
Model3D5.Scale(0.199, 0.199, 0.199);
Model3D5.Rotate(0, -90, 0);
Model3D5.group = 6;
models.emplace_back(Model3D5);

 // Model3D6 of Group coin1
Model Model3D6;
Model3D6.Assign3DModel("models/coins/coins.3ds");
Model3D6.Translate(-1.85, 0.2, -1.07);
Model3D6.Scale(0.191, 0.191, 0.191);
Model3D6.Rotate(0, 2955, 0);
Model3D6.group = 1;
models.emplace_back(Model3D6);

 // Model3D7 of Group coin2
Model Model3D7;
Model3D7.Assign3DModel("models/coins/coins.3ds");
Model3D7.Translate(2.01, 0.2, -1.17);
Model3D7.Scale(0.191, 0.191, 0.191);
Model3D7.Rotate(0, 2955, 0);
Model3D7.group = 2;
models.emplace_back(Model3D7);

 // Model3D8 of Group coin3
Model Model3D8;
Model3D8.Assign3DModel("models/coins/coins.3ds");
Model3D8.Translate(-0.77, 0.2, 1.84);
Model3D8.Scale(0.191, 0.191, 0.191);
Model3D8.Rotate(0, 2955, 0);
Model3D8.group = 7;
models.emplace_back(Model3D8);

 // Model3D9 of Group coin4
Model Model3D9;
Model3D9.Assign3DModel("models/coins/coins.3ds");
Model3D9.Translate(0.11, 0.2, 0.27);
Model3D9.Scale(0.191, 0.191, 0.191);
Model3D9.Rotate(0, 2955, 0);
Model3D9.group = 8;
models.emplace_back(Model3D9);

 // Model3D10 of Group secdesk
Model Model3D10;
Model3D10.Assign3DModel("models/secdisk/secdisk.3ds");
Model3D10.Translate(1.12, -0.39, 2.14);
Model3D10.Scale(3.242, 3.242, 3.242);
Model3D10.group = 14;
models.emplace_back(Model3D10);

 // Model3D11 of Group secretary
Model Model3D11;
Model3D11.Assign3DModel("models/secretary/secretary.3ds");
Model3D11.Translate(2.2, 0, 1.41);
Model3D11.Scale(0.572, 0.572, 0.572);
Model3D11.Rotate(0, -90, 0);
Model3D11.group = 15;
models.emplace_back(Model3D11);

 // Model3D12 of Group table
Model Model3D12;
Model3D12.Assign3DModel("models/table/table.3ds");
Model3D12.Translate(-0.59, 0, -0.03);
Model3D12.Scale(0.395, 0.395, 0.395);
Model3D12.Rotate(0, 90, 0);
Model3D12.group = 9;
models.emplace_back(Model3D12);

 // CollisionBox13 of Group secretary
Model CollisionBox13;
CollisionBox13.CreateWireCube(0.5);
CollisionBox13.Translate(2.04, 0.6, 1.34);
CollisionBox13.Scale(0.591, 1.445, 0.614);
CollisionBox13.collider = true;
CollisionBox13.animated = true;
CollisionBox13.SetAnimParam(0, 0, 0, 0, 0.048, 0, 0, 0, 0);
CollisionBox13.group = 15;
models.emplace_back(CollisionBox13);

 // Model3D14 of Group table
Model Model3D14;
Model3D14.Assign3DModel("models/maga2/maga2.3ds");
Model3D14.Translate(-0.37, 0.68, -0.21);
Model3D14.Scale(0.076, 0.108, 0.076);
Model3D14.Rotate(0, -113, 0);
Model3D14.group = 9;
models.emplace_back(Model3D14);

 // Model3D15 of Group walls
Model Model3D15;
Model3D15.Assign3DModel("models/walls/walls.3ds");
Model3D15.Translate(-0.04, 0, -2.05);
Model3D15.Scale(0.843, 2, 0.731);
Model3D15.group = 13;
models.emplace_back(Model3D15);

 // Model3D16 of Group walls
Model Model3D16;
Model3D16.Assign3DModel("models/walls/walls.3ds");
Model3D16.Translate(-0.04, 0, 2.1);
Model3D16.Scale(0.843, 2, 0.731);
Model3D16.group = 13;
models.emplace_back(Model3D16);

 // Model3D17 of Group hidee
Model Model3D17;
Model3D17.Assign3DModel("models/walls/walls.3ds");
Model3D17.Translate(2.35, 0.07, 0.09);
Model3D17.Scale(0.69, 1.968, 0.731);
Model3D17.Rotate(0, 90, 0);
Model3D17.group = 26;
models.emplace_back(Model3D17);

 // Cube18 of Group hiddenwall
Model Cube18;
Cube18.CreateCube(0.5);
Cube18.Translate(2.37, 0.76, 0.05);
Cube18.Scale(-0.152, 3.101, 1);
Cube18.SetColor(1, 0.3186, 0.3186);
Cube18.group = 17;
models.emplace_back(Cube18);

 // Model3D19 of Group door
Model Model3D19;
Model3D19.Assign3DModel("models/door/door.3ds");
Model3D19.Translate(2.14, 0, -0.34);
Model3D19.Scale(0.105, 0.236, 0.138);
Model3D19.Rotate(0, 150, 0);
Model3D19.group = 16;
models.emplace_back(Model3D19);

 // Model3D20 of Group picsroom1
Model Model3D20;
Model3D20.Assign3DModel("models/pic1/pic1.3ds");
Model3D20.Translate(0.2, 1.78, -2.02);
Model3D20.Scale(0.384, 0.043, 0.384);
Model3D20.Rotate(90, 90, 0);
Model3D20.group = 29;
models.emplace_back(Model3D20);

 // Model3D21 of Group picsroom1
Model Model3D21;
Model3D21.Assign3DModel("models/pic2/pic2.3ds");
Model3D21.Translate(-0.6, 2, 2.05);
Model3D21.Scale(0.374, 0.166, 0.327);
Model3D21.Rotate(-90, -90, 0);
Model3D21.group = 29;
models.emplace_back(Model3D21);

 // Model3D22 of Group chain
Model Model3D22;
Model3D22.Assign3DModel("models/chains/chains.3ds");
Model3D22.Translate(7.75, 0.78, 0.22);
Model3D22.Scale(0.496, 0.496, 0.496);
Model3D22.Rotate(0, -180, 0);
Model3D22.froom = false;
Model3D22.group = 23;
models.emplace_back(Model3D22);

 // Model3D23 of Group walls
Model Model3D23;
Model3D23.Assign3DModel("models/walls/walls.3ds");
Model3D23.Translate(8.44, 0, -0.01);
Model3D23.Scale(0.69, 1.968, 0.731);
Model3D23.Rotate(0, 90, 0);
Model3D23.froom = false;
Model3D23.group = 13;
models.emplace_back(Model3D23);

 // Model3D24 of Group dranddesk
Model Model3D24;
Model3D24.Assign3DModel("models/doctor/doctor.3ds");
Model3D24.Translate(8.3, -0.35, 0.36);
Model3D24.Scale(0.18, 0.18, 0.18);
Model3D24.Rotate(0, -90, 0);
Model3D24.froom = false;
Model3D24.group = 24;
models.emplace_back(Model3D24);

 // Model3D25 of Group dranddesk
Model Model3D25;
Model3D25.Assign3DModel("models/docdesk/docdesk.3ds");
Model3D25.Translate(7.61, 0.41, 0.34);
Model3D25.Scale(0.083, 0.11, 0.083);
Model3D25.Rotate(0, -180, 0);
Model3D25.froom = false;
Model3D25.group = 24;
models.emplace_back(Model3D25);

 // Model3D26 of Group drbed
Model Model3D26;
Model3D26.Assign3DModel("models/doctorBed/doctorBed.3ds");
Model3D26.Translate(7.43, 0.44, -1.53);
Model3D26.Rotate(0, -90, 0);
Model3D26.froom = false;
Model3D26.group = 22;
models.emplace_back(Model3D26);

 // Model3D27 of Group bridge
Model Model3D27;
Model3D27.Assign3DModel("models/bridge/bridge.3ds");
Model3D27.Translate(4.85, 0.31, 0.01);
Model3D27.Scale(0.158, 0.158, 0.117);
Model3D27.froom = false;
Model3D27.group = 21;
models.emplace_back(Model3D27);

 // Model3D28 of Group table
Model Model3D28;
Model3D28.Assign3DModel("models/maga1/maga1.3ds");
Model3D28.Translate(-0.6, 0.66, 0.14);
Model3D28.Scale(0.268, 0.268, 0.268);
Model3D28.Rotate(0, -116, 0);
Model3D28.group = 9;
models.emplace_back(Model3D28);

 // Model3D29 of Group key1
Model Model3D29;
Model3D29.Assign3DModel("models/keys/keys.3ds");
Model3D29.Translate(4.37, 0.56, -1.1);
Model3D29.Scale(0.62, 0.62, 0.62);
Model3D29.Rotate(0, 2955, 90);
Model3D29.froom = false;
Model3D29.group = 19;
models.emplace_back(Model3D29);

 // Model3D30 of Group key2
Model Model3D30;
Model3D30.Assign3DModel("models/keys/keys.3ds");
Model3D30.Translate(6.13, 0.66, 1.53);
Model3D30.Scale(0.62, 0.62, 0.62);
Model3D30.Rotate(0, 2955, 90);
Model3D30.froom = false;
Model3D30.group = 20;
models.emplace_back(Model3D30);

 // Model3D31 of Group picroom2
Model Model3D31;
Model3D31.Assign3DModel("models/tableu/tableu.3ds");
Model3D31.Translate(6.13, 1.7, 2.07);
Model3D31.Scale(1, 0.681, 1);
Model3D31.Rotate(90, 0, 180);
Model3D31.froom = false;
Model3D31.group = 30;
models.emplace_back(Model3D31);

 // Model3D32 of Group picroom2
Model Model3D32;
Model3D32.Assign3DModel("models/sign/sign.3ds");
Model3D32.Translate(2.34, 1.83, 0.06);
Model3D32.Scale(0.277, 0.277, 0.277);
Model3D32.Rotate(0, 0, 90);
Model3D32.group = 30;
models.emplace_back(Model3D32);

 // Model3D33 of Group Character
Model Model3D33;
Model3D33.Assign3DModel("models/character/character.3ds");
Model3D33.Translate(8.03, 0, -0.9);
Model3D33.Scale(0.253, 0.253, 0.253);
Model3D33.group = 0;
models.emplace_back(Model3D33);

 // CollisionBox34 of Group Character
Model CollisionBox34;
CollisionBox34.CreateWireCube(0.5);
CollisionBox34.Translate(8, 0.64, -0.88);
CollisionBox34.Scale(0.696, 2.111, 0.634);
CollisionBox34.collider = true;
CollisionBox34.group = 0;
models.emplace_back(CollisionBox34);

 // Model3D35 of Group coin5
Model Model3D35;
Model3D35.Assign3DModel("models/coins/coins.3ds");
Model3D35.Translate(-0.53, 0.14, -1.78);
Model3D35.Scale(0.191, 0.191, 0.191);
Model3D35.Rotate(0, 2955, 0);
Model3D35.group = 10;
models.emplace_back(Model3D35);

 // Model3D36 of Group coin7
Model Model3D36;
Model3D36.Assign3DModel("models/coins/coins.3ds");
Model3D36.Translate(1.85, 0.22, 0.97);
Model3D36.Scale(0.191, 0.191, 0.191);
Model3D36.Rotate(0, 2955, 0);
Model3D36.group = 12;
models.emplace_back(Model3D36);

 // Model3D37 of Group coin6
Model Model3D37;
Model3D37.Assign3DModel("models/coins/coins.3ds");
Model3D37.Translate(0.67, 0.24, 1.34);
Model3D37.Scale(0.191, 0.191, 0.191);
Model3D37.Rotate(0, 2955, 0);
Model3D37.group = 11;
models.emplace_back(Model3D37);

 // CollisionBox38 of Group coin1
Model CollisionBox38;
CollisionBox38.CreateWireCube(0.5);
CollisionBox38.Translate(-1.85, 0.2, -1.07);
CollisionBox38.Scale(0.441, 0.441, 0.441);
CollisionBox38.Rotate(0, 2955, 0);
CollisionBox38.soundFileName = "coins.wav";
CollisionBox38.group = 1;
models.emplace_back(CollisionBox38);

 // CollisionBox39 of Group coin2
Model CollisionBox39;
CollisionBox39.CreateWireCube(0.5);
CollisionBox39.Translate(2.01, 0.2, -1.17);
CollisionBox39.Scale(0.522, 0.522, 0.522);
CollisionBox39.Rotate(0, 2955, 0);
CollisionBox39.soundFileName = "coins.wav";
CollisionBox39.group = 2;
models.emplace_back(CollisionBox39);

 // CollisionBox40 of Group chairbig
Model CollisionBox40;
CollisionBox40.CreateWireCube(0.5);
CollisionBox40.Translate(-1.31, 0.33, -1.84);
CollisionBox40.Scale(1.073, 0.912, 0.724);
CollisionBox40.collider = true;
CollisionBox40.animated = true;
CollisionBox40.SetAnimParam(0, 0, 0, 0, 0, 0, 0, 0, 0.012);
CollisionBox40.soundFileName = "collision.wav";
CollisionBox40.group = 3;
models.emplace_back(CollisionBox40);

 // CollisionBox41 of Group chair2
Model CollisionBox41;
CollisionBox41.CreateWireCube(0.5);
CollisionBox41.Translate(0.93, 0.31, -1.93);
CollisionBox41.collider = true;
CollisionBox41.animated = true;
CollisionBox41.SetAnimParam(0, 0, 0, 0, 0.032, 0, 0, 0, 0);
CollisionBox41.soundFileName = "collision.wav";
CollisionBox41.group = 5;
models.emplace_back(CollisionBox41);

 // CollisionBox42 of Group chair1
Model CollisionBox42;
CollisionBox42.CreateWireCube(0.5);
CollisionBox42.Translate(-1.26, 0.4, 1.86);
CollisionBox42.Scale(0.672, 0.87, 0.707);
CollisionBox42.collider = true;
CollisionBox42.animated = true;
CollisionBox42.SetAnimParam(0, 0, 0, 0, 0.032, 0, 0, 0, 0);
CollisionBox42.soundFileName = "collision.wav";
CollisionBox42.group = 4;
models.emplace_back(CollisionBox42);

 // CollisionBox43 of Group chair3
Model CollisionBox43;
CollisionBox43.CreateWireCube(0.5);
CollisionBox43.Translate(-0.03, 0.34, 1.93);
CollisionBox43.Scale(0.685, 0.915, 0.8);
CollisionBox43.collider = true;
CollisionBox43.animated = true;
CollisionBox43.SetAnimParam(0, 0, 0, 0, 0.029, 0, 0, 0, 0);
CollisionBox43.soundFileName = "collision.wav";
CollisionBox43.group = 6;
models.emplace_back(CollisionBox43);

 // CollisionBox44 of Group coin3
Model CollisionBox44;
CollisionBox44.CreateWireCube(0.5);
CollisionBox44.Translate(-0.77, 0.2, 1.84);
CollisionBox44.Scale(0.522, 0.522, 0.522);
CollisionBox44.Rotate(0, 2955, 0);
CollisionBox44.collider = true;
CollisionBox44.animated = true;
CollisionBox44.SetAnimParam(0, 0, 0, 0, 0, 0, 0, 0, 0);
CollisionBox44.soundFileName = "coins.wav";
CollisionBox44.group = 7;
models.emplace_back(CollisionBox44);

 // CollisionBox45 of Group coin4
Model CollisionBox45;
CollisionBox45.CreateWireCube(0.5);
CollisionBox45.Translate(0.11, 0.2, 0.27);
CollisionBox45.Scale(0.55, 0.55, 0.55);
CollisionBox45.Rotate(0, 2955, 0);
CollisionBox45.soundFileName = "coins.wav";
CollisionBox45.group = 8;
models.emplace_back(CollisionBox45);

 // CollisionBox46 of Group secdesk
Model CollisionBox46;
CollisionBox46.CreateWireCube(0.5);
CollisionBox46.Translate(1.42, 0.35, 1.36);
CollisionBox46.Scale(1.094, 1.349, 2.09);
CollisionBox46.collider = true;
CollisionBox46.animated = true;
CollisionBox46.SetAnimParam(0, 0, 0, 0, 0, 0.013, 0, 0, 0);
CollisionBox46.soundFileName = "collision.wav";
CollisionBox46.group = 14;
models.emplace_back(CollisionBox46);

 // CollisionBox47 of Group table
Model CollisionBox47;
CollisionBox47.CreateWireCube(0.5);
CollisionBox47.Translate(-0.63, 0.36, -0.03);
CollisionBox47.Scale(2.015, 1.285, 1.28);
CollisionBox47.collider = true;
CollisionBox47.animated = true;
CollisionBox47.SetAnimParam(0, 0.013, 0.003, 0, 0.034, 0, 0, 0, 0);
CollisionBox47.soundFileName = "collision.wav";
CollisionBox47.group = 9;
models.emplace_back(CollisionBox47);

 // CollisionBox48 of Group door
Model CollisionBox48;
CollisionBox48.CreateWireCube(0.5);
CollisionBox48.Translate(2.14, 0, -0.34);
CollisionBox48.Scale(0.917, 2.808, 0.398);
CollisionBox48.Rotate(0, 150, 0);
CollisionBox48.group = 16;
models.emplace_back(CollisionBox48);

 // CollisionBox49 of Group walls
Model CollisionBox49;
CollisionBox49.CreateWireCube(0.5);
CollisionBox49.Translate(2.94, 1.32, 2.05);
CollisionBox49.Scale(21.59, 5.224, -0.074);
CollisionBox49.collider = true;
CollisionBox49.soundFileName = "collision.wav";
CollisionBox49.group = 13;
models.emplace_back(CollisionBox49);

 // CollisionBox50 of Group chain
Model CollisionBox50;
CollisionBox50.CreateWireCube(0.5);
CollisionBox50.Translate(7.63, 0.88, 0.19);
CollisionBox50.Scale(3.051, 3.051, 3.051);
CollisionBox50.froom = false;
CollisionBox50.soundFileName = "collision.wav";
CollisionBox50.group = 23;
models.emplace_back(CollisionBox50);

 // CollisionBox51 of Group dranddesk
Model CollisionBox51;
CollisionBox51.CreateWireCube(0.5);
CollisionBox51.Translate(7.52, 0.57, 0.45);
CollisionBox51.Scale(1.693, 1.947, 2.349);
CollisionBox51.froom = false;
CollisionBox51.collider = true;
CollisionBox51.animated = true;
CollisionBox51.SetAnimParam(0, 0, 0, 0, 0.032, 0, 0, 0, 0);
CollisionBox51.soundFileName = "doctor.wav";
CollisionBox51.group = 24;
models.emplace_back(CollisionBox51);

 // CollisionBox52 of Group drbed
Model CollisionBox52;
CollisionBox52.CreateWireCube(0.5);
CollisionBox52.Translate(7.45, 0.53, -1.59);
CollisionBox52.Scale(3.344, 1.931, 1.678);
CollisionBox52.froom = false;
CollisionBox52.collider = true;
CollisionBox52.soundFileName = "collision.wav";
CollisionBox52.group = 22;
models.emplace_back(CollisionBox52);

 // CollisionBox53 of Group bridge
Model CollisionBox53;
CollisionBox53.CreateWireCube(0.5);
CollisionBox53.Translate(4.85, 0.4, -0.88);
CollisionBox53.Scale(0.829, 0.23, 4.566);
CollisionBox53.froom = false;
CollisionBox53.collider = true;
CollisionBox53.soundFileName = "collision.wav";
CollisionBox53.group = 21;
models.emplace_back(CollisionBox53);

 // CollisionBox54 of Group key1
Model CollisionBox54;
CollisionBox54.CreateWireCube(0.5);
CollisionBox54.Translate(4.37, 0.52, -1.1);
CollisionBox54.Scale(0.515, 1.001, 0.567);
CollisionBox54.Rotate(0, 2955, 90);
CollisionBox54.froom = false;
CollisionBox54.soundFileName = "key.wav";
CollisionBox54.group = 19;
models.emplace_back(CollisionBox54);

 // CollisionBox55 of Group key2
Model CollisionBox55;
CollisionBox55.CreateWireCube(0.5);
CollisionBox55.Translate(6.09, 0.69, 1.47);
CollisionBox55.Scale(0.518, 1.704, 0.697);
CollisionBox55.Rotate(0, 2955, 90);
CollisionBox55.froom = false;
CollisionBox55.soundFileName = "key.wav";
CollisionBox55.group = 20;
models.emplace_back(CollisionBox55);

 // CollisionBox56 of Group coin5
Model CollisionBox56;
CollisionBox56.CreateWireCube(0.5);
CollisionBox56.Translate(-0.53, 0.14, -1.78);
CollisionBox56.Scale(0.549, 0.549, 0.549);
CollisionBox56.Rotate(0, 2955, 0);
CollisionBox56.collider = true;
CollisionBox56.soundFileName = "coins.wav";
CollisionBox56.group = 10;
models.emplace_back(CollisionBox56);

 // CollisionBox57 of Group coin7
Model CollisionBox57;
CollisionBox57.CreateWireCube(0.5);
CollisionBox57.Translate(1.85, 0.22, 0.97);
CollisionBox57.Scale(0.537, 0.537, 0.537);
CollisionBox57.Rotate(0, 2955, 0);
CollisionBox57.soundFileName = "coins.wav";
CollisionBox57.group = 12;
models.emplace_back(CollisionBox57);

 // CollisionBox58 of Group coin6
Model CollisionBox58;
CollisionBox58.CreateWireCube(0.5);
CollisionBox58.Translate(0.67, 0.24, 1.34);
CollisionBox58.Scale(0.546, 0.546, 0.546);
CollisionBox58.Rotate(0, 2955, 0);
CollisionBox58.soundFileName = "coins.wav";
CollisionBox58.group = 11;
models.emplace_back(CollisionBox58);

 // CollisionBox59 of Group walls
Model CollisionBox59;
CollisionBox59.CreateWireCube(0.5);
CollisionBox59.Translate(2.31, 0.85, 1.3);
CollisionBox59.Scale(0.122, 3.37, 3.591);
CollisionBox59.collider = true;
CollisionBox59.soundFileName = "collision.wav";
CollisionBox59.group = 13;
models.emplace_back(CollisionBox59);

 // CollisionBox60 of Group walls
Model CollisionBox60;
CollisionBox60.CreateWireCube(0.5);
CollisionBox60.Translate(2.84, 1.32, -2.07);
CollisionBox60.Scale(21.59, 5.224, -0.074);
CollisionBox60.collider = true;
CollisionBox60.soundFileName = "collision.wav";
CollisionBox60.group = 13;
models.emplace_back(CollisionBox60);

 // CollisionBox61 of Group prescription
Model CollisionBox61;
CollisionBox61.CreateWireCube(0.5);
CollisionBox61.Translate(1.16, 0.71, 1.57);
CollisionBox61.Scale(1.172, 0.109, 0.914);
CollisionBox61.collider = true;
CollisionBox61.group = 18;
models.emplace_back(CollisionBox61);

 // CollisionBox62 of Group bridge
Model CollisionBox62;
CollisionBox62.CreateWireCube(0.5);
CollisionBox62.Translate(3.9, 0.35, -0.94);
CollisionBox62.Scale(0.829, 0.23, 4.648);
CollisionBox62.froom = false;
CollisionBox62.collider = true;
CollisionBox62.soundFileName = "collision.wav";
CollisionBox62.group = 21;
models.emplace_back(CollisionBox62);

 // CollisionBox63 of Group bridge
Model CollisionBox63;
CollisionBox63.CreateWireCube(0.5);
CollisionBox63.Translate(4.78, 0.37, 1.53);
CollisionBox63.Scale(0.822, 0.23, 2);
CollisionBox63.froom = false;
CollisionBox63.collider = true;
CollisionBox63.soundFileName = "collision.wav";
CollisionBox63.group = 21;
models.emplace_back(CollisionBox63);

 // CollisionBox64 of Group walls
Model CollisionBox64;
CollisionBox64.CreateWireCube(0.5);
CollisionBox64.Translate(2.35, 0.89, -1.25);
CollisionBox64.Scale(0.122, 3.368, 3.575);
CollisionBox64.collider = true;
CollisionBox64.soundFileName = "collision.wav";
CollisionBox64.group = 13;
models.emplace_back(CollisionBox64);

 // CollisionBox65 of Group walls
Model CollisionBox65;
CollisionBox65.CreateWireCube(0.5);
CollisionBox65.Translate(8.54, 1.29, -0.06);
CollisionBox65.Scale(0.114, 4.778, 8);
CollisionBox65.collider = true;
CollisionBox65.soundFileName = "collision.wav";
CollisionBox65.group = 13;
models.emplace_back(CollisionBox65);

 // CollisionBox66 of Group bridge
Model CollisionBox66;
CollisionBox66.CreateWireCube(0.5);
CollisionBox66.Translate(3.91, 0.35, 1.56);
CollisionBox66.Scale(0.829, 0.23, 2.075);
CollisionBox66.froom = false;
CollisionBox66.collider = true;
CollisionBox66.soundFileName = "collision.wav";
CollisionBox66.group = 21;
models.emplace_back(CollisionBox66);

 // CollisionBox67 of Group smallBridge
Model CollisionBox67;
CollisionBox67.CreateWireCube(0.5);
CollisionBox67.Translate(4.86, 0.35, 0.62);
CollisionBox67.Scale(0.829, 0.23, 1.565);
CollisionBox67.froom = false;
CollisionBox67.group = 27;
models.emplace_back(CollisionBox67);

 // Model3D68 of Group smallBridge
Model Model3D68;
Model3D68.Assign3DModel("models/smallBridge/smallBridge.3ds");
Model3D68.Translate(4.86, 0.25, 0.77);
Model3D68.Scale(1.964, 3.136, 1.78);
Model3D68.froom = false;
Model3D68.group = 27;
models.emplace_back(Model3D68);

 // CollisionBox69 of Group hiddenwall
Model CollisionBox69;
CollisionBox69.CreateWireCube(0.5);
CollisionBox69.Translate(2.37, 0.76, 0.05);
CollisionBox69.Scale(-0.152, 3.101, 1);
CollisionBox69.group = 17;
models.emplace_back(CollisionBox69);

 // Model3D70 of Group walls
Model Model3D70;
Model3D70.Assign3DModel("models/walls/walls.3ds");
Model3D70.Translate(5.44, 0, -2.05);
Model3D70.Scale(0.965, 2, 0.731);
Model3D70.froom = false;
Model3D70.group = 13;
models.emplace_back(Model3D70);

 // Model3D71 of Group walls
Model Model3D71;
Model3D71.Assign3DModel("models/walls/walls.3ds");
Model3D71.Translate(5.66, 0, 2.09);
Model3D71.Scale(1.051, 1.988, 0.731);
Model3D71.froom = false;
Model3D71.group = 13;
models.emplace_back(Model3D71);

 // Model3D72 of Group floorsroom
Model Model3D72;
Model3D72.Assign3DModel("models/floor/floor.3ds");
Model3D72.Translate(5.49, 0, -0.06);
Model3D72.Scale(9, 2.161, 3.26);
Model3D72.froom = false;
Model3D72.group = 28;
models.emplace_back(Model3D72);

 // CollisionBox73 of Group Group340
Model CollisionBox73;
CollisionBox73.CreateWireCube(0.5);
CollisionBox73.Translate(2.1, 1.27, 0.16);
CollisionBox73.Scale(0.08, 5, 9);
CollisionBox73.collider = true;
CollisionBox73.group = 31;
models.emplace_back(CollisionBox73);

 // CollisionBox74 of Group Group216
Model CollisionBox74;
CollisionBox74.CreateWireCube(0.5);
CollisionBox74.Translate(-2.56, 1.27, 0.16);
CollisionBox74.Scale(0.08, 5, 9);
CollisionBox74.collider = true;
CollisionBox74.group = 32;
models.emplace_back(CollisionBox74);

 // Model3D75 of Group drbed
Model Model3D75;
Model3D75.Assign3DModel("models/health/health.3ds");
Model3D75.Translate(7.84, 0.64, -1.42);
Model3D75.Scale(2.316, 2.316, 2.316);
Model3D75.froom = false;
Model3D75.group = 22;
models.emplace_back(Model3D75);

}
