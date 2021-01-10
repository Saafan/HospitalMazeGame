#pragma once
#include "Renderer.h"
#include <string>



class UI
{
public:
	UI(std::vector<float> color, std::string text, int* value, std::vector<float> pos, std::string afterText = "");
	UI();
	int* value;
	std::string text;
	std::string afterText;

	std::vector<float> color{ 0.0f, 0.0f, 0.0f };
	std::vector<float> pos{0.0f, 0.0f, 0.0f};

	void SetAttributes(std::vector<float> color, std::string text, int value, std::vector<float> pos, std::string afterText);
	void SetText(std::string);
	void SetValue(int* value);

	void Translate(float x, float y, float z);
	void ChangeColor(std::vector<float> color);

	void Print(float x, float y, float z, char* string);
	void Render();
};