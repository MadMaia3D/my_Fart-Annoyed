#pragma once
#include "Vec2.h"
#include "RectF.h"
#include "Graphics.h"
#include "SpriteCodex.h"

class Ball
{
public:
	Ball(float x, float y, float speedX, float speedY)
		:
		position(x,y),
		speed(speedX, speedY)
	{
	}
	void Update()
	{
		position += speed;
		rect = RectF::GetRectangle(position, radius, radius);
	}
	void Draw(Graphics& gfx)
	{
		SpriteCodex::DrawBall(position, gfx);
	}

	void WallCollide(const RectF& wall)
	{
		if (rect.left < wall.left || rect.right > wall.right)
		{
			ReboundX();
		}
		if (rect.top < wall.top || rect.botton > wall.botton)
		{
			ReboundY();
		}
	}
	void ReboundX()
	{
		position.x -= speed.x;
		speed.x = -speed.x;
	}
	void ReboundY()
	{
		position.y -= speed.y;
		speed.y = -speed.y;
	}

private:
	RectF rect;
	Vec2 position;
	Vec2 speed;
	float radius = 7.0f;
};