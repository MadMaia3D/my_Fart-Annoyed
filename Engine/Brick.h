#pragma once

#include "RectF.h"
#include "Vec2.h"
#include "Graphics.h"
#include "Colors.h"

class Brick
{
public:
	Brick(float x, float y, float width, float height);
	Brick(Vec2 position, float width, float height);
	bool TestCollision(const RectF& in_rect);
	void Draw(Graphics& gfx) const;
private:
	RectF rect;
	bool isDestroyed = false;
};