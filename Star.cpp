#include "Star.h"

Star::Star() : SpaceObject() {}

Star::Star(const std::string name, const float r, const float mass,
	const Vector2D coord, const Vector2D velocity, const float radiationFlux) :
	SpaceObject(name, r, mass, coord, velocity)
{
	m_radiationFlux = radiationFlux;
}

float Star::radiationFlux() const
{
	return m_radiationFlux;
}