#include "Planet.h"

Planet::Planet() : SpaceObject() {}

Planet::Planet(const std::string name, const float r, const float mass,
	const Vector2D coord, const Vector2D velocity, const bool hasAtmosphere) :
	SpaceObject(name, r, mass, coord, velocity)
{
	m_hasAtmosphere = hasAtmosphere;
}

bool Planet::hasAtmosphere() const 
{
	return m_hasAtmosphere;
}

void Planet::setA(float a) 
{
	m_a = a;
}
float Planet::getA() 
{
	return m_a;
}

void Planet::setB(float b) 
{
	m_b = b;
}
float Planet::getB() 
{
	return m_b;
}

void Planet::calculateCoord(float t)
{
	m_coord.setX(m_a * cos(t));
	m_coord.setY(m_b * sin(t));
}