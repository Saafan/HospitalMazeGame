 #include "Randomize.h"
 
 int Randomize(int min, int max)
 {
 	std::random_device rd;
 	std::mt19937 gen(rd());
 	std::uniform_int_distribution<> dis(min, max);
 	return dis(gen);
 }
 
 float Randomize(float min, float max)
 {
 	std::random_device rd;
 	std::mt19937 gen(rd());
 	std::uniform_real_distribution <> dis(min, max);
 	return dis(gen);
 }