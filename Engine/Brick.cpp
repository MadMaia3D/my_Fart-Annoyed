#include "Brick.h"

Brick::Brick(float x, float y, float width, float height)
	:
	rect(x, y, width, height)
{
}

Brick::Brick(Vec2 position, float width, float height)
	:
	rect(position, width, height)
{
}

bool Brick::TestCollision(const RectF& in_rect)
{
	const bool xIntersects = in_rect.right > rect.left && in_rect.left < rect.right;
	const bool yIntersects = in_rect.botton > rect.top && in_rect.top < rect.botton;

	if (xIntersects && yIntersects)
	{
		isDestroyed = true;
	}

	return isDestroyed;
}

void Brick::Draw(Graphics& gfx) const
{
	gfx.DrawRect((int)rect.left, (int)rect.top, (int)rect.right, (int)rect.botton, Colors::Red);
}
