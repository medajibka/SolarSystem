#pragma once
#include "SpaceObject.h"

class Star : public SpaceObject
{
public:
	Star();
	Star(const std::string name, const float r, const float mass,
		const Vector2D coord, const Vector2D velocity, const float radiationFlux);

	float radiationFlux() const;

protected:
	float m_radiationFlux;
};

