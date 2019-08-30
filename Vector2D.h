#pragma once

class Vector2D
{
public:
	Vector2D() = default;
	Vector2D(const float x, const float y);

	float x() const;
	void setX(const float x);

	float y() const;
	void setY(const float y);

private:
	float m_x = 0.0f;
	float m_y = 0.0f;
};