#pragma once

#include "Vec2.h"

class RectF
{
public:
	RectF() = default;
	RectF(float in_left, float in_top, float in_right, float in_botton);
	RectF(Vec2 topLeftPos, Vec2 bottonRight);
	RectF(Vec2 topLeftPos, float width, float height);
	static RectF GetRectangle(Vec2 center, float halfWidth, float halfHeight);

private:
public:
	float left;
	float right;
	float top;
	float botton;
};