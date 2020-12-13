#pragma once
#include "Model.h"
void GenerateModels(std::vector<Model>& models)
{

 // Sphere0
Model Sphere0;
Sphere0.CreateSphere(0.5, 10, 10);
Sphere0.Translate(0, -0.372, 0);
Sphere0.Scale(0.754, 0.754, 0.754);
Sphere0.Rotate(0, 0, 0);
Sphere0.SetColor(1, 1, 1);
models.emplace_back(Sphere0);

 // Sphere1
Model Sphere1;
Sphere1.CreateSphere(0.5, 10, 10);
Sphere1.Translate(0, 0.195, 0);
Sphere1.Scale(0.541, 0.541, 0.541);
Sphere1.Rotate(0, 0, 0);
Sphere1.SetColor(1, 1, 1);
models.emplace_back(Sphere1);

 // Sphere2
Model Sphere2;
Sphere2.CreateSphere(0.5, 10, 10);
Sphere2.Translate(0, 0.584, 0);
Sphere2.Scale(0.302, 0.302, 0.302);
Sphere2.Rotate(0, 0, 0);
Sphere2.SetColor(1, 1, 1);
models.emplace_back(Sphere2);

 // Sphere3
Model Sphere3;
Sphere3.CreateSphere(0.5, 10, 10);
Sphere3.Translate(0.053, 0.619, 0.07);
Sphere3.Scale(0.116, 0.116, 0.116);
Sphere3.Rotate(0, 0, 0);
Sphere3.SetColor(1e-06, 0, 0);
models.emplace_back(Sphere3);

 // Sphere4
Model Sphere4;
Sphere4.CreateSphere(0.5, 10, 10);
Sphere4.Translate(-0.018, 0.619, 0.105);
Sphere4.Scale(0.09, 0.09, 0.09);
Sphere4.Rotate(0, 0, 0);
Sphere4.SetColor(1e-06, 0, 0);
models.emplace_back(Sphere4);

 // Cone5
Model Cone5;
Cone5.CreateCone(0.5, 0.5, 10, 10);
Cone5.Translate(0.018, 0.584, 0.035);
Cone5.Scale(0.187, 0.187, 0.302);
Cone5.Rotate(0, 0, 0);
Cone5.SetColor(0.9804, 0.6949, 0.009612);
models.emplace_back(Cone5);

 // Torus6
Model Torus6;
Torus6.CreateTours(0.1, 0.8, 10, 10);
Torus6.Translate(0, 0.584, 0);
Torus6.Scale(0.629, 0.364, 1);
Torus6.Rotate(0, 0, 0);
Torus6.SetColor(1e-06, 1e-06, 1e-06);
models.emplace_back(Torus6);

 // Cone7 of Group Grass
Model Cone7;
Cone7.CreateCone(0.5, 0.5, 10, 10);
Cone7.Translate(-0.088, -0.708, 0);
Cone7.Scale(0.364, 0.275, 0.623);
Cone7.Rotate(89.2, 175.2, 0);
Cone7.SetColor(0.09948, 0.5637, 0);
Cone7.group = 1;
models.emplace_back(Cone7);

 // Cone8 of Group Grass
Model Cone8;
Cone8.CreateCone(0.5, 0.5, 10, 10);
Cone8.Translate(-1.38, -0.778, -1.193);
Cone8.Scale(0.364, 0.275, 0.623);
Cone8.Rotate(89.2, 175.2, 0);
Cone8.SetColor(0.09948, 0.5637, 0);
Cone8.group = 1;
models.emplace_back(Cone8);

 // Cone9 of Group Grass
Model Cone9;
Cone9.CreateCone(0.5, 0.5, 10, 10);
Cone9.Translate(1.027, -0.778, -0.561);
Cone9.Scale(0.364, 0.275, 0.623);
Cone9.Rotate(89.2, 175.2, 0);
Cone9.SetColor(0.09948, 0.5637, 0);
Cone9.group = 1;
models.emplace_back(Cone9);

 // Cone10 of Group Grass
Model Cone10;
Cone10.CreateCone(0.5, 0.5, 10, 10);
Cone10.Translate(-1.38, -0.778, -0.561);
Cone10.Scale(0.364, 0.275, 0.623);
Cone10.Rotate(89.2, 175.2, 0);
Cone10.SetColor(0.09948, 0.5637, 0);
Cone10.group = 1;
models.emplace_back(Cone10);

 // Cone11 of Group Grass
Model Cone11;
Cone11.CreateCone(0.5, 0.5, 10, 10);
Cone11.Translate(-1.38, -0.778, 1.579);
Cone11.Scale(0.364, 0.275, 0.623);
Cone11.Rotate(89.2, 175.2, 0);
Cone11.SetColor(0.09948, 0.5637, 0);
Cone11.group = 1;
models.emplace_back(Cone11);

 // Cone12 of Group Grass
Model Cone12;
Cone12.CreateCone(0.5, 0.5, 10, 10);
Cone12.Translate(1.416, -0.708, 1.579);
Cone12.Scale(0.364, 0.275, 0.623);
Cone12.Rotate(89.2, 175.2, 0);
Cone12.SetColor(0.09948, 0.5637, 0);
Cone12.group = 1;
models.emplace_back(Cone12);

 // Cone13 of Group Grass
Model Cone13;
Cone13.CreateCone(0.5, 0.5, 10, 10);
Cone13.Translate(0, -0.743, 0.912);
Cone13.Scale(0.364, 0.275, 0.623);
Cone13.Rotate(89.2, 175.2, 0);
Cone13.SetColor(0.09948, 0.5637, 0);
Cone13.group = 1;
models.emplace_back(Cone13);

 // Cone14 of Group Grass
Model Cone14;
Cone14.CreateCone(0.5, 0.5, 10, 10);
Cone14.Translate(-0.849, -0.743, 0.912);
Cone14.Scale(0.364, 0.275, 0.623);
Cone14.Rotate(89.2, 175.2, 0);
Cone14.SetColor(0.09948, 0.5637, 0);
Cone14.group = 1;
models.emplace_back(Cone14);

 // Cone15 of Group Grass
Model Cone15;
Cone15.CreateCone(0.5, 0.5, 10, 10);
Cone15.Translate(0.284, -0.778, -1.298);
Cone15.Scale(0.364, 0.275, 0.623);
Cone15.Rotate(89.2, 175.2, 0);
Cone15.SetColor(0.09948, 0.5637, 0);
Cone15.group = 1;
models.emplace_back(Cone15);

 // Cylinder16 of Group Table
Model Cylinder16;
Cylinder16.CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder16.Translate(-1.542, -0.007, 0.086);
Cylinder16.Scale(0.365, 0.365, 0.178);
Cylinder16.Rotate(88.99, 0, 0);
Cylinder16.SetColor(1, 1, 1);
Cylinder16.group = 2;
models.emplace_back(Cylinder16);

 // Cylinder17 of Group Table
Model Cylinder17;
Cylinder17.CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder17.Translate(-1.525, -0.097, 0.075);
Cylinder17.Scale(0.079, 0.079, 1.455);
Cylinder17.Rotate(101.1, 0, 117.3);
Cylinder17.SetColor(0.3382, 0.3382, 0.3382);
Cylinder17.group = 2;
models.emplace_back(Cylinder17);

 // Cylinder18 of Group Table
Model Cylinder18;
Cylinder18.CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder18.Translate(-1.525, -0.052, 0.075);
Cylinder18.Scale(0.079, 0.079, 1.455);
Cylinder18.Rotate(64.72, 0, 88.99);
Cylinder18.SetColor(0.3382, 0.3382, 0.3382);
Cylinder18.group = 2;
models.emplace_back(Cylinder18);

 // Cylinder19 of Group Table
Model Cylinder19;
Cylinder19.CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder19.Translate(-1.525, -0.058, 0.075);
Cylinder19.Scale(0.079, 0.079, 1.455);
Cylinder19.Rotate(84.94, 16.18, 88.99);
Cylinder19.SetColor(0.3333, 0.3333, 0.3333);
Cylinder19.group = 2;
models.emplace_back(Cylinder19);

 // Teapot20 of Group Table
Model Teapot20;
Teapot20.CreateTeapot(0.5);
Teapot20.Translate(-1.548, 0.038, 0.075);
Teapot20.Scale(0.148, 0.148, 0.148);
Teapot20.Rotate(0, 0, 0);
Teapot20.SetColor(0.4265, 0.004181, 0.004181);
Teapot20.group = 2;
models.emplace_back(Teapot20);

 // Sphere21 of Group Table
Model Sphere21;
Sphere21.CreateSphere(0.5, 10, 10);
Sphere21.Translate(-1.531, -0.007, 0.08);
Sphere21.Scale(0.447, 0.01, 0.413);
Sphere21.Rotate(0, 0, 0);
Sphere21.SetColor(0.8588, 0.4863, 0.1059);
Sphere21.group = 2;
models.emplace_back(Sphere21);

 // Cylinder22 of Group Table
Model Cylinder22;
Cylinder22.CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder22.Translate(-1.525, -0.08, 0.075);
Cylinder22.Scale(0.079, 0.079, 1.455);
Cylinder22.Rotate(84.94, 343.8, 88.99);
Cylinder22.SetColor(0.3382, 0.3382, 0.3382);
Cylinder22.group = 2;
models.emplace_back(Cylinder22);

 // Cube23 of Group Pergola
Model Cube23;
Cube23.CreateCube(0.5);
Cube23.Translate(2.434, 0.339, -0.449);
Cube23.Scale(0.095, 4.337, 0.094);
Cube23.Rotate(0, 0, 0);
Cube23.SetColor(1, 1, 1);
Cube23.group = 3;
models.emplace_back(Cube23);

 // Cube24 of Group Pergola
Model Cube24;
Cube24.CreateCube(0.5);
Cube24.Translate(1.49, 1.367, 0.191);
Cube24.Scale(4.408, 0.278, 0.416);
Cube24.Rotate(0, 0, 0);
Cube24.SetColor(0.651, 0.4039, 0);
Cube24.group = 3;
models.emplace_back(Cube24);

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

 // Cylinder32 of Group Swing
Model Cylinder32;
Cylinder32.CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder32.Translate(0.321, 0.737, -1.12);
Cylinder32.Scale(0.035, 0.055, 3);
Cylinder32.Rotate(93.33, 0, 0);
Cylinder32.SetColor(0.4275, 0.4196, 0.4196);
Cylinder32.group = 4;
models.emplace_back(Cylinder32);

 // Cube33 of Group Swing
Model Cube33;
Cube33.CreateCube(0.5);
Cube33.Translate(-0.202, -0.166, -1.019);
Cube33.Scale(1.034, 0.092, 0.073);
Cube33.Rotate(0, 0, 0);
Cube33.SetColor(0.8588, 0.4863, 0.2863);
Cube33.group = 4;
models.emplace_back(Cube33);

 // Cube34 of Group Swing
Model Cube34;
Cube34.CreateCube(0.5);
Cube34.Translate(-0.202, -0.162, -0.972);
Cube34.Scale(1.034, 0.092, 0.073);
Cube34.Rotate(0, 0, 0);
Cube34.SetColor(0.8588, 0.4863, 0.2863);
Cube34.group = 4;
models.emplace_back(Cube34);

 // Cube35 of Group Swing
Model Cube35;
Cube35.CreateCube(0.5);
Cube35.Translate(-0.206, -0.137, -1.056);
Cube35.Scale(1.034, 0.092, 0.073);
Cube35.Rotate(0, 0, 0);
Cube35.SetColor(0.8588, 0.4863, 0.2863);
Cube35.group = 4;
models.emplace_back(Cube35);

 // Cube36 of Group Swing
Model Cube36;
Cube36.CreateCube(0.5);
Cube36.Translate(-0.007, 0.27, -1.094);
Cube36.Scale(0.01, 1.829, 0.01);
Cube36.Rotate(0, 0, 0);
Cube36.SetColor(0.6765, 0.6765, 0.6765);
Cube36.group = 4;
models.emplace_back(Cube36);

 // Cube37 of Group Swing
Model Cube37;
Cube37.CreateCube(0.5);
Cube37.Translate(-0.288, 0.721, -1.073);
Cube37.Scale(2.656, 0.175, 0.392);
Cube37.Rotate(0, 0, 0);
Cube37.SetColor(0.402, 0.1714, 0.1714);
Cube37.group = 4;
models.emplace_back(Cube37);

 // Cylinder38 of Group Swing
Model Cylinder38;
Cylinder38.CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder38.Translate(0.321, 0.737, -1.132);
Cylinder38.Scale(0.035, 0.055, 3);
Cylinder38.Rotate(74.3, 0, 0);
Cylinder38.SetColor(0.4363, 0.4063, 0.4063);
Cylinder38.group = 4;
models.emplace_back(Cylinder38);

 // Cylinder39 of Group Swing
Model Cylinder39;
Cylinder39.CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder39.Translate(-0.926, 0.737, -1.12);
Cylinder39.Scale(0.035, 0.055, 3);
Cylinder39.Rotate(93.33, 0, 0);
Cylinder39.SetColor(0.4657, 0.4177, 0.4177);
Cylinder39.group = 4;
models.emplace_back(Cylinder39);

 // Cube40 of Group Swing
Model Cube40;
Cube40.CreateCube(0.5);
Cube40.Translate(-0.45, 0.266, -1.051);
Cube40.Scale(0.01, 1.613, 0.01);
Cube40.Rotate(0, 0, 0);
Cube40.SetColor(0.4853, 0.4853, 0.4853);
Cube40.group = 4;
models.emplace_back(Cube40);

 // Cylinder41 of Group Swing
Model Cylinder41;
Cylinder41.CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder41.Translate(-0.93, 0.737, -1.132);
Cylinder41.Scale(0.035, 0.055, 3);
Cylinder41.Rotate(74.3, 0, 0);
Cylinder41.SetColor(0.4755, 0.4242, 0.4242);
Cylinder41.group = 4;
models.emplace_back(Cylinder41);

 // Cube42 of Group Swing
Model Cube42;
Cube42.CreateCube(0.5);
Cube42.Translate(-0.202, -0.141, -1.103);
Cube42.Scale(1.034, 0.092, 0.073);
Cube42.Rotate(0, 0, 0);
Cube42.SetColor(0.8588, 0.4863, 0.2863);
Cube42.group = 4;
models.emplace_back(Cube42);

 // Cube43 of Group Swing
Model Cube43;
Cube43.CreateCube(0.5);
Cube43.Translate(-0.202, -0.145, -1.145);
Cube43.Scale(1.034, 0.092, 0.073);
Cube43.Rotate(0, 0, 0);
Cube43.SetColor(0.8588, 0.4863, 0.2863);
Cube43.group = 4;
models.emplace_back(Cube43);

 // Cube44 of Group Park Bench
Model Cube44;
Cube44.CreateCube(0.5);
Cube44.Translate(-0.289, -0.399, 1.625);
Cube44.Scale(1.699, 0.088, 0.139);
Cube44.Rotate(20.63, 0, 0);
Cube44.SetColor(0.6588, 0.4588, 0.2706);
Cube44.group = 6;
models.emplace_back(Cube44);

 // Cube45 of Group Park Bench
Model Cube45;
Cube45.CreateCube(0.5);
Cube45.Translate(-0.31, -0.42, 1.749);
Cube45.Scale(1.699, 0.088, 0.139);
Cube45.Rotate(0, 0, 0);
Cube45.SetColor(0.6569, 0.4637, 0.2705);
Cube45.group = 6;
models.emplace_back(Cube45);

 // Cube46 of Group Park Bench
Model Cube46;
Cube46.CreateCube(0.5);
Cube46.Translate(-0.289, -0.441, 1.811);
Cube46.Scale(1.647, 0.088, 0.139);
Cube46.Rotate(208.1, 0, 0);
Cube46.SetColor(0.6588, 0.4588, 0.2706);
Cube46.group = 6;
models.emplace_back(Cube46);

 // Cube47 of Group Park Bench
Model Cube47;
Cube47.CreateCube(0.5);
Cube47.Translate(-0.289, -0.483, 1.872);
Cube47.Scale(1.725, 0.088, 0.139);
Cube47.Rotate(31.88, 0, 0);
Cube47.SetColor(0.6588, 0.4588, 0.2706);
Cube47.group = 6;
models.emplace_back(Cube47);

 // Cube48 of Group Park Bench
Model Cube48;
Cube48.CreateCube(0.5);
Cube48.Translate(-0.289, -0.524, 1.914);
Cube48.Scale(1.725, 0.088, 0.139);
Cube48.Rotate(52.5, 0, 0);
Cube48.SetColor(0.6588, 0.4588, 0.2706);
Cube48.group = 6;
models.emplace_back(Cube48);

 // Cylinder49 of Group Park Bench
Model Cylinder49;
Cylinder49.CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder49.Translate(0.211, -0.42, 1.584);
Cylinder49.Scale(0.091, 0.091, 0.627);
Cylinder49.Rotate(253.1, 0, 0);
Cylinder49.SetColor(0.6275, 0.6274, 0.6274);
Cylinder49.group = 6;
models.emplace_back(Cylinder49);

 // Torus50 of Group Park Bench
Model Torus50;
Torus50.CreateTours(0.266, 0.553, 10, 10);
Torus50.Translate(0.224, -0.525, 1.684);
Torus50.Scale(0.183, 0.183, 0.183);
Torus50.Rotate(0, 92.39, 0);
Torus50.SetColor(0.6235, 0.6235, 0.6314);
Torus50.group = 6;
models.emplace_back(Torus50);

 // Cube51 of Group Park Bench
Model Cube51;
Cube51.CreateCube(0.5);
Cube51.Translate(-0.268, -0.232, 1.543);
Cube51.Scale(1.933, 0.088, 0.139);
Cube51.Rotate(90, 0, 0);
Cube51.SetColor(0.6588, 0.4588, 0.2706);
Cube51.group = 6;
models.emplace_back(Cube51);

 // Cube52 of Group Park Bench
Model Cube52;
Cube52.CreateCube(0.5);
Cube52.Translate(-0.31, -0.42, 1.687);
Cube52.Scale(1.699, 0.088, 0.139);
Cube52.Rotate(0, 0, 0);
Cube52.SetColor(0.6588, 0.4588, 0.2706);
Cube52.group = 6;
models.emplace_back(Cube52);

 // Cube53 of Group Park Bench
Model Cube53;
Cube53.CreateCube(0.5);
Cube53.Translate(-0.289, -0.149, 1.543);
Cube53.Scale(1.933, 0.088, 0.139);
Cube53.Rotate(90, 0, 0);
Cube53.SetColor(0.6588, 0.4588, 0.2706);
Cube53.group = 6;
models.emplace_back(Cube53);

 // Cylinder54 of Group Park Bench
Model Cylinder54;
Cylinder54.CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder54.Translate(0.211, -0.649, 1.976);
Cylinder54.Scale(0.091, 0.091, 0.602);
Cylinder54.Rotate(245.6, 0, 0);
Cylinder54.SetColor(0.6275, 0.6274, 0.6274);
Cylinder54.group = 6;
models.emplace_back(Cylinder54);

 // Cube55 of Group Park Bench
Model Cube55;
Cube55.CreateCube(0.5);
Cube55.Translate(-0.268, -0.358, 1.563);
Cube55.Scale(1.985, 0.088, 0.139);
Cube55.Rotate(71.25, 0, 0);
Cube55.SetColor(0.6588, 0.4588, 0.2706);
Cube55.group = 6;
models.emplace_back(Cube55);

 // Cylinder56 of Group Park Bench
Model Cylinder56;
Cylinder56.CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder56.Translate(-0.747, -0.42, 1.584);
Cylinder56.Scale(0.091, 0.091, 0.627);
Cylinder56.Rotate(253.1, 0, 0);
Cylinder56.SetColor(0.6275, 0.6274, 0.6274);
Cylinder56.group = 6;
models.emplace_back(Cylinder56);

 // Cylinder57 of Group Park Bench
Model Cylinder57;
Cylinder57.CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder57.Translate(0.211, -0.399, 1.872);
Cylinder57.Scale(0.091, 0.091, 0.627);
Cylinder57.Rotate(178.1, 0, 0);
Cylinder57.SetColor(0.6275, 0.6274, 0.6274);
Cylinder57.group = 6;
models.emplace_back(Cylinder57);

 // Cube58 of Group Park Bench
Model Cube58;
Cube58.CreateCube(0.5);
Cube58.Translate(-0.289, -0.274, 1.563);
Cube58.Scale(1.985, 0.088, 0.139);
Cube58.Rotate(90, 0, 0);
Cube58.SetColor(0.6588, 0.4588, 0.2706);
Cube58.group = 6;
models.emplace_back(Cube58);

 // Cylinder59 of Group Park Bench
Model Cylinder59;
Cylinder59.CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder59.Translate(-0.747, -0.399, 1.872);
Cylinder59.Scale(0.091, 0.091, 0.627);
Cylinder59.Rotate(178.1, 0, 0);
Cylinder59.SetColor(0.6275, 0.6274, 0.6274);
Cylinder59.group = 6;
models.emplace_back(Cylinder59);

 // Cylinder60 of Group Park Bench
Model Cylinder60;
Cylinder60.CreateCylinder(0.5, 0.5, 0.5, 10, 10);
Cylinder60.Translate(-0.747, -0.649, 1.976);
Cylinder60.Scale(0.091, 0.091, 0.602);
Cylinder60.Rotate(245.6, 0, 0);
Cylinder60.SetColor(0.6275, 0.6274, 0.6274);
Cylinder60.group = 6;
models.emplace_back(Cylinder60);

 // Torus61 of Group Park Bench
Model Torus61;
Torus61.CreateTours(0.266, 0.553, 10, 10);
Torus61.Translate(-0.767, -0.525, 1.684);
Torus61.Scale(0.183, 0.183, 0.183);
Torus61.Rotate(0, 92.39, 0);
Torus61.SetColor(0.6235, 0.6235, 0.6314);
Torus61.group = 6;
models.emplace_back(Torus61);

 // Cube62 of Group Ground
Model Cube62;
Cube62.CreateCube(0.5);
Cube62.Translate(0.071, -0.672, 0.351);
Cube62.Scale(10, 0.01, 10);
Cube62.Rotate(0, 0, 0);
Cube62.SetColor(0, 0.4804, 0.1413);
Cube62.group = 7;
models.emplace_back(Cube62);

}
