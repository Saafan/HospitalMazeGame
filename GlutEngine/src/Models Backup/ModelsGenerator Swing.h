#pragma once
#include "Model.h"
void GenerateModels(std::vector<Model>& models)
 {

 // Cube0
Model Cube0;
Cube0.CreateCube(0.5);
Cube0.Translate(0.15, 0.027, -0.179);
Cube0.Scale(1.034, 0.092, 0.073);
Cube0.Rotate(0, 0, 0);
Cube0.SetColor(0.8588, 0.4863, 0.2863);
models.emplace_back(Cube0);
 
 // Cube1
Model Cube1;
Cube1.CreateCube(0.5);
Cube1.Translate(0.349, 0.434, -0.217);
Cube1.Scale(0.01, 1.829, 0.01);
Cube1.Rotate(0, 0, 0);
Cube1.SetColor(0.6765, 0.6765, 0.6765);
models.emplace_back(Cube1);
 
 // Cylinder2
Model Cylinder2;
Cylinder2 .CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder2.Translate(-0.57, 0.901, -0.243);
Cylinder2.Scale(0.035, 0.055, 3);
Cylinder2.Rotate(93.33, 0, 0);
Cylinder2.SetColor(0.4657, 0.4177, 0.4177);
models.emplace_back(Cylinder2);
 
 // Cube3
Model Cube3;
Cube3.CreateCube(0.5);
Cube3.Translate(-0.094, 0.43, -0.174);
Cube3.Scale(0.01, 1.613, 0.01);
Cube3.Rotate(0, 0, 0);
Cube3.SetColor(0.4853, 0.4853, 0.4853);
models.emplace_back(Cube3);
 
 // Cylinder4
Model Cylinder4;
Cylinder4 .CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder4.Translate(-0.574, 0.901, -0.255);
Cylinder4.Scale(0.035, 0.055, 3);
Cylinder4.Rotate(74.3, 0, 0);
Cylinder4.SetColor(0.4755, 0.4242, 0.4242);
models.emplace_back(Cylinder4);
 
 // Cube5
Model Cube5;
Cube5.CreateCube(0.5);
Cube5.Translate(0.068, 0.885, -0.196);
Cube5.Scale(2.656, 0.175, 0.392);
Cube5.Rotate(0, 0, 0);
Cube5.SetColor(1, 1, 1);
models.emplace_back(Cube5);
 
 // Cylinder6
Model Cylinder6;
Cylinder6 .CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder6.Translate(0.677, 0.901, -0.255);
Cylinder6.Scale(0.035, 0.055, 3);
Cylinder6.Rotate(74.3, 0, 0);
Cylinder6.SetColor(0.4363, 0.4063, 0.4063);
models.emplace_back(Cylinder6);
 
 // Cylinder7
Model Cylinder7;
Cylinder7 .CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder7.Translate(0.677, 0.901, -0.243);
Cylinder7.Scale(0.035, 0.055, 3);
Cylinder7.Rotate(93.33, 0, 0);
Cylinder7.SetColor(0.4804, 0.365, 0.365);
models.emplace_back(Cylinder7);
 
 // Cube8
Model Cube8;
Cube8.CreateCube(0.5);
Cube8.Translate(0.154, -0.002, -0.142);
Cube8.Scale(1.034, 0.092, 0.073);
Cube8.Rotate(0, 0, 0);
Cube8.SetColor(0.8588, 0.4863, 0.2863);
models.emplace_back(Cube8);
 
 // Cube9
Model Cube9;
Cube9.CreateCube(0.5);
Cube9.Translate(0.154, 0.002, -0.095);
Cube9.Scale(1.034, 0.092, 0.073);
Cube9.Rotate(0, 0, 0);
Cube9.SetColor(0.8588, 0.4863, 0.2863);
models.emplace_back(Cube9);
 
 // Cube10
Model Cube10;
Cube10.CreateCube(0.5);
Cube10.Translate(0.154, 0.023, -0.226);
Cube10.Scale(1.034, 0.092, 0.073);
Cube10.Rotate(0, 0, 0);
Cube10.SetColor(0.8588, 0.4863, 0.2863);
models.emplace_back(Cube10);
 
 // Cube11
Model Cube11;
Cube11.CreateCube(0.5);
Cube11.Translate(0.154, 0.019, -0.268);
Cube11.Scale(1.034, 0.092, 0.073);
Cube11.Rotate(0, 0, 0);
Cube11.SetColor(0.8588, 0.4863, 0.2863);
models.emplace_back(Cube11);
 
}
