#pragma once
#include "Model.h"
void GenerateModels(std::vector<Model>& models)
{

 // Sphere0 of Group Character
Model Sphere0;
Sphere0.CreateSphere(0.5, 14, 15);
Sphere0.Translate(0.4, -0.572, 1.1);
Sphere0.Scale(0.754, 0.754, 0.754);
Sphere0.Rotate(0, 0, 0);
Sphere0.SetColor(1, 1, 1);
Sphere0.group = 0;
models.emplace_back(Sphere0);

 // Sphere1 of Group Character
Model Sphere1;
Sphere1.CreateSphere(0.5, 22, 10);
Sphere1.Translate(0.4, -0.005, 1.1);
Sphere1.Scale(0.541, 0.541, 0.541);
Sphere1.Rotate(0, 0, 0);
Sphere1.SetColor(1, 1, 1);
Sphere1.group = 0;
models.emplace_back(Sphere1);

 // Sphere2 of Group Character
Model Sphere2;
Sphere2.CreateSphere(0.5, 16, 15);
Sphere2.Translate(0.4, 0.384, 1.1);
Sphere2.Scale(0.302, 0.302, 0.302);
Sphere2.Rotate(0, 0, 0);
Sphere2.SetColor(1, 1, 1);
Sphere2.group = 0;
models.emplace_back(Sphere2);

 // Sphere3 of Group Character
Model Sphere3;
Sphere3.CreateSphere(0.5, 22, 10);
Sphere3.Translate(0.361, 0.447, 1.021);
Sphere3.Scale(0.09, 0.09, 0.09);
Sphere3.Rotate(0, 0, 0);
Sphere3.SetColor(1e-06, 0, 0);
Sphere3.group = 0;
models.emplace_back(Sphere3);

 // Cylinder4 of Group Character
Model Cylinder4;
Cylinder4.CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder4.Translate(0.231, 0.122, 1.1);
Cylinder4.Scale(0.052, 0.052, 1);
Cylinder4.Rotate(85.42, 312.7, 0);
Cylinder4.SetColor(1, 1, 1);
Cylinder4.group = 0;
models.emplace_back(Cylinder4);

 // Torus5 of Group Character
Model Torus5;
Torus5.CreateTours(0.1, 0.8, 12, 23);
Torus5.Translate(0.405, 0.384, 1.008);
Torus5.Scale(0.098, 0.098, 0.063);
Torus5.Rotate(227.4, 0, 360);
Torus5.SetColor(1e-06, 1e-06, 1e-06);
Torus5.group = 0;
models.emplace_back(Torus5);

 // Cylinder6 of Group Character
Model Cylinder6;
Cylinder6.CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder6.Translate(0.599, 0.071, 1.075);
Cylinder6.Scale(0.052, 0.052, 1);
Cylinder6.Rotate(85.42, 47.29, 0);
Cylinder6.SetColor(1, 1, 1);
Cylinder6.group = 0;
models.emplace_back(Cylinder6);

 // Cone7 of Group Character
Model Cone7;
Cone7.CreateCone(0.5, 0.5, 10, 10);
Cone7.Translate(0.403, 0.38, 1.066);
Cone7.Scale(0.187, 0.187, 0.302);
Cone7.Rotate(0, 180.6, 0);
Cone7.SetColor(0.9804, 0.6949, 0.009612);
Cone7.group = 0;
models.emplace_back(Cone7);

 // Sphere8 of Group Character
Model Sphere8;
Sphere8.CreateSphere(0.5, 17, 10);
Sphere8.Translate(0.452, 0.429, 1.034);
Sphere8.Scale(0.116, 0.116, 0.116);
Sphere8.Rotate(0, 0, 0);
Sphere8.SetColor(1e-06, 0, 0);
Sphere8.group = 0;
models.emplace_back(Sphere8);

 // Cone9 of Group Grass
Model Cone9;
Cone9.CreateCone(0.5, 0.5, 10, 10);
Cone9.Translate(-1.38, -0.778, 1.579);
Cone9.Scale(0.364, 0.275, 0.623);
Cone9.Rotate(89.2, 175.2, 0);
Cone9.SetColor(0.09948, 0.5637, 0);
Cone9.group = 1;
models.emplace_back(Cone9);

 // Cone10 of Group Grass
Model Cone10;
Cone10.CreateCone(0.5, 0.5, 10, 10);
Cone10.Translate(0.284, -0.778, -1.298);
Cone10.Scale(0.364, 0.275, 0.623);
Cone10.Rotate(89.2, 175.2, 0);
Cone10.SetColor(0.09948, 0.5637, 0);
Cone10.group = 1;
models.emplace_back(Cone10);

 // Cone11 of Group Grass
Model Cone11;
Cone11.CreateCone(0.5, 0.5, 10, 10);
Cone11.Translate(-0.849, -0.743, 0.912);
Cone11.Scale(0.364, 0.275, 0.623);
Cone11.Rotate(89.2, 175.2, 0);
Cone11.SetColor(0.09948, 0.5637, 0);
Cone11.group = 1;
models.emplace_back(Cone11);

 // Cone12 of Group Grass
Model Cone12;
Cone12.CreateCone(0.5, 0.5, 10, 10);
Cone12.Translate(0, -0.743, 0.912);
Cone12.Scale(0.364, 0.275, 0.623);
Cone12.Rotate(89.2, 175.2, 0);
Cone12.SetColor(0.09948, 0.5637, 0);
Cone12.group = 1;
models.emplace_back(Cone12);

 // Cone13 of Group Grass
Model Cone13;
Cone13.CreateCone(0.5, 0.5, 10, 10);
Cone13.Translate(1.416, -0.708, 1.579);
Cone13.Scale(0.364, 0.275, 0.623);
Cone13.Rotate(89.2, 175.2, 0);
Cone13.SetColor(0.09948, 0.5637, 0);
Cone13.group = 1;
models.emplace_back(Cone13);

 // Cone14 of Group Grass
Model Cone14;
Cone14.CreateCone(0.5, 0.5, 10, 10);
Cone14.Translate(-1.38, -0.778, -0.561);
Cone14.Scale(0.364, 0.275, 0.623);
Cone14.Rotate(89.2, 175.2, 0);
Cone14.SetColor(0.09948, 0.5637, 0);
Cone14.group = 1;
models.emplace_back(Cone14);

 // Cone15 of Group Grass
Model Cone15;
Cone15.CreateCone(0.5, 0.5, 10, 10);
Cone15.Translate(-0.088, -0.708, 0);
Cone15.Scale(0.364, 0.275, 0.623);
Cone15.Rotate(89.2, 175.2, 0);
Cone15.SetColor(0.09948, 0.5637, 0);
Cone15.group = 1;
models.emplace_back(Cone15);

 // Cone16 of Group Grass
Model Cone16;
Cone16.CreateCone(0.5, 0.5, 10, 10);
Cone16.Translate(-1.38, -0.778, -1.193);
Cone16.Scale(0.364, 0.275, 0.623);
Cone16.Rotate(89.2, 175.2, 0);
Cone16.SetColor(0.09948, 0.5637, 0);
Cone16.group = 1;
models.emplace_back(Cone16);

 // Cone17 of Group Grass
Model Cone17;
Cone17.CreateCone(0.5, 0.5, 10, 10);
Cone17.Translate(1.027, -0.778, -0.561);
Cone17.Scale(0.364, 0.275, 0.623);
Cone17.Rotate(89.2, 175.2, 0);
Cone17.SetColor(0.09948, 0.5637, 0);
Cone17.group = 1;
models.emplace_back(Cone17);

 // Teapot18 of Group Table
Model Teapot18;
Teapot18.CreateTeapot(0.5);
Teapot18.Translate(-1.548, 0.038, 0.075);
Teapot18.Scale(0.148, 0.148, 0.148);
Teapot18.Rotate(0, 0, 0);
Teapot18.SetColor(0.4265, 0.004181, 0.004181);
Teapot18.group = 2;
models.emplace_back(Teapot18);

 // Sphere19 of Group Table
Model Sphere19;
Sphere19.CreateSphere(0.5, 10, 10);
Sphere19.Translate(-1.531, -0.007, 0.08);
Sphere19.Scale(0.447, 0.01, 0.413);
Sphere19.Rotate(0, 0, 0);
Sphere19.SetColor(0.8588, 0.4863, 0.1059);
Sphere19.group = 2;
models.emplace_back(Sphere19);

 // Cylinder20 of Group Table
Model Cylinder20;
Cylinder20.CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder20.Translate(-1.525, -0.08, 0.075);
Cylinder20.Scale(0.079, 0.079, 1.455);
Cylinder20.Rotate(84.94, 343.8, 88.99);
Cylinder20.SetColor(0.3382, 0.3382, 0.3382);
Cylinder20.group = 2;
models.emplace_back(Cylinder20);

 // Cylinder21 of Group Table
Model Cylinder21;
Cylinder21.CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder21.Translate(-1.542, -0.007, 0.086);
Cylinder21.Scale(0.365, 0.365, 0.178);
Cylinder21.Rotate(88.99, 0, 0);
Cylinder21.SetColor(1, 1, 1);
Cylinder21.group = 2;
models.emplace_back(Cylinder21);

 // Cylinder22 of Group Table
Model Cylinder22;
Cylinder22.CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder22.Translate(-1.525, -0.097, 0.075);
Cylinder22.Scale(0.079, 0.079, 1.455);
Cylinder22.Rotate(101.1, 0, 117.3);
Cylinder22.SetColor(0.3382, 0.3382, 0.3382);
Cylinder22.group = 2;
models.emplace_back(Cylinder22);

 // Cylinder23 of Group Table
Model Cylinder23;
Cylinder23.CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder23.Translate(-1.525, -0.052, 0.075);
Cylinder23.Scale(0.079, 0.079, 1.455);
Cylinder23.Rotate(64.72, 0, 88.99);
Cylinder23.SetColor(0.3382, 0.3382, 0.3382);
Cylinder23.group = 2;
models.emplace_back(Cylinder23);

 // Cylinder24 of Group Table
Model Cylinder24;
Cylinder24.CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder24.Translate(-1.525, -0.058, 0.075);
Cylinder24.Scale(0.079, 0.079, 1.455);
Cylinder24.Rotate(84.94, 16.18, 88.99);
Cylinder24.SetColor(0.3333, 0.3333, 0.3333);
Cylinder24.group = 2;
models.emplace_back(Cylinder24);

 // Cube25 of Group Pergola
Model Cube25;
Cube25.CreateCube(0.5);
Cube25.Translate(0.474, 0.328, -0.449);
Cube25.Scale(0.095, 4.337, 0.094);
Cube25.Rotate(0, 0, 0);
Cube25.SetColor(1, 1, 1);
Cube25.group = 3;
models.emplace_back(Cube25);

 // Cube26 of Group Pergola
Model Cube26;
Cube26.CreateCube(0.5);
Cube26.Translate(1.49, 1.424, -0.247);
Cube26.Scale(4.408, 0.278, 0.416);
Cube26.Rotate(0, 0, 0);
Cube26.SetColor(0.652, 0.4027, 0);
Cube26.group = 3;
models.emplace_back(Cube26);

 // Cube27 of Group Pergola
Model Cube27;
Cube27.CreateCube(0.5);
Cube27.Translate(1.49, 1.458, -0.034);
Cube27.Scale(4.408, 0.278, 0.416);
Cube27.Rotate(0, 0, 0);
Cube27.SetColor(0.6392, 0.4235, 0);
Cube27.group = 3;
models.emplace_back(Cube27);

 // Cube28 of Group Pergola
Model Cube28;
Cube28.CreateCube(0.5);
Cube28.Translate(1.479, 1.446, -0.449);
Cube28.Scale(4.408, 0.278, 0.416);
Cube28.Rotate(0, 0, 0);
Cube28.SetColor(0.6431, 0.4235, 0);
Cube28.group = 3;
models.emplace_back(Cube28);

 // Cube29 of Group Pergola
Model Cube29;
Cube29.CreateCube(0.5);
Cube29.Translate(1.49, 1.379, 0.404);
Cube29.Scale(4.408, 0.278, 0.416);
Cube29.Rotate(0, 0, 0);
Cube29.SetColor(0.6471, 0.4235, 0);
Cube29.group = 3;
models.emplace_back(Cube29);

 // Cube30 of Group Pergola
Model Cube30;
Cube30.CreateCube(0.5);
Cube30.Translate(0.519, 0.243, 0.348);
Cube30.Scale(0.095, 4.337, 0.094);
Cube30.Rotate(0, 0, 0);
Cube30.SetColor(1, 1, 1);
Cube30.group = 3;
models.emplace_back(Cube30);

 // Cube31 of Group Pergola
Model Cube31;
Cube31.CreateCube(0.5);
Cube31.Translate(2.434, 0.243, 0.348);
Cube31.Scale(0.095, 4.337, 0.094);
Cube31.Rotate(0, 0, 0);
Cube31.SetColor(1, 1, 1);
Cube31.group = 3;
models.emplace_back(Cube31);

 // Cube32 of Group Pergola
Model Cube32;
Cube32.CreateCube(0.5);
Cube32.Translate(2.434, 0.339, -0.449);
Cube32.Scale(0.095, 4.337, 0.094);
Cube32.Rotate(0, 0, 0);
Cube32.SetColor(1, 1, 1);
Cube32.group = 3;
models.emplace_back(Cube32);

 // Cube33 of Group Pergola
Model Cube33;
Cube33.CreateCube(0.5);
Cube33.Translate(1.49, 1.367, 0.191);
Cube33.Scale(4.408, 0.278, 0.416);
Cube33.Rotate(0, 0, 0);
Cube33.SetColor(0.651, 0.4039, 0);
Cube33.group = 3;
models.emplace_back(Cube33);

 // Cube34 of Group Swing
Model Cube34;
Cube34.CreateCube(0.5);
Cube34.Translate(-0.206, -0.137, -1.056);
Cube34.Scale(1.034, 0.092, 0.073);
Cube34.Rotate(0, 0, 0);
Cube34.SetColor(0.8588, 0.4863, 0.2863);
Cube34.group = 4;
models.emplace_back(Cube34);

 // Cube35 of Group Swing
Model Cube35;
Cube35.CreateCube(0.5);
Cube35.Translate(-0.007, 0.27, -1.094);
Cube35.Scale(0.01, 1.829, 0.01);
Cube35.Rotate(0, 0, 0);
Cube35.SetColor(0.6765, 0.6765, 0.6765);
Cube35.group = 4;
models.emplace_back(Cube35);

 // Cube36 of Group Swing
Model Cube36;
Cube36.CreateCube(0.5);
Cube36.Translate(-0.288, 0.721, -1.073);
Cube36.Scale(2.656, 0.175, 0.392);
Cube36.Rotate(0, 0, 0);
Cube36.SetColor(0.402, 0.1714, 0.1714);
Cube36.group = 4;
models.emplace_back(Cube36);

 // Cylinder37 of Group Swing
Model Cylinder37;
Cylinder37.CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder37.Translate(0.321, 0.737, -1.132);
Cylinder37.Scale(0.035, 0.055, 3);
Cylinder37.Rotate(74.3, 0, 0);
Cylinder37.SetColor(0.4363, 0.4063, 0.4063);
Cylinder37.group = 4;
models.emplace_back(Cylinder37);

 // Cylinder38 of Group Swing
Model Cylinder38;
Cylinder38.CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder38.Translate(-0.926, 0.737, -1.12);
Cylinder38.Scale(0.035, 0.055, 3);
Cylinder38.Rotate(93.33, 0, 0);
Cylinder38.SetColor(0.4657, 0.4177, 0.4177);
Cylinder38.group = 4;
models.emplace_back(Cylinder38);

 // Cube39 of Group Swing
Model Cube39;
Cube39.CreateCube(0.5);
Cube39.Translate(-0.45, 0.266, -1.051);
Cube39.Scale(0.01, 1.613, 0.01);
Cube39.Rotate(0, 0, 0);
Cube39.SetColor(0.4853, 0.4853, 0.4853);
Cube39.group = 4;
models.emplace_back(Cube39);

 // Cylinder40 of Group Swing
Model Cylinder40;
Cylinder40.CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder40.Translate(-0.93, 0.737, -1.132);
Cylinder40.Scale(0.035, 0.055, 3);
Cylinder40.Rotate(74.3, 0, 0);
Cylinder40.SetColor(0.4755, 0.4242, 0.4242);
Cylinder40.group = 4;
models.emplace_back(Cylinder40);

 // Cube41 of Group Swing
Model Cube41;
Cube41.CreateCube(0.5);
Cube41.Translate(-0.202, -0.141, -1.103);
Cube41.Scale(1.034, 0.092, 0.073);
Cube41.Rotate(0, 0, 0);
Cube41.SetColor(0.8588, 0.4863, 0.2863);
Cube41.group = 4;
models.emplace_back(Cube41);

 // Cube42 of Group Swing
Model Cube42;
Cube42.CreateCube(0.5);
Cube42.Translate(-0.202, -0.145, -1.145);
Cube42.Scale(1.034, 0.092, 0.073);
Cube42.Rotate(0, 0, 0);
Cube42.SetColor(0.8588, 0.4863, 0.2863);
Cube42.group = 4;
models.emplace_back(Cube42);

 // Cylinder43 of Group Swing
Model Cylinder43;
Cylinder43.CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder43.Translate(0.321, 0.737, -1.12);
Cylinder43.Scale(0.035, 0.055, 3);
Cylinder43.Rotate(93.33, 0, 0);
Cylinder43.SetColor(0.4275, 0.4196, 0.4196);
Cylinder43.group = 4;
models.emplace_back(Cylinder43);

 // Cube44 of Group Swing
Model Cube44;
Cube44.CreateCube(0.5);
Cube44.Translate(-0.202, -0.166, -1.019);
Cube44.Scale(1.034, 0.092, 0.073);
Cube44.Rotate(0, 0, 0);
Cube44.SetColor(0.8588, 0.4863, 0.2863);
Cube44.group = 4;
models.emplace_back(Cube44);

 // Cube45 of Group Swing
Model Cube45;
Cube45.CreateCube(0.5);
Cube45.Translate(-0.202, -0.162, -0.972);
Cube45.Scale(1.034, 0.092, 0.073);
Cube45.Rotate(0, 0, 0);
Cube45.SetColor(0.8588, 0.4863, 0.2863);
Cube45.group = 4;
models.emplace_back(Cube45);

 // Sphere46 of Group Goal
Model Sphere46;
Sphere46.CreateSphere(0.5, 10, 10);
Sphere46.Translate(-0.767, 0.148, 0);
Sphere46.Scale(0.41, 0.41, 0.41);
Sphere46.Rotate(0, 0, 0);
Sphere46.SetColor(0.147, 0, 1);
Sphere46.group = 5;
models.emplace_back(Sphere46);

 // Cone47 of Group Goal
Model Cone47;
Cone47.CreateCone(0.5, 0.5, 10, 10);
Cone47.Translate(-0.681, 0.191, 0);
Cone47.Scale(0.648, 0.576, 2.295);
Cone47.Rotate(95.75, 0, 0);
Cone47.SetColor(1, 0.6786, 0);
Cone47.group = 5;
models.emplace_back(Cone47);

 // Sphere48 of Group Goal
Model Sphere48;
Sphere48.CreateSphere(0.5, 10, 10);
Sphere48.Translate(-0.66, 0.276, -0.17);
Sphere48.Scale(0.41, 0.41, 0.41);
Sphere48.Rotate(0, 0, 0);
Sphere48.SetColor(1, 0, 0.9118);
Sphere48.group = 5;
models.emplace_back(Sphere48);

 // Sphere49 of Group Goal
Model Sphere49;
Sphere49.CreateSphere(0.5, 10, 10);
Sphere49.Translate(-0.596, 0.148, 0);
Sphere49.Scale(0.41, 0.41, 0.41);
Sphere49.Rotate(0, 0, 0);
Sphere49.SetColor(1, 0, 0);
Sphere49.group = 5;
models.emplace_back(Sphere49);

 // Cube50 of Group Park Bench
Model Cube50;
Cube50.CreateCube(0.5);
Cube50.Translate(-0.289, -0.483, 1.872);
Cube50.Scale(1.725, 0.088, 0.139);
Cube50.Rotate(31.88, 0, 0);
Cube50.SetColor(0.6588, 0.4588, 0.2706);
Cube50.group = 6;
models.emplace_back(Cube50);

 // Cube51 of Group Park Bench
Model Cube51;
Cube51.CreateCube(0.5);
Cube51.Translate(-0.31, -0.42, 1.749);
Cube51.Scale(1.699, 0.088, 0.139);
Cube51.Rotate(0, 0, 0);
Cube51.SetColor(0.6569, 0.4637, 0.2705);
Cube51.group = 6;
models.emplace_back(Cube51);

 // Cylinder52 of Group Park Bench
Model Cylinder52;
Cylinder52.CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder52.Translate(0.211, -0.649, 1.976);
Cylinder52.Scale(0.091, 0.091, 0.602);
Cylinder52.Rotate(245.6, 0, 0);
Cylinder52.SetColor(0.6275, 0.6274, 0.6274);
Cylinder52.group = 6;
models.emplace_back(Cylinder52);

 // Cube53 of Group Park Bench
Model Cube53;
Cube53.CreateCube(0.5);
Cube53.Translate(-0.289, -0.524, 1.914);
Cube53.Scale(1.725, 0.088, 0.139);
Cube53.Rotate(52.5, 0, 0);
Cube53.SetColor(0.6588, 0.4588, 0.2706);
Cube53.group = 6;
models.emplace_back(Cube53);

 // Cylinder54 of Group Park Bench
Model Cylinder54;
Cylinder54.CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder54.Translate(0.211, -0.42, 1.584);
Cylinder54.Scale(0.091, 0.091, 0.627);
Cylinder54.Rotate(253.1, 0, 0);
Cylinder54.SetColor(0.6275, 0.6274, 0.6274);
Cylinder54.group = 6;
models.emplace_back(Cylinder54);

 // Torus55 of Group Park Bench
Model Torus55;
Torus55.CreateTours(0.266, 0.553, 10, 10);
Torus55.Translate(0.224, -0.525, 1.684);
Torus55.Scale(0.183, 0.183, 0.183);
Torus55.Rotate(0, 92.39, 0);
Torus55.SetColor(0.6235, 0.6235, 0.6314);
Torus55.group = 6;
models.emplace_back(Torus55);

 // Cube56 of Group Park Bench
Model Cube56;
Cube56.CreateCube(0.5);
Cube56.Translate(-0.289, -0.441, 1.811);
Cube56.Scale(1.647, 0.088, 0.139);
Cube56.Rotate(208.1, 0, 0);
Cube56.SetColor(0.6588, 0.4588, 0.2706);
Cube56.group = 6;
models.emplace_back(Cube56);

 // Cube57 of Group Park Bench
Model Cube57;
Cube57.CreateCube(0.5);
Cube57.Translate(-0.31, -0.42, 1.687);
Cube57.Scale(1.699, 0.088, 0.139);
Cube57.Rotate(0, 0, 0);
Cube57.SetColor(0.6588, 0.4588, 0.2706);
Cube57.group = 6;
models.emplace_back(Cube57);

 // Cube58 of Group Park Bench
Model Cube58;
Cube58.CreateCube(0.5);
Cube58.Translate(-0.289, -0.149, 1.543);
Cube58.Scale(1.933, 0.088, 0.139);
Cube58.Rotate(90, 0, 0);
Cube58.SetColor(0.6588, 0.4588, 0.2706);
Cube58.group = 6;
models.emplace_back(Cube58);

 // Cylinder59 of Group Park Bench
Model Cylinder59;
Cylinder59.CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder59.Translate(0.211, -0.399, 1.872);
Cylinder59.Scale(0.091, 0.091, 0.627);
Cylinder59.Rotate(178.1, 0, 0);
Cylinder59.SetColor(0.6275, 0.6274, 0.6274);
Cylinder59.group = 6;
models.emplace_back(Cylinder59);

 // Cube60 of Group Park Bench
Model Cube60;
Cube60.CreateCube(0.5);
Cube60.Translate(-0.289, -0.274, 1.563);
Cube60.Scale(1.985, 0.088, 0.139);
Cube60.Rotate(90, 0, 0);
Cube60.SetColor(0.6588, 0.4588, 0.2706);
Cube60.group = 6;
models.emplace_back(Cube60);

 // Cylinder61 of Group Park Bench
Model Cylinder61;
Cylinder61.CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder61.Translate(-0.747, -0.399, 1.872);
Cylinder61.Scale(0.091, 0.091, 0.627);
Cylinder61.Rotate(178.1, 0, 0);
Cylinder61.SetColor(0.6275, 0.6274, 0.6274);
Cylinder61.group = 6;
models.emplace_back(Cylinder61);

 // Cylinder62 of Group Park Bench
Model Cylinder62;
Cylinder62.CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder62.Translate(-0.747, -0.649, 1.976);
Cylinder62.Scale(0.091, 0.091, 0.602);
Cylinder62.Rotate(245.6, 0, 0);
Cylinder62.SetColor(0.6275, 0.6274, 0.6274);
Cylinder62.group = 6;
models.emplace_back(Cylinder62);

 // Cube63 of Group Park Bench
Model Cube63;
Cube63.CreateCube(0.5);
Cube63.Translate(-0.268, -0.232, 1.543);
Cube63.Scale(1.933, 0.088, 0.139);
Cube63.Rotate(90, 0, 0);
Cube63.SetColor(0.6588, 0.4588, 0.2706);
Cube63.group = 6;
models.emplace_back(Cube63);

 // Torus64 of Group Park Bench
Model Torus64;
Torus64.CreateTours(0.266, 0.553, 10, 10);
Torus64.Translate(-0.767, -0.525, 1.684);
Torus64.Scale(0.183, 0.183, 0.183);
Torus64.Rotate(0, 92.39, 0);
Torus64.SetColor(0.6235, 0.6235, 0.6314);
Torus64.group = 6;
models.emplace_back(Torus64);

 // Cube65 of Group Park Bench
Model Cube65;
Cube65.CreateCube(0.5);
Cube65.Translate(-0.289, -0.399, 1.625);
Cube65.Scale(1.699, 0.088, 0.139);
Cube65.Rotate(20.63, 0, 0);
Cube65.SetColor(0.6588, 0.4588, 0.2706);
Cube65.group = 6;
models.emplace_back(Cube65);

 // Cylinder66 of Group Park Bench
Model Cylinder66;
Cylinder66.CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder66.Translate(-0.747, -0.42, 1.584);
Cylinder66.Scale(0.091, 0.091, 0.627);
Cylinder66.Rotate(253.1, 0, 0);
Cylinder66.SetColor(0.6275, 0.6274, 0.6274);
Cylinder66.group = 6;
models.emplace_back(Cylinder66);

 // Cube67 of Group Park Bench
Model Cube67;
Cube67.CreateCube(0.5);
Cube67.Translate(-0.268, -0.358, 1.563);
Cube67.Scale(1.985, 0.088, 0.139);
Cube67.Rotate(71.25, 0, 0);
Cube67.SetColor(0.6588, 0.4588, 0.2706);
Cube67.group = 6;
models.emplace_back(Cube67);

 // Cube68 of Group Ground
Model Cube68;
Cube68.CreateCube(0.5);
Cube68.Translate(0.071, -0.672, 0.351);
Cube68.Scale(10, 0.01, 10);
Cube68.Rotate(0, 0, 0);
Cube68.SetColor(0, 0.4804, 0.1413);
Cube68.group = 7;
models.emplace_back(Cube68);

 // Cube69 of Group Fence
Model Cube69;
Cube69.CreateCube(0.5);
Cube69.Translate(0.085, -0.383, -2);
Cube69.Scale(10, 1.126, 0.435);
Cube69.Rotate(0, 0, 0);
Cube69.SetColor(0.4705, 0, 1);
Cube69.group = 8;
models.emplace_back(Cube69);

 // Torus70 of Group Fence
Model Torus70;
Torus70.CreateTours(0.217, 0.8, 10, 10);
Torus70.Translate(-2, 0.226, -1.07);
Torus70.Scale(0.41, 0.41, 0.41);
Torus70.Rotate(0, 89.65, 0);
Torus70.SetColor(0.05882, 1, 0);
Torus70.group = 8;
models.emplace_back(Torus70);

 // Torus71 of Group Fence
Model Torus71;
Torus71.CreateTours(0.217, 0.8, 10, 10);
Torus71.Translate(0, 0.213, -2);
Torus71.Scale(0.41, 0.41, 0.41);
Torus71.Rotate(0, 0, 0);
Torus71.SetColor(0.05952, 1, 0);
Torus71.group = 8;
models.emplace_back(Torus71);

 // Torus72 of Group Fence
Model Torus72;
Torus72.CreateTours(0.217, 0.8, 10, 10);
Torus72.Translate(1.319, 0.213, -2);
Torus72.Scale(0.41, 0.41, 0.41);
Torus72.Rotate(0, 0, 0);
Torus72.SetColor(0.05882, 1, 0);
Torus72.group = 8;
models.emplace_back(Torus72);

 // Sphere73 of Group Fence
Model Sphere73;
Sphere73.CreateSphere(0.5, 10, 10);
Sphere73.Translate(-2, 0.085, -2);
Sphere73.Scale(0.393, 0.393, 0.393);
Sphere73.Rotate(0, 0, 0);
Sphere73.SetColor(1, 0, 0);
Sphere73.group = 8;
models.emplace_back(Sphere73);

 // Sphere74 of Group Fence
Model Sphere74;
Sphere74.CreateSphere(0.5, 10, 10);
Sphere74.Translate(2, 0.085, -2);
Sphere74.Scale(0.393, 0.393, 0.393);
Sphere74.Rotate(0, 0, 0);
Sphere74.SetColor(1, 0, 0);
Sphere74.group = 8;
models.emplace_back(Sphere74);

 // Cube75 of Group Fence
Model Cube75;
Cube75.CreateCube(0.5);
Cube75.Translate(-2, -0.366, 0.171);
Cube75.Scale(10, 1.126, 0.435);
Cube75.Rotate(0, 89.65, 0);
Cube75.SetColor(0.4706, 0, 1);
Cube75.group = 8;
models.emplace_back(Cube75);

 // Torus76 of Group Fence
Model Torus76;
Torus76.CreateTours(0.217, 0.8, 10, 10);
Torus76.Translate(-1.128, 0.213, -2);
Torus76.Scale(0.41, 0.41, 0.41);
Torus76.Rotate(0, 0, 0);
Torus76.SetColor(0.05882, 1, 0);
Torus76.group = 8;
models.emplace_back(Torus76);

 // Torus77 of Group Fence
Model Torus77;
Torus77.CreateTours(0.217, 0.8, 10, 10);
Torus77.Translate(-2, 0.226, 0.341);
Torus77.Scale(0.41, 0.41, 0.41);
Torus77.Rotate(0, 89.65, 0);
Torus77.SetColor(0.05882, 1, 0);
Torus77.group = 8;
models.emplace_back(Torus77);

 // Torus78 of Group Fence
Model Torus78;
Torus78.CreateTours(0.217, 0.8, 10, 10);
Torus78.Translate(-2, 0.21, 1.628);
Torus78.Scale(0.41, 0.41, 0.41);
Torus78.Rotate(0, 89.65, 0);
Torus78.SetColor(0, 1, 0.05882);
Torus78.group = 8;
models.emplace_back(Torus78);

 // Sphere79 of Group Fence
Model Sphere79;
Sphere79.CreateSphere(0.5, 10, 10);
Sphere79.Translate(-2, 0.117, 2);
Sphere79.Scale(0.393, 0.393, 0.393);
Sphere79.Rotate(0, 0, 0);
Sphere79.SetColor(1, 0, 0);
Sphere79.group = 8;
models.emplace_back(Sphere79);

 // Sphere80 of Group Fence
Model Sphere80;
Sphere80.CreateSphere(0.5, 10, 10);
Sphere80.Translate(-2, 0.117, -0.419);
Sphere80.Scale(0.393, 0.393, 0.393);
Sphere80.Rotate(0, 0, 0);
Sphere80.SetColor(1, 0, 0);
Sphere80.group = 8;
models.emplace_back(Sphere80);

 // Cube81 of Group Fence
Model Cube81;
Cube81.CreateCube(0.5);
Cube81.Translate(2, -0.366, 0.171);
Cube81.Scale(10, 1.126, 0.435);
Cube81.Rotate(0, 89.65, 0);
Cube81.SetColor(0.5, 0, 1);
Cube81.group = 8;
models.emplace_back(Cube81);

 // Torus82 of Group Fence
Model Torus82;
Torus82.CreateTours(0.217, 0.8, 10, 10);
Torus82.Translate(2, 0.35, -0.822);
Torus82.Scale(0.41, 0.41, 0.41);
Torus82.Rotate(0, 89.65, 0);
Torus82.SetColor(0.05882, 1, 0);
Torus82.group = 8;
models.emplace_back(Torus82);

 // Torus83 of Group Fence
Model Torus83;
Torus83.CreateTours(0.217, 0.8, 10, 10);
Torus83.Translate(2, 0.35, 0.806);
Torus83.Scale(0.41, 0.41, 0.41);
Torus83.Rotate(0, 89.65, 0);
Torus83.SetColor(0.05882, 1, 0);
Torus83.group = 8;
models.emplace_back(Torus83);

 // Torus84 of Group Fence
Model Torus84;
Torus84.CreateTours(0.217, 0.8, 10, 10);
Torus84.Translate(2, 0.35, 2);
Torus84.Scale(0.41, 0.41, 0.41);
Torus84.Rotate(0, 89.65, 0);
Torus84.SetColor(0.05952, 1, 0);
Torus84.group = 8;
models.emplace_back(Torus84);

 // Sphere85 of Group Fence
Model Sphere85;
Sphere85.CreateSphere(0.5, 10, 10);
Sphere85.Translate(2, 0.117, -0.217);
Sphere85.Scale(0.393, 0.393, 0.393);
Sphere85.Rotate(0, 0, 0);
Sphere85.SetColor(1, 0, 0);
Sphere85.group = 8;
models.emplace_back(Sphere85);

 // Sphere86 of Group Fence
Model Sphere86;
Sphere86.CreateSphere(0.5, 10, 10);
Sphere86.Translate(2, 0.117, 1.426);
Sphere86.Scale(0.393, 0.393, 0.393);
Sphere86.Rotate(0, 0, 0);
Sphere86.SetColor(1, 0, 0);
Sphere86.group = 8;
models.emplace_back(Sphere86);

}
