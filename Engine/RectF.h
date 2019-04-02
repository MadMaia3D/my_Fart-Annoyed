#pragma once

#include "Vec2.h"


class RectF
{
public:
	RectF(float in_left, float in_right, float in_top, float in_botton);
	RectF(Vec2 topLeftPos, Vec2 bottonRight);
	RectF(Vec2 topLeftPos, float width, float height);
private:
	Vec2 position;
public:
	float left;
	float right;
	float top;
	float botton;
};