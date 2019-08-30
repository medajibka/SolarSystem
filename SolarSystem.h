#include <map>
#include "SpaceObject.h"
#include "Planet.h"
#include "Star.h"

class SolarSystem
{
public:
	SolarSystem() = default;

	void addPlanet(const int number, const Planet &planet);
	bool getPlanet(const int number, Planet& planet, std::string& errorMessage) const;

	void setStar(const Star& star) { m_star = star; }
	const Star& star() const { return m_star; }

private:
	std::map<int, Planet> m_planets;
	Star m_star;
};