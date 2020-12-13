#pragma once
#include "Model.h"
void GenerateModels(std::vector<Model>& models)
{

 // Cylinder0 of Group Table
Model Cylinder0;
Cylinder0.CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder0.Translate(-0.073, 0.011, 0.472);
Cylinder0.Scale(0.365, 0.365, 0.178);
Cylinder0.Rotate(88.99, 0, 0);
Cylinder0.SetColor(1, 1, 1);
Cylinder0.group = 2;
models.emplace_back(Cylinder0);

 // Cylinder1 of Group Table
Model Cylinder1;
Cylinder1.CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder1.Translate(-0.056, -0.079, 0.461);
Cylinder1.Scale(0.079, 0.079, 1.455);
Cylinder1.Rotate(101.1, 0, 117.3);
Cylinder1.SetColor(0.3382, 0.3382, 0.3382);
Cylinder1.group = 2;
models.emplace_back(Cylinder1);

 // Cylinder2 of Group Table
Model Cylinder2;
Cylinder2.CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder2.Translate(-0.056, -0.034, 0.461);
Cylinder2.Scale(0.079, 0.079, 1.455);
Cylinder2.Rotate(64.72, 0, 88.99);
Cylinder2.SetColor(0.3382, 0.3382, 0.3382);
Cylinder2.group = 2;
models.emplace_back(Cylinder2);

 // Sphere3 of Group Table
Model Sphere3;
Sphere3.CreateSphere(0.5, 10, 10);
Sphere3.Translate(-0.062, 0.011, 0.466);
Sphere3.Scale(0.447, 0.01, 0.413);
Sphere3.Rotate(0, 0, 0);
Sphere3.SetColor(0.8588, 0.4863, 0.1059);
Sphere3.group = 2;
models.emplace_back(Sphere3);

 // Cylinder4 of Group Table
Model Cylinder4;
Cylinder4.CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder4.Translate(-0.056, -0.062, 0.461);
Cylinder4.Scale(0.079, 0.079, 1.455);
Cylinder4.Rotate(84.94, 343.8, 88.99);
Cylinder4.SetColor(0.3382, 0.3382, 0.3382);
Cylinder4.group = 2;
models.emplace_back(Cylinder4);

 // Cylinder5 of Group Table
Model Cylinder5;
Cylinder5.CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder5.Translate(-0.056, -0.04, 0.461);
Cylinder5.Scale(0.079, 0.079, 1.455);
Cylinder5.Rotate(84.94, 16.18, 88.99);
Cylinder5.SetColor(0.3333, 0.3333, 0.3333);
Cylinder5.group = 2;
models.emplace_back(Cylinder5);

 // Teapot6 of Group Table
Model Teapot6;
Teapot6.CreateTeapot(0.5);
Teapot6.Translate(-0.079, 0.056, 0.461);
Teapot6.Scale(0.148, 0.148, 0.148);
Teapot6.Rotate(0, 0, 0);
Teapot6.SetColor(0.4265, 0.004181, 0.004181);
Teapot6.group = 2;
models.emplace_back(Teapot6);

 // Cube7 of Group Pergola
Model Cube7;
Cube7.CreateCube(0.5);
Cube7.Translate(1, 0.462, 0.348);
Cube7.Scale(0.095, 4.337, 0.094);
Cube7.Rotate(0, 0, 0);
Cube7.SetColor(1, 1, 1);
Cube7.group = 3;
models.emplace_back(Cube7);

 // Cube8 of Group Pergola
Model Cube8;
Cube8.CreateCube(0.5);
Cube8.Translate(1, 0.558, -0.449);
Cube8.Scale(0.095, 4.337, 0.094);
Cube8.Rotate(0, 0, 0);
Cube8.SetColor(1, 1, 1);
Cube8.group = 3;
models.emplace_back(Cube8);

 // Cube9 of Group Pergola
Model Cube9;
Cube9.CreateCube(0.5);
Cube9.Translate(-0.915, 0.462, 0.348);
Cube9.Scale(0.095, 4.337, 0.094);
Cube9.Rotate(0, 0, 0);
Cube9.SetColor(1, 1, 1);
Cube9.group = 3;
models.emplace_back(Cube9);

 // Cube10 of Group Pergola
Model Cube10;
Cube10.CreateCube(0.5);
Cube10.Translate(-0.96, 0.547, -0.449);
Cube10.Scale(0.095, 4.337, 0.094);
Cube10.Rotate(0, 0, 0);
Cube10.SetColor(1, 1, 1);
Cube10.group = 3;
models.emplace_back(Cube10);

 // Cube11 of Group Pergola
Model Cube11;
Cube11.CreateCube(0.5);
Cube11.Translate(0.045, 1.665, -0.449);
Cube11.Scale(4.408, 0.278, 0.416);
Cube11.Rotate(0, 0, 0);
Cube11.SetColor(1, 1, 1);
Cube11.group = 3;
models.emplace_back(Cube11);

 // Cube12 of Group Pergola
Model Cube12;
Cube12.CreateCube(0.5);
Cube12.Translate(0.056, 1.643, -0.247);
Cube12.Scale(4.408, 0.278, 0.416);
Cube12.Rotate(0, 0, 0);
Cube12.SetColor(1, 1, 1);
Cube12.group = 3;
models.emplace_back(Cube12);

 // Cube13 of Group Pergola
Model Cube13;
Cube13.CreateCube(0.5);
Cube13.Translate(0.056, 1.677, -0.034);
Cube13.Scale(4.408, 0.278, 0.416);
Cube13.Rotate(0, 0, 0);
Cube13.SetColor(1, 1, 1);
Cube13.group = 3;
models.emplace_back(Cube13);

 // Cube14 of Group Pergola
Model Cube14;
Cube14.CreateCube(0.5);
Cube14.Translate(0.056, 1.586, 0.191);
Cube14.Scale(4.408, 0.278, 0.416);
Cube14.Rotate(0, 0, 0);
Cube14.SetColor(1, 1, 1);
Cube14.group = 3;
models.emplace_back(Cube14);

 // Cube15 of Group Pergola
Model Cube15;
Cube15.CreateCube(0.5);
Cube15.Translate(0.056, 1.598, 0.404);
Cube15.Scale(4.408, 0.278, 0.416);
Cube15.Rotate(0, 0, 0);
Cube15.SetColor(1, 1, 1);
Cube15.group = 3;
models.emplace_back(Cube15);

 // Cube16 of Group Swing
Model Cube16;
Cube16.CreateCube(0.5);
Cube16.Translate(0.166, 0.027, -0.179);
Cube16.Scale(1.034, 0.092, 0.073);
Cube16.Rotate(0, 0, 0);
Cube16.SetColor(0.8588, 0.4863, 0.2863);
Cube16.group = 4;
models.emplace_back(Cube16);

 // Cube17 of Group Swing
Model Cube17;
Cube17.CreateCube(0.5);
Cube17.Translate(0.365, 0.434, -0.217);
Cube17.Scale(0.01, 1.829, 0.01);
Cube17.Rotate(0, 0, 0);
Cube17.SetColor(0.6765, 0.6765, 0.6765);
Cube17.group = 4;
models.emplace_back(Cube17);

 // Cylinder18 of Group Swing
Model Cylinder18;
Cylinder18.CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder18.Translate(-0.554, 0.901, -0.243);
Cylinder18.Scale(0.035, 0.055, 3);
Cylinder18.Rotate(93.33, 0, 0);
Cylinder18.SetColor(0.4657, 0.4177, 0.4177);
Cylinder18.group = 4;
models.emplace_back(Cylinder18);

 // Cube19 of Group Swing
Model Cube19;
Cube19.CreateCube(0.5);
Cube19.Translate(-0.078, 0.43, -0.174);
Cube19.Scale(0.01, 1.613, 0.01);
Cube19.Rotate(0, 0, 0);
Cube19.SetColor(0.4853, 0.4853, 0.4853);
Cube19.group = 4;
models.emplace_back(Cube19);

 // Cylinder20 of Group Swing
Model Cylinder20;
Cylinder20.CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder20.Translate(-0.558, 0.901, -0.255);
Cylinder20.Scale(0.035, 0.055, 3);
Cylinder20.Rotate(74.3, 0, 0);
Cylinder20.SetColor(0.4755, 0.4242, 0.4242);
Cylinder20.group = 4;
models.emplace_back(Cylinder20);

 // Cube21 of Group Swing
Model Cube21;
Cube21.CreateCube(0.5);
Cube21.Translate(0.084, 0.885, -0.196);
Cube21.Scale(2.656, 0.175, 0.392);
Cube21.Rotate(0, 0, 0);
Cube21.SetColor(1, 1, 1);
Cube21.group = 4;
models.emplace_back(Cube21);

 // Cylinder22 of Group Swing
Model Cylinder22;
Cylinder22.CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder22.Translate(0.693, 0.901, -0.255);
Cylinder22.Scale(0.035, 0.055, 3);
Cylinder22.Rotate(74.3, 0, 0);
Cylinder22.SetColor(0.4363, 0.4063, 0.4063);
Cylinder22.group = 4;
models.emplace_back(Cylinder22);

 // Cylinder23 of Group Swing
Model Cylinder23;
Cylinder23.CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder23.Translate(0.693, 0.901, -0.243);
Cylinder23.Scale(0.035, 0.055, 3);
Cylinder23.Rotate(93.33, 0, 0);
Cylinder23.SetColor(0.4804, 0.365, 0.365);
Cylinder23.group = 4;
models.emplace_back(Cylinder23);

 // Cube24 of Group Swing
Model Cube24;
Cube24.CreateCube(0.5);
Cube24.Translate(0.17, -0.002, -0.142);
Cube24.Scale(1.034, 0.092, 0.073);
Cube24.Rotate(0, 0, 0);
Cube24.SetColor(0.8588, 0.4863, 0.2863);
Cube24.group = 4;
models.emplace_back(Cube24);

 // Cube25 of Group Swing
Model Cube25;
Cube25.CreateCube(0.5);
Cube25.Translate(0.17, 0.002, -0.095);
Cube25.Scale(1.034, 0.092, 0.073);
Cube25.Rotate(0, 0, 0);
Cube25.SetColor(0.8588, 0.4863, 0.2863);
Cube25.group = 4;
models.emplace_back(Cube25);

 // Cube26 of Group Swing
Model Cube26;
Cube26.CreateCube(0.5);
Cube26.Translate(0.17, 0.023, -0.226);
Cube26.Scale(1.034, 0.092, 0.073);
Cube26.Rotate(0, 0, 0);
Cube26.SetColor(0.8588, 0.4863, 0.2863);
Cube26.group = 4;
models.emplace_back(Cube26);

 // Cube27 of Group Swing
Model Cube27;
Cube27.CreateCube(0.5);
Cube27.Translate(0.17, 0.019, -0.268);
Cube27.Scale(1.034, 0.092, 0.073);
Cube27.Rotate(0, 0, 0);
Cube27.SetColor(0.8588, 0.4863, 0.2863);
Cube27.group = 4;
models.emplace_back(Cube27);

 // Cube28
Model Cube28;
Cube28.CreateCube(0.5);
Cube28.Translate(0.458, -0.083, 1.608);
Cube28.Scale(1.985, 0.088, 0.216);
Cube28.Rotate(0, 0, 0);
Cube28.SetColor(1, 1, 1);
models.emplace_back(Cube28);

}
