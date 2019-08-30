#include "SpaceObject.h"

SpaceObject::SpaceObject(const std::string name, const float r, const float mass, const Vector2D coord, const Vector2D velocity)
{
	m_name = name;
	m_r = r;
	m_mass = mass;
	m_coord = coord;
	m_velocity = velocity;
}

std::string SpaceObject::name() const
{
	return m_name;
}

float SpaceObject::r() const
{
	return m_r;
}

float SpaceObject::mass() const
{
	return m_mass;
}

Vector2D SpaceObject::coord() const
{
	return m_coord;
}

void SpaceObject::setCoord(const Vector2D coord)
{
	m_coord = coord;
}

Vector2D SpaceObject::velocity() const
{
	return m_velocity;
}

void SpaceObject::setVelocity(const Vector2D velocity)
{
	m_velocity = velocity;
}

void SpaceObject::calculateCoord(float t) { }