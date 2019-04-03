#include "RectF.h"

RectF::RectF(float in_left, float in_top, float in_right, float in_botton)
{
	left = in_left;
	right = in_right;
	top = in_top;
	botton = in_botton;
}

RectF::RectF(Vec2 topLeftPos, Vec2 bottonRight)
	:
	RectF(topLeftPos.x, topLeftPos.y, bottonRight.x, bottonRight.y)
{}

RectF::RectF(Vec2 topLeftPos, float width, float height)
	:
	RectF(topLeftPos.x, topLeftPos.y, topLeftPos.x + width, topLeftPos.y + height)
{}

RectF RectF::GetRectangle(Vec2 center, float halfWidth, float halfHeight)
{
	RectF tempRect(center.x - halfWidth, center.y - halfHeight, center.x + halfWidth, center.y + halfHeight);
	return tempRect;
}
