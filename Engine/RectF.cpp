#include "RectF.h"

RectF::RectF(float in_left, float in_right, float in_top, float in_botton)
{
	left = in_left;
	right = in_right;
	top = in_top;
	botton = in_botton;
}

RectF::RectF(Vec2 topLeftPos, Vec2 bottonRight)
	:
	RectF(topLeftPos.x, bottonRight.x, topLeftPos.y, bottonRight.y)
{}

RectF::RectF(Vec2 topLeftPos, float width, float height)
	:
	RectF(topLeftPos.x, topLeftPos.x + width, topLeftPos.y, topLeftPos.y + height)
{}
