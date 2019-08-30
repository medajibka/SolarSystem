#include "SolarSystem.h"

void SolarSystem::addPlanet(const int number, const Planet& planet)
{
	m_planets.insert(std::make_pair(number, planet));
}

bool SolarSystem::getPlanet(const int number, Planet& planet, std::string& errorMessage) const
{
	const auto currentPlanet = m_planets.find(number);
	if (currentPlanet == m_planets.end()) {
		errorMessage = "The planet does not exist";
		return false;
	}
	planet = currentPlanet->second;
	return true;
}