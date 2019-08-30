#pragma once
#include <string>
#include "Vector2D.h"

class SpaceObject
{
public:
	SpaceObject() = default;
	SpaceObject(const std::string name, const float r, const float mass, const Vector2D coord, const Vector2D velocity);

	std::string name() const;
	float r() const;
	float mass() const;

	Vector2D coord() const;
	void setCoord(const Vector2D coord);

	Vector2D velocity() const;
	void setVelocity(const Vector2D velocity);

	virtual void calculateCoord(float t); 

protected:
	std::string m_name;

	float m_r;
	float m_mass;
	
	Vector2D m_coord;
	Vector2D m_velocity;
};

