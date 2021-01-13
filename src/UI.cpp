#include "UI.h"

UI::UI()
{
	value = nullptr;
}

UI::UI(std::vector<float> color, std::string text, int* value, std::vector<float> pos, std::string afterText)
{
	this->color = color;
	this->text = text;
	this->value = value;
	this->pos = pos;
	this->afterText = afterText;
}

UI::UI(std::vector<float> color, std::string* text, int* value, std::vector<float> pos, std::string afterText)
{
	this->color = color;
	this->textPtr = text;
	this->value = value;
	this->pos = pos;
	this->afterText = afterText;
}

void UI::SetAttributes(std::vector<float> color, std::string text, int value, std::vector<float> pos, std::string afterText)
{
	this->color = color;
	this->text = text;
	this->value = &value;
	this->pos = pos;
}

void UI::SetText(std::string*)
{
	this->text = text;
}

void UI::SetValue(int* value)
{
	this->value = value;
}

void UI::Translate(float x, float y, float z)
{
	this->pos.at(0) = x;
	this->pos.at(1) = y;
	this->pos.at(2) = z;
}

void UI::SetColor(float r, float g, float b)
{
	color.at(0) = r;
	color.at(1) = g;
	color.at(2) = b;
}

void UI::ChangeColor(std::vector<float> color)
{
	this->color = color;
}

void UI::Print(float x, float y, float z, char* string)
{
	int len, i;
	glRasterPos3f(x, y, z);
	len = (int)strlen(string);
	for (i = 0; i < len; i++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, string[i]);
}

void UI::Render()
{
	glColor3f(color.at(0), color.at(1), color.at(2));
	char* p0s[30];
	if(textPtr == nullptr)
		sprintf((char*)p0s, std::string(text + "%i" + afterText).c_str(), *value);
	else
		sprintf((char*)p0s, std::string(*textPtr).c_str());
	Print(pos.at(0), pos.at(1), pos.at(2), (char*)p0s);
	glColor3f(1.0f, 1.0f, 1.0f);
}

