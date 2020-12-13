#pragma once
#include "Model.h"
void GenerateModels(std::vector<Model>& models)
{

 // Cube0
Model Cube0;
Cube0.CreateCube(0.5);
Cube0.Translate(-0.021, -0.125, 1.196);
Cube0.Scale(1.699, 0.088, 0.139);
Cube0.Rotate(0, 0, 0);
Cube0.SetColor(0.6588, 0.4588, 0.2706);
models.emplace_back(Cube0);

 // Cube1
Model Cube1;
Cube1.CreateCube(0.5);
Cube1.Translate(-0.021, -0.125, 1.258);
Cube1.Scale(1.699, 0.088, 0.139);
Cube1.Rotate(0, 0, 0);
Cube1.SetColor(0.6569, 0.4637, 0.2705);
models.emplace_back(Cube1);

 // Cube2
Model Cube2;
Cube2.CreateCube(0.5);
Cube2.Translate(0, -0.146, 1.32);
Cube2.Scale(1.647, 0.088, 0.139);
Cube2.Rotate(208.1, 0, 0);
Cube2.SetColor(0.6588, 0.4588, 0.2706);
models.emplace_back(Cube2);

 // Cube3
Model Cube3;
Cube3.CreateCube(0.5);
Cube3.Translate(0, -0.188, 1.381);
Cube3.Scale(1.725, 0.088, 0.139);
Cube3.Rotate(31.88, 0, 0);
Cube3.SetColor(0.6588, 0.4588, 0.2706);
models.emplace_back(Cube3);

 // Cube4
Model Cube4;
Cube4.CreateCube(0.5);
Cube4.Translate(0, -0.229, 1.423);
Cube4.Scale(1.725, 0.088, 0.139);
Cube4.Rotate(52.5, 0, 0);
Cube4.SetColor(0.6588, 0.4588, 0.2706);
models.emplace_back(Cube4);

 // Cube5
Model Cube5;
Cube5.CreateCube(0.5);
Cube5.Translate(0, -0.104, 1.134);
Cube5.Scale(1.699, 0.088, 0.139);
Cube5.Rotate(20.63, 0, 0);
Cube5.SetColor(0.6588, 0.4588, 0.2706);
models.emplace_back(Cube5);

 // Cube6
Model Cube6;
Cube6.CreateCube(0.5);
Cube6.Translate(0.021, -0.063, 1.072);
Cube6.Scale(1.985, 0.088, 0.139);
Cube6.Rotate(71.25, 0, 0);
Cube6.SetColor(0.6588, 0.4588, 0.2706);
models.emplace_back(Cube6);

 // Cube7
Model Cube7;
Cube7.CreateCube(0.5);
Cube7.Translate(0.021, 0.063, 1.052);
Cube7.Scale(1.933, 0.088, 0.139);
Cube7.Rotate(90, 0, 0);
Cube7.SetColor(0.6588, 0.4588, 0.2706);
models.emplace_back(Cube7);

 // Cube8
Model Cube8;
Cube8.CreateCube(0.5);
Cube8.Translate(0, 0.021, 1.072);
Cube8.Scale(1.985, 0.088, 0.139);
Cube8.Rotate(90, 0, 0);
Cube8.SetColor(0.6588, 0.4588, 0.2706);
models.emplace_back(Cube8);

 // Cube9
Model Cube9;
Cube9.CreateCube(0.5);
Cube9.Translate(0, 0.146, 1.052);
Cube9.Scale(1.933, 0.088, 0.139);
Cube9.Rotate(90, 0, 0);
Cube9.SetColor(0.6588, 0.4588, 0.2706);
models.emplace_back(Cube9);

 // Cylinder10
Model Cylinder10;
Cylinder10.CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder10.Translate(0.5, -0.125, 1.093);
Cylinder10.Scale(0.091, 0.091, 0.627);
Cylinder10.Rotate(253.1, 0, 0);
Cylinder10.SetColor(0.6275, 0.6274, 0.6274);
models.emplace_back(Cylinder10);

 // Cylinder11
Model Cylinder11;
Cylinder11.CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder11.Translate(0.5, -0.104, 1.381);
Cylinder11.Scale(0.091, 0.091, 0.627);
Cylinder11.Rotate(178.1, 0, 0);
Cylinder11.SetColor(0.6275, 0.6274, 0.6274);
models.emplace_back(Cylinder11);

 // Cylinder12
Model Cylinder12;
Cylinder12.CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder12.Translate(0.5, -0.354, 1.485);
Cylinder12.Scale(0.091, 0.091, 0.602);
Cylinder12.Rotate(245.6, 0, 0);
Cylinder12.SetColor(0.6275, 0.6274, 0.6274);
models.emplace_back(Cylinder12);

 // Cylinder13
Model Cylinder13;
Cylinder13.CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder13.Translate(0.5, -0.375, 0.969);
Cylinder13.Scale(0.091, 0.091, 0.627);
Cylinder13.Rotate(294.4, 0, 0);
Cylinder13.SetColor(0.6275, 0.6274, 0.6274);
models.emplace_back(Cylinder13);

 // Cylinder14
Model Cylinder14;
Cylinder14.CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder14.Translate(-0.417, -0.354, 0.99);
Cylinder14.Scale(0.091, 0.091, 0.627);
Cylinder14.Rotate(294.4, 0, 0);
Cylinder14.SetColor(0.6275, 0.6274, 0.6274);
models.emplace_back(Cylinder14);

 // Cylinder15
Model Cylinder15;
Cylinder15.CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder15.Translate(-0.458, -0.354, 1.485);
Cylinder15.Scale(0.091, 0.091, 0.602);
Cylinder15.Rotate(245.6, 0, 0);
Cylinder15.SetColor(0.6275, 0.6274, 0.6274);
models.emplace_back(Cylinder15);

 // Cylinder16
Model Cylinder16;
Cylinder16.CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder16.Translate(-0.458, -0.104, 1.381);
Cylinder16.Scale(0.091, 0.091, 0.627);
Cylinder16.Rotate(178.1, 0, 0);
Cylinder16.SetColor(0.6275, 0.6274, 0.6274);
models.emplace_back(Cylinder16);

 // Cylinder17
Model Cylinder17;
Cylinder17.CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder17.Translate(-0.479, -0.125, 1.093);
Cylinder17.Scale(0.091, 0.091, 0.627);
Cylinder17.Rotate(253.1, 0, 0);
Cylinder17.SetColor(0.6275, 0.6274, 0.6274);
models.emplace_back(Cylinder17);

 // Cylinder18 of Group Table
Model Cylinder18;
Cylinder18.CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder18.Translate(-0.056, -0.034, 0.461);
Cylinder18.Scale(0.079, 0.079, 1.455);
Cylinder18.Rotate(64.72, 0, 88.99);
Cylinder18.SetColor(0.3382, 0.3382, 0.3382);
Cylinder18.group = 2;
models.emplace_back(Cylinder18);

 // Sphere19 of Group Table
Model Sphere19;
Sphere19.CreateSphere(0.5, 10, 10);
Sphere19.Translate(-0.062, 0.011, 0.466);
Sphere19.Scale(0.447, 0.01, 0.413);
Sphere19.Rotate(0, 0, 0);
Sphere19.SetColor(0.8588, 0.4863, 0.1059);
Sphere19.group = 2;
models.emplace_back(Sphere19);

 // Cylinder20 of Group Table
Model Cylinder20;
Cylinder20.CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder20.Translate(-0.056, -0.062, 0.461);
Cylinder20.Scale(0.079, 0.079, 1.455);
Cylinder20.Rotate(84.94, 343.8, 88.99);
Cylinder20.SetColor(0.3382, 0.3382, 0.3382);
Cylinder20.group = 2;
models.emplace_back(Cylinder20);

 // Cylinder21 of Group Table
Model Cylinder21;
Cylinder21.CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder21.Translate(-0.056, -0.04, 0.461);
Cylinder21.Scale(0.079, 0.079, 1.455);
Cylinder21.Rotate(84.94, 16.18, 88.99);
Cylinder21.SetColor(0.3333, 0.3333, 0.3333);
Cylinder21.group = 2;
models.emplace_back(Cylinder21);

 // Teapot22 of Group Table
Model Teapot22;
Teapot22.CreateTeapot(0.5);
Teapot22.Translate(-0.079, 0.056, 0.461);
Teapot22.Scale(0.148, 0.148, 0.148);
Teapot22.Rotate(0, 0, 0);
Teapot22.SetColor(0.4265, 0.004181, 0.004181);
Teapot22.group = 2;
models.emplace_back(Teapot22);

 // Cylinder23 of Group Table
Model Cylinder23;
Cylinder23.CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder23.Translate(-0.073, 0.011, 0.472);
Cylinder23.Scale(0.365, 0.365, 0.178);
Cylinder23.Rotate(88.99, 0, 0);
Cylinder23.SetColor(1, 1, 1);
Cylinder23.group = 2;
models.emplace_back(Cylinder23);

 // Cylinder24 of Group Table
Model Cylinder24;
Cylinder24.CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder24.Translate(-0.056, -0.079, 0.461);
Cylinder24.Scale(0.079, 0.079, 1.455);
Cylinder24.Rotate(101.1, 0, 117.3);
Cylinder24.SetColor(0.3382, 0.3382, 0.3382);
Cylinder24.group = 2;
models.emplace_back(Cylinder24);

 // Cube25 of Group Pergola
Model Cube25;
Cube25.CreateCube(0.5);
Cube25.Translate(0.056, 1.586, 0.191);
Cube25.Scale(4.408, 0.278, 0.416);
Cube25.Rotate(0, 0, 0);
Cube25.SetColor(1, 1, 1);
Cube25.group = 3;
models.emplace_back(Cube25);

 // Cube26 of Group Pergola
Model Cube26;
Cube26.CreateCube(0.5);
Cube26.Translate(-0.96, 0.547, -0.449);
Cube26.Scale(0.095, 4.337, 0.094);
Cube26.Rotate(0, 0, 0);
Cube26.SetColor(1, 1, 1);
Cube26.group = 3;
models.emplace_back(Cube26);

 // Cube27 of Group Pergola
Model Cube27;
Cube27.CreateCube(0.5);
Cube27.Translate(0.056, 1.598, 0.404);
Cube27.Scale(4.408, 0.278, 0.416);
Cube27.Rotate(0, 0, 0);
Cube27.SetColor(1, 1, 1);
Cube27.group = 3;
models.emplace_back(Cube27);

 // Cube28 of Group Pergola
Model Cube28;
Cube28.CreateCube(0.5);
Cube28.Translate(0.056, 1.677, -0.034);
Cube28.Scale(4.408, 0.278, 0.416);
Cube28.Rotate(0, 0, 0);
Cube28.SetColor(1, 1, 1);
Cube28.group = 3;
models.emplace_back(Cube28);

 // Cube29 of Group Pergola
Model Cube29;
Cube29.CreateCube(0.5);
Cube29.Translate(0.045, 1.665, -0.449);
Cube29.Scale(4.408, 0.278, 0.416);
Cube29.Rotate(0, 0, 0);
Cube29.SetColor(1, 1, 1);
Cube29.group = 3;
models.emplace_back(Cube29);

 // Cube30 of Group Pergola
Model Cube30;
Cube30.CreateCube(0.5);
Cube30.Translate(1, 0.558, -0.449);
Cube30.Scale(0.095, 4.337, 0.094);
Cube30.Rotate(0, 0, 0);
Cube30.SetColor(1, 1, 1);
Cube30.group = 3;
models.emplace_back(Cube30);

 // Cube31 of Group Pergola
Model Cube31;
Cube31.CreateCube(0.5);
Cube31.Translate(-0.915, 0.462, 0.348);
Cube31.Scale(0.095, 4.337, 0.094);
Cube31.Rotate(0, 0, 0);
Cube31.SetColor(1, 1, 1);
Cube31.group = 3;
models.emplace_back(Cube31);

 // Cube32 of Group Pergola
Model Cube32;
Cube32.CreateCube(0.5);
Cube32.Translate(1, 0.462, 0.348);
Cube32.Scale(0.095, 4.337, 0.094);
Cube32.Rotate(0, 0, 0);
Cube32.SetColor(1, 1, 1);
Cube32.group = 3;
models.emplace_back(Cube32);

 // Cube33 of Group Pergola
Model Cube33;
Cube33.CreateCube(0.5);
Cube33.Translate(0.056, 1.643, -0.247);
Cube33.Scale(4.408, 0.278, 0.416);
Cube33.Rotate(0, 0, 0);
Cube33.SetColor(1, 1, 1);
Cube33.group = 3;
models.emplace_back(Cube33);

 // Cube34 of Group Swing
Model Cube34;
Cube34.CreateCube(0.5);
Cube34.Translate(0.166, 0.027, -0.179);
Cube34.Scale(1.034, 0.092, 0.073);
Cube34.Rotate(0, 0, 0);
Cube34.SetColor(0.8588, 0.4863, 0.2863);
Cube34.group = 4;
models.emplace_back(Cube34);

 // Cube35 of Group Swing
Model Cube35;
Cube35.CreateCube(0.5);
Cube35.Translate(0.365, 0.434, -0.217);
Cube35.Scale(0.01, 1.829, 0.01);
Cube35.Rotate(0, 0, 0);
Cube35.SetColor(0.6765, 0.6765, 0.6765);
Cube35.group = 4;
models.emplace_back(Cube35);

 // Cube36 of Group Swing
Model Cube36;
Cube36.CreateCube(0.5);
Cube36.Translate(0.084, 0.885, -0.196);
Cube36.Scale(2.656, 0.175, 0.392);
Cube36.Rotate(0, 0, 0);
Cube36.SetColor(1, 1, 1);
Cube36.group = 4;
models.emplace_back(Cube36);

 // Cylinder37 of Group Swing
Model Cylinder37;
Cylinder37.CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder37.Translate(0.693, 0.901, -0.255);
Cylinder37.Scale(0.035, 0.055, 3);
Cylinder37.Rotate(74.3, 0, 0);
Cylinder37.SetColor(0.4363, 0.4063, 0.4063);
Cylinder37.group = 4;
models.emplace_back(Cylinder37);

 // Cylinder38 of Group Swing
Model Cylinder38;
Cylinder38.CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder38.Translate(-0.554, 0.901, -0.243);
Cylinder38.Scale(0.035, 0.055, 3);
Cylinder38.Rotate(93.33, 0, 0);
Cylinder38.SetColor(0.4657, 0.4177, 0.4177);
Cylinder38.group = 4;
models.emplace_back(Cylinder38);

 // Cube39 of Group Swing
Model Cube39;
Cube39.CreateCube(0.5);
Cube39.Translate(-0.078, 0.43, -0.174);
Cube39.Scale(0.01, 1.613, 0.01);
Cube39.Rotate(0, 0, 0);
Cube39.SetColor(0.4853, 0.4853, 0.4853);
Cube39.group = 4;
models.emplace_back(Cube39);

 // Cylinder40 of Group Swing
Model Cylinder40;
Cylinder40.CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder40.Translate(-0.558, 0.901, -0.255);
Cylinder40.Scale(0.035, 0.055, 3);
Cylinder40.Rotate(74.3, 0, 0);
Cylinder40.SetColor(0.4755, 0.4242, 0.4242);
Cylinder40.group = 4;
models.emplace_back(Cylinder40);

 // Cube41 of Group Swing
Model Cube41;
Cube41.CreateCube(0.5);
Cube41.Translate(0.17, 0.023, -0.226);
Cube41.Scale(1.034, 0.092, 0.073);
Cube41.Rotate(0, 0, 0);
Cube41.SetColor(0.8588, 0.4863, 0.2863);
Cube41.group = 4;
models.emplace_back(Cube41);

 // Cube42 of Group Swing
Model Cube42;
Cube42.CreateCube(0.5);
Cube42.Translate(0.17, 0.019, -0.268);
Cube42.Scale(1.034, 0.092, 0.073);
Cube42.Rotate(0, 0, 0);
Cube42.SetColor(0.8588, 0.4863, 0.2863);
Cube42.group = 4;
models.emplace_back(Cube42);

 // Cylinder43 of Group Swing
Model Cylinder43;
Cylinder43.CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder43.Translate(0.693, 0.901, -0.243);
Cylinder43.Scale(0.035, 0.055, 3);
Cylinder43.Rotate(93.33, 0, 0);
Cylinder43.SetColor(0.4804, 0.365, 0.365);
Cylinder43.group = 4;
models.emplace_back(Cylinder43);

 // Cube44 of Group Swing
Model Cube44;
Cube44.CreateCube(0.5);
Cube44.Translate(0.17, -0.002, -0.142);
Cube44.Scale(1.034, 0.092, 0.073);
Cube44.Rotate(0, 0, 0);
Cube44.SetColor(0.8588, 0.4863, 0.2863);
Cube44.group = 4;
models.emplace_back(Cube44);

 // Cube45 of Group Swing
Model Cube45;
Cube45.CreateCube(0.5);
Cube45.Translate(0.17, 0.002, -0.095);
Cube45.Scale(1.034, 0.092, 0.073);
Cube45.Rotate(0, 0, 0);
Cube45.SetColor(0.8588, 0.4863, 0.2863);
Cube45.group = 4;
models.emplace_back(Cube45);

}
