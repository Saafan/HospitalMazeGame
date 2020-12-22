#pragma once

#include "Renderer.h"

class Gizmo
{
	void RenderGizmo();
	void UpdateMousePos();
	ImGuiIO& io = ImGui::GetIO();
	int x, y = 0;

};
