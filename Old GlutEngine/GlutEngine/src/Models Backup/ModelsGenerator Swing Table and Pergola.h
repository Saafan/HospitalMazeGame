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
 
 // Cylinder12
Model Cylinder12;
Cylinder12 .CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder12.Translate(-0.073, 0.011, 0.472);
Cylinder12.Scale(0.365, 0.365, 0.178);
Cylinder12.Rotate(88.99, 0, 0);
Cylinder12.SetColor(1, 1, 1);
models.emplace_back(Cylinder12);
 
 // Cylinder13
Model Cylinder13;
Cylinder13 .CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder13.Translate(-0.056, -0.079, 0.461);
Cylinder13.Scale(0.079, 0.079, 1.455);
Cylinder13.Rotate(101.1, 0, 117.3);
Cylinder13.SetColor(0.3382, 0.3382, 0.3382);
models.emplace_back(Cylinder13);
 
 // Cylinder14
Model Cylinder14;
Cylinder14 .CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder14.Translate(-0.056, -0.034, 0.461);
Cylinder14.Scale(0.079, 0.079, 1.455);
Cylinder14.Rotate(64.72, 0, 88.99);
Cylinder14.SetColor(0.3382, 0.3382, 0.3382);
models.emplace_back(Cylinder14);
 
 // Sphere15
Model Sphere15;
Sphere15 .CreateSphere(0.5, 10, 10);
Sphere15.Translate(-0.062, 0.011, 0.466);
Sphere15.Scale(0.447, 0.01, 0.413);
Sphere15.Rotate(0, 0, 0);
Sphere15.SetColor(0.8588, 0.4863, 0.1059);
models.emplace_back(Sphere15);
 
 // Cylinder16
Model Cylinder16;
Cylinder16 .CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder16.Translate(-0.056, -0.062, 0.461);
Cylinder16.Scale(0.079, 0.079, 1.455);
Cylinder16.Rotate(84.94, 343.8, 88.99);
Cylinder16.SetColor(0.3382, 0.3382, 0.3382);
models.emplace_back(Cylinder16);
 
 // Cylinder17
Model Cylinder17;
Cylinder17 .CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder17.Translate(-0.056, -0.04, 0.461);
Cylinder17.Scale(0.079, 0.079, 1.455);
Cylinder17.Rotate(84.94, 16.18, 88.99);
Cylinder17.SetColor(0.3333, 0.3333, 0.3333);
models.emplace_back(Cylinder17);
 
 // Teapot18
Model Teapot18;
Teapot18.CreateTeapot(0.5);
Teapot18.Translate(-0.079, 0.056, 0.461);
Teapot18.Scale(0.148, 0.148, 0.148);
Teapot18.Rotate(0, 0, 0);
Teapot18.SetColor(0.4265, 0.004181, 0.004181);
models.emplace_back(Teapot18);
 
 // Cube19
Model Cube19;
Cube19.CreateCube(0.5);
Cube19.Translate(1, 0.469, 0.348);
Cube19.Scale(0.095, 4.337, 0.094);
Cube19.Rotate(0, 0, 0);
Cube19.SetColor(1, 1, 1);
models.emplace_back(Cube19);
 
 // Cube20
Model Cube20;
Cube20.CreateCube(0.5);
Cube20.Translate(1, 0.565, -0.449);
Cube20.Scale(0.095, 4.337, 0.094);
Cube20.Rotate(0, 0, 0);
Cube20.SetColor(1, 1, 1);
models.emplace_back(Cube20);
 
 // Cube21
Model Cube21;
Cube21.CreateCube(0.5);
Cube21.Translate(-0.915, 0.469, 0.348);
Cube21.Scale(0.095, 4.337, 0.094);
Cube21.Rotate(0, 0, 0);
Cube21.SetColor(1, 1, 1);
models.emplace_back(Cube21);
 
 // Cube22
Model Cube22;
Cube22.CreateCube(0.5);
Cube22.Translate(-0.96, 0.554, -0.449);
Cube22.Scale(0.095, 4.337, 0.094);
Cube22.Rotate(0, 0, 0);
Cube22.SetColor(1, 1, 1);
models.emplace_back(Cube22);
 
 // Cube23
Model Cube23;
Cube23.CreateCube(0.5);
Cube23.Translate(0.045, 1.672, -0.449);
Cube23.Scale(4.408, 0.278, 0.416);
Cube23.Rotate(0, 0, 0);
Cube23.SetColor(1, 1, 1);
models.emplace_back(Cube23);
 
 // Cube24
Model Cube24;
Cube24.CreateCube(0.5);
Cube24.Translate(0.056, 1.65, -0.247);
Cube24.Scale(4.408, 0.278, 0.416);
Cube24.Rotate(0, 0, 0);
Cube24.SetColor(1, 1, 1);
models.emplace_back(Cube24);
 
 // Cube25
Model Cube25;
Cube25.CreateCube(0.5);
Cube25.Translate(0.056, 1.684, -0.034);
Cube25.Scale(4.408, 0.278, 0.416);
Cube25.Rotate(0, 0, 0);
Cube25.SetColor(1, 1, 1);
models.emplace_back(Cube25);
 
 // Cube26
Model Cube26;
Cube26.CreateCube(0.5);
Cube26.Translate(0.056, 1.593, 0.191);
Cube26.Scale(4.408, 0.278, 0.416);
Cube26.Rotate(0, 0, 0);
Cube26.SetColor(1, 1, 1);
models.emplace_back(Cube26);
 
 // Cube27
Model Cube27;
Cube27.CreateCube(0.5);
Cube27.Translate(0.056, 1.605, 0.404);
Cube27.Scale(4.408, 0.278, 0.416);
Cube27.Rotate(0, 0, 0);
Cube27.SetColor(1, 1, 1);
models.emplace_back(Cube27);
 
}
