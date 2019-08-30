#pragma once
#include "SpaceObject.h"

class Planet : public SpaceObject
{
public:
	Planet();
	Planet(const std::string name, const float r, const float mass,
		const Vector2D coord, const Vector2D velocity, const bool hasAtmosphere);

	bool hasAtmosphere() const;

	void calculateCoord(float t) override;

	void setA(float a);
	float getA();

	void setB(float b);
	float getB();

protected:
	bool m_hasAtmosphere = false;
	float m_a;
	float m_b;
};

