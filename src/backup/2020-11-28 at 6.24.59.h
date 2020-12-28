#pragma once
#include "Model.h"
void GenerateModels(std::vector<Model>& models, std::vector<Object>& objs)
{

//Backup at: 2020-11-28 at: 6:24:59

Object Character0("Character");
Character0.centralize = false;
Character0.SetGroupTranslate(0,0,0);
objs.emplace_back(Character0);

Object Coins1("Coins");
Coins1.SetCenter(0,0,0);
Coins1.SetGroupTranslate(0,0,0);
Coins1.SetGroupRotate(0,0,0);
objs.emplace_back(Coins1);

Object Group8002("Group800");
Group8002.SetCenter(0,0,0);
Group8002.SetGroupTranslate(0,0,0);
Group8002.SetGroupRotate(0,0,0);
objs.emplace_back(Group8002);

Object Group2343("Group234");
Group2343.SetCenter(0,0,0);
Group2343.SetGroupTranslate(0,0,0);
Group2343.SetGroupRotate(0,0,0);
objs.emplace_back(Group2343);

Object Character1864("Character186");
Character1864.SetCenter(0,0,0);
objs.emplace_back(Character1864);

 // Model0 of Group Character
Model Model0;
Model0.Translate(0.05, 1.47, -1.37);
Model0.Scale(0.21, 0.21, 0.21);
Model0.Rotate(33, -21.1, -18.5);
Model0.group = 0;
models.emplace_back(Model0);

 // Model1 of Group Character186
Model Model1;
Model1.Translate(-0.77, 2.07, 3.93);
Model1.Scale(0.37, 0.64, 0.21);
Model1.Rotate(7.5, 9.7, 0);
Model1.group = 4;
models.emplace_back(Model1);

}
