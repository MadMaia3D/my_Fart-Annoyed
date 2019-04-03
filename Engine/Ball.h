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
		position(x, y),
		speed(speedX, speedY)
	{
	}
	void Update(float deltaTime)
	{
		position += speed * deltaTime;
		rect = RectF::GetRectangle(position, radius, radius);
	}
	void Draw(Graphics& gfx)
	{
		SpriteCodex::DrawBall(position, gfx);
	}

	void WallCollide(const RectF& wall)
	{
		if (rect.left < wall.left)
		{
			float offsetCorrection = rect.left - wall.left;
			ReboundX(offsetCorrection);
		}
		else if (rect.right > wall.right)
		{
			float offsetCorrection = rect.right - wall.right;
			ReboundX(offsetCorrection);
		}
		if (rect.top < wall.top)
		{
			float offsetCorrection = rect.top - wall.top;
			ReboundY(offsetCorrection);
		}
		else if (rect.botton > wall.botton)
		{
			float offsetCorrection = rect.botton - wall.botton;
			ReboundY(offsetCorrection);
		}
	}
	void ReboundX(float offset)
	{
		position.x -= offset * 2;
		speed.x = -speed.x;
	}
	void ReboundY(float offset)
	{
		position.y -= offset * 2;
		speed.y = -speed.y;
	}

private:
	RectF rect;
	Vec2 position;
	Vec2 speed;
	float radius = 7.0f;
};