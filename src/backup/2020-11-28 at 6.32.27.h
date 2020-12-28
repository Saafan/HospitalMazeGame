#pragma once
#include "Model.h"
void GenerateModels(std::vector<Model>& models, std::vector<Object>& objs)
{

//Backup at: 2020-11-28 at: 6:32:27

Object Character0("Character");
Character0.SetCenter(0,0,0);
Character0.SetGroupTranslate(0,0,0);
Character0.SetGroupRotate(0,0,0);
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

 // Model0
Model Model0;
Model0.Assign3DModel(models/tree/Tree1.3ds);
Model0.Translate(-0.27, 0, 0);
models.emplace_back(Model0);

}
