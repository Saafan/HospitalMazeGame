#pragma once
#include "Model.h"
void GenerateModels(std::vector<Model>& models)
{

 // Cube0
Model Cube0;
Cube0.CreateCube(0.5);
Cube0.Translate(1.009, -0.513, 0.702);
Cube0.Scale(0.319, 0.672, 0.01);
Cube0.Rotate(0, 0, 0);
Cube0.SetColor(0, 0.25, 0.0372);
models.emplace_back(Cube0);

 // Cone1
Model Cone1;
Cone1.CreateCone(0.5, 0.5, 10, 10);
Cone1.Translate(1.009, -0.442, 0.702);
Cone1.Scale(0.275, 0.098, 0.501);
Cone1.Rotate(270.8, 0, 0);
Cone1.SetColor(0.06711, 0.451, 0);
models.emplace_back(Cone1);

 // Cylinder2 of Group Table
Model Cylinder2;
Cylinder2.CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder2.Translate(-0.073, 0.011, 0.472);
Cylinder2.Scale(0.365, 0.365, 0.178);
Cylinder2.Rotate(88.99, 0, 0);
Cylinder2.SetColor(1, 1, 1);
Cylinder2.group = 2;
models.emplace_back(Cylinder2);

 // Cylinder3 of Group Table
Model Cylinder3;
Cylinder3.CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder3.Translate(-0.056, -0.079, 0.461);
Cylinder3.Scale(0.079, 0.079, 1.455);
Cylinder3.Rotate(101.1, 0, 117.3);
Cylinder3.SetColor(0.3382, 0.3382, 0.3382);
Cylinder3.group = 2;
models.emplace_back(Cylinder3);

 // Cylinder4 of Group Table
Model Cylinder4;
Cylinder4.CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder4.Translate(-0.056, -0.034, 0.461);
Cylinder4.Scale(0.079, 0.079, 1.455);
Cylinder4.Rotate(64.72, 0, 88.99);
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

 // Sphere7 of Group Table
Model Sphere7;
Sphere7.CreateSphere(0.5, 10, 10);
Sphere7.Translate(-0.062, 0.011, 0.466);
Sphere7.Scale(0.447, 0.01, 0.413);
Sphere7.Rotate(0, 0, 0);
Sphere7.SetColor(0.8588, 0.4863, 0.1059);
Sphere7.group = 2;
models.emplace_back(Sphere7);

 // Cylinder8 of Group Table
Model Cylinder8;
Cylinder8.CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder8.Translate(-0.056, -0.062, 0.461);
Cylinder8.Scale(0.079, 0.079, 1.455);
Cylinder8.Rotate(84.94, 343.8, 88.99);
Cylinder8.SetColor(0.3382, 0.3382, 0.3382);
Cylinder8.group = 2;
models.emplace_back(Cylinder8);

 // Cube9 of Group Pergola
Model Cube9;
Cube9.CreateCube(0.5);
Cube9.Translate(1, 0.498, -0.449);
Cube9.Scale(0.095, 4.337, 0.094);
Cube9.Rotate(0, 0, 0);
Cube9.SetColor(1, 1, 1);
Cube9.group = 3;
models.emplace_back(Cube9);

 // Cube10 of Group Pergola
Model Cube10;
Cube10.CreateCube(0.5);
Cube10.Translate(0.056, 1.526, 0.191);
Cube10.Scale(4.408, 0.278, 0.416);
Cube10.Rotate(0, 0, 0);
Cube10.SetColor(0.651, 0.4039, 0);
Cube10.group = 3;
models.emplace_back(Cube10);

 // Cube11 of Group Pergola
Model Cube11;
Cube11.CreateCube(0.5);
Cube11.Translate(-0.96, 0.487, -0.449);
Cube11.Scale(0.095, 4.337, 0.094);
Cube11.Rotate(0, 0, 0);
Cube11.SetColor(1, 1, 1);
Cube11.group = 3;
models.emplace_back(Cube11);

 // Cube12 of Group Pergola
Model Cube12;
Cube12.CreateCube(0.5);
Cube12.Translate(0.056, 1.583, -0.247);
Cube12.Scale(4.408, 0.278, 0.416);
Cube12.Rotate(0, 0, 0);
Cube12.SetColor(0.652, 0.4027, 0);
Cube12.group = 3;
models.emplace_back(Cube12);

 // Cube13 of Group Pergola
Model Cube13;
Cube13.CreateCube(0.5);
Cube13.Translate(0.056, 1.617, -0.034);
Cube13.Scale(4.408, 0.278, 0.416);
Cube13.Rotate(0, 0, 0);
Cube13.SetColor(0.6392, 0.4235, 0);
Cube13.group = 3;
models.emplace_back(Cube13);

 // Cube14 of Group Pergola
Model Cube14;
Cube14.CreateCube(0.5);
Cube14.Translate(0.045, 1.605, -0.449);
Cube14.Scale(4.408, 0.278, 0.416);
Cube14.Rotate(0, 0, 0);
Cube14.SetColor(0.6431, 0.4235, 0);
Cube14.group = 3;
models.emplace_back(Cube14);

 // Cube15 of Group Pergola
Model Cube15;
Cube15.CreateCube(0.5);
Cube15.Translate(0.056, 1.538, 0.404);
Cube15.Scale(4.408, 0.278, 0.416);
Cube15.Rotate(0, 0, 0);
Cube15.SetColor(0.6471, 0.4235, 0);
Cube15.group = 3;
models.emplace_back(Cube15);

 // Cube16 of Group Pergola
Model Cube16;
Cube16.CreateCube(0.5);
Cube16.Translate(-0.915, 0.402, 0.348);
Cube16.Scale(0.095, 4.337, 0.094);
Cube16.Rotate(0, 0, 0);
Cube16.SetColor(1, 1, 1);
Cube16.group = 3;
models.emplace_back(Cube16);

 // Cube17 of Group Pergola
Model Cube17;
Cube17.CreateCube(0.5);
Cube17.Translate(1, 0.402, 0.348);
Cube17.Scale(0.095, 4.337, 0.094);
Cube17.Rotate(0, 0, 0);
Cube17.SetColor(1, 1, 1);
Cube17.group = 3;
models.emplace_back(Cube17);

 // Cube18 of Group Swing
Model Cube18;
Cube18.CreateCube(0.5);
Cube18.Translate(0.365, 0.288, -0.217);
Cube18.Scale(0.01, 1.829, 0.01);
Cube18.Rotate(0, 0, 0);
Cube18.SetColor(0.6765, 0.6765, 0.6765);
Cube18.group = 4;
models.emplace_back(Cube18);

 // Cube19 of Group Swing
Model Cube19;
Cube19.CreateCube(0.5);
Cube19.Translate(0.084, 0.739, -0.196);
Cube19.Scale(2.656, 0.175, 0.392);
Cube19.Rotate(0, 0, 0);
Cube19.SetColor(0.402, 0.1714, 0.1714);
Cube19.group = 4;
models.emplace_back(Cube19);

 // Cylinder20 of Group Swing
Model Cylinder20;
Cylinder20.CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder20.Translate(0.693, 0.755, -0.255);
Cylinder20.Scale(0.035, 0.055, 3);
Cylinder20.Rotate(74.3, 0, 0);
Cylinder20.SetColor(0.4363, 0.4063, 0.4063);
Cylinder20.group = 4;
models.emplace_back(Cylinder20);

 // Cylinder21 of Group Swing
Model Cylinder21;
Cylinder21.CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder21.Translate(-0.554, 0.755, -0.243);
Cylinder21.Scale(0.035, 0.055, 3);
Cylinder21.Rotate(93.33, 0, 0);
Cylinder21.SetColor(0.4657, 0.4177, 0.4177);
Cylinder21.group = 4;
models.emplace_back(Cylinder21);

 // Cube22 of Group Swing
Model Cube22;
Cube22.CreateCube(0.5);
Cube22.Translate(-0.078, 0.284, -0.174);
Cube22.Scale(0.01, 1.613, 0.01);
Cube22.Rotate(0, 0, 0);
Cube22.SetColor(0.4853, 0.4853, 0.4853);
Cube22.group = 4;
models.emplace_back(Cube22);

 // Cylinder23 of Group Swing
Model Cylinder23;
Cylinder23.CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder23.Translate(-0.558, 0.755, -0.255);
Cylinder23.Scale(0.035, 0.055, 3);
Cylinder23.Rotate(74.3, 0, 0);
Cylinder23.SetColor(0.4755, 0.4242, 0.4242);
Cylinder23.group = 4;
models.emplace_back(Cylinder23);

 // Cube24 of Group Swing
Model Cube24;
Cube24.CreateCube(0.5);
Cube24.Translate(0.17, -0.123, -0.226);
Cube24.Scale(1.034, 0.092, 0.073);
Cube24.Rotate(0, 0, 0);
Cube24.SetColor(0.8588, 0.4863, 0.2863);
Cube24.group = 4;
models.emplace_back(Cube24);

 // Cube25 of Group Swing
Model Cube25;
Cube25.CreateCube(0.5);
Cube25.Translate(0.17, -0.127, -0.268);
Cube25.Scale(1.034, 0.092, 0.073);
Cube25.Rotate(0, 0, 0);
Cube25.SetColor(0.8588, 0.4863, 0.2863);
Cube25.group = 4;
models.emplace_back(Cube25);

 // Cylinder26 of Group Swing
Model Cylinder26;
Cylinder26.CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder26.Translate(0.693, 0.755, -0.243);
Cylinder26.Scale(0.035, 0.055, 3);
Cylinder26.Rotate(93.33, 0, 0);
Cylinder26.SetColor(0.4275, 0.4196, 0.4196);
Cylinder26.group = 4;
models.emplace_back(Cylinder26);

 // Cube27 of Group Swing
Model Cube27;
Cube27.CreateCube(0.5);
Cube27.Translate(0.17, -0.148, -0.142);
Cube27.Scale(1.034, 0.092, 0.073);
Cube27.Rotate(0, 0, 0);
Cube27.SetColor(0.8588, 0.4863, 0.2863);
Cube27.group = 4;
models.emplace_back(Cube27);

 // Cube28 of Group Swing
Model Cube28;
Cube28.CreateCube(0.5);
Cube28.Translate(0.17, -0.144, -0.095);
Cube28.Scale(1.034, 0.092, 0.073);
Cube28.Rotate(0, 0, 0);
Cube28.SetColor(0.8588, 0.4863, 0.2863);
Cube28.group = 4;
models.emplace_back(Cube28);

 // Cube29 of Group Swing
Model Cube29;
Cube29.CreateCube(0.5);
Cube29.Translate(0.166, -0.119, -0.179);
Cube29.Scale(1.034, 0.092, 0.073);
Cube29.Rotate(0, 0, 0);
Cube29.SetColor(0.8588, 0.4863, 0.2863);
Cube29.group = 4;
models.emplace_back(Cube29);

 // Cube30 of Group Park Bench
Model Cube30;
Cube30.CreateCube(0.5);
Cube30.Translate(0.083, -0.542, 1.423);
Cube30.Scale(1.725, 0.088, 0.139);
Cube30.Rotate(52.5, 0, 0);
Cube30.SetColor(0.6588, 0.4588, 0.2706);
Cube30.group = 6;
models.emplace_back(Cube30);

 // Cube31 of Group Park Bench
Model Cube31;
Cube31.CreateCube(0.5);
Cube31.Translate(0.083, -0.417, 1.134);
Cube31.Scale(1.699, 0.088, 0.139);
Cube31.Rotate(20.63, 0, 0);
Cube31.SetColor(0.6588, 0.4588, 0.2706);
Cube31.group = 6;
models.emplace_back(Cube31);

 // Cylinder32 of Group Park Bench
Model Cylinder32;
Cylinder32.CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder32.Translate(0.583, -0.667, 1.485);
Cylinder32.Scale(0.091, 0.091, 0.602);
Cylinder32.Rotate(245.6, 0, 0);
Cylinder32.SetColor(0.6275, 0.6274, 0.6274);
Cylinder32.group = 6;
models.emplace_back(Cylinder32);

 // Cube33 of Group Park Bench
Model Cube33;
Cube33.CreateCube(0.5);
Cube33.Translate(0.104, -0.376, 1.072);
Cube33.Scale(1.985, 0.088, 0.139);
Cube33.Rotate(71.25, 0, 0);
Cube33.SetColor(0.6588, 0.4588, 0.2706);
Cube33.group = 6;
models.emplace_back(Cube33);

 // Cube34 of Group Park Bench
Model Cube34;
Cube34.CreateCube(0.5);
Cube34.Translate(0.062, -0.438, 1.258);
Cube34.Scale(1.699, 0.088, 0.139);
Cube34.Rotate(0, 0, 0);
Cube34.SetColor(0.6569, 0.4637, 0.2705);
Cube34.group = 6;
models.emplace_back(Cube34);

 // Cube35 of Group Park Bench
Model Cube35;
Cube35.CreateCube(0.5);
Cube35.Translate(0.083, -0.459, 1.32);
Cube35.Scale(1.647, 0.088, 0.139);
Cube35.Rotate(208.1, 0, 0);
Cube35.SetColor(0.6588, 0.4588, 0.2706);
Cube35.group = 6;
models.emplace_back(Cube35);

 // Cube36 of Group Park Bench
Model Cube36;
Cube36.CreateCube(0.5);
Cube36.Translate(0.083, -0.501, 1.381);
Cube36.Scale(1.725, 0.088, 0.139);
Cube36.Rotate(31.88, 0, 0);
Cube36.SetColor(0.6588, 0.4588, 0.2706);
Cube36.group = 6;
models.emplace_back(Cube36);

 // Torus37 of Group Park Bench
Model Torus37;
Torus37.CreateTours(0.266, 0.553, 10, 10);
Torus37.Translate(0.596, -0.543, 1.193);
Torus37.Scale(0.183, 0.183, 0.183);
Torus37.Rotate(0, 92.39, 0);
Torus37.SetColor(0.6235, 0.6235, 0.6314);
Torus37.group = 6;
models.emplace_back(Torus37);

 // Cube38 of Group Park Bench
Model Cube38;
Cube38.CreateCube(0.5);
Cube38.Translate(0.104, -0.25, 1.052);
Cube38.Scale(1.933, 0.088, 0.139);
Cube38.Rotate(90, 0, 0);
Cube38.SetColor(0.6588, 0.4588, 0.2706);
Cube38.group = 6;
models.emplace_back(Cube38);

 // Cube39 of Group Park Bench
Model Cube39;
Cube39.CreateCube(0.5);
Cube39.Translate(0.062, -0.438, 1.196);
Cube39.Scale(1.699, 0.088, 0.139);
Cube39.Rotate(0, 0, 0);
Cube39.SetColor(0.6588, 0.4588, 0.2706);
Cube39.group = 6;
models.emplace_back(Cube39);

 // Cube40 of Group Park Bench
Model Cube40;
Cube40.CreateCube(0.5);
Cube40.Translate(0.083, -0.167, 1.052);
Cube40.Scale(1.933, 0.088, 0.139);
Cube40.Rotate(90, 0, 0);
Cube40.SetColor(0.6588, 0.4588, 0.2706);
Cube40.group = 6;
models.emplace_back(Cube40);

 // Cylinder41 of Group Park Bench
Model Cylinder41;
Cylinder41.CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder41.Translate(-0.375, -0.417, 1.381);
Cylinder41.Scale(0.091, 0.091, 0.627);
Cylinder41.Rotate(178.1, 0, 0);
Cylinder41.SetColor(0.6275, 0.6274, 0.6274);
Cylinder41.group = 6;
models.emplace_back(Cylinder41);

 // Cylinder42 of Group Park Bench
Model Cylinder42;
Cylinder42.CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder42.Translate(0.583, -0.438, 1.093);
Cylinder42.Scale(0.091, 0.091, 0.627);
Cylinder42.Rotate(253.1, 0, 0);
Cylinder42.SetColor(0.6275, 0.6274, 0.6274);
Cylinder42.group = 6;
models.emplace_back(Cylinder42);

 // Cube43 of Group Park Bench
Model Cube43;
Cube43.CreateCube(0.5);
Cube43.Translate(0.083, -0.292, 1.072);
Cube43.Scale(1.985, 0.088, 0.139);
Cube43.Rotate(90, 0, 0);
Cube43.SetColor(0.6588, 0.4588, 0.2706);
Cube43.group = 6;
models.emplace_back(Cube43);

 // Cylinder44 of Group Park Bench
Model Cylinder44;
Cylinder44.CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder44.Translate(-0.375, -0.667, 1.485);
Cylinder44.Scale(0.091, 0.091, 0.602);
Cylinder44.Rotate(245.6, 0, 0);
Cylinder44.SetColor(0.6275, 0.6274, 0.6274);
Cylinder44.group = 6;
models.emplace_back(Cylinder44);

 // Torus45 of Group Park Bench
Model Torus45;
Torus45.CreateTours(0.266, 0.553, 10, 10);
Torus45.Translate(-0.395, -0.543, 1.193);
Torus45.Scale(0.183, 0.183, 0.183);
Torus45.Rotate(0, 92.39, 0);
Torus45.SetColor(0.6235, 0.6235, 0.6314);
Torus45.group = 6;
models.emplace_back(Torus45);

 // Cylinder46 of Group Park Bench
Model Cylinder46;
Cylinder46.CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder46.Translate(-0.375, -0.438, 1.093);
Cylinder46.Scale(0.091, 0.091, 0.627);
Cylinder46.Rotate(253.1, 0, 0);
Cylinder46.SetColor(0.6275, 0.6274, 0.6274);
Cylinder46.group = 6;
models.emplace_back(Cylinder46);

 // Cylinder47 of Group Park Bench
Model Cylinder47;
Cylinder47.CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder47.Translate(0.583, -0.417, 1.381);
Cylinder47.Scale(0.091, 0.091, 0.627);
Cylinder47.Rotate(178.1, 0, 0);
Cylinder47.SetColor(0.6275, 0.6274, 0.6274);
Cylinder47.group = 6;
models.emplace_back(Cylinder47);

 // Cube48 of Group Ground
Model Cube48;
Cube48.CreateCube(0.5);
Cube48.Translate(0.195, -0.672, 0.351);
Cube48.Scale(5, 0.01, 5);
Cube48.Rotate(0, 0, 0);
Cube48.SetColor(0, 0.4804, 0.1413);
Cube48.group = 7;
models.emplace_back(Cube48);

}
