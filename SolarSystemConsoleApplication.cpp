#include <iostream>
#include <Windows.h>
#include "Vector2D.h"
#include "SpaceObject.h"
#include "SolarSystem.h"
#include "EventLoop.h"

class Simulator {
public:
	Simulator()
	{
		m_solarSystem = new SolarSystem();

		Planet* Earth = new Planet("Earth", 6371, 5.972E24, Vector2D(), Vector2D(), true);
		m_solarSystem->addPlanet(3, *Earth);

		Star sun;
		sun.setCoord(Vector2D(.5f, .5f));
		m_solarSystem->setStar(sun);

		m_t = 0;
	}

	void updateState() {
		Planet current;
		std::string error;

		m_solarSystem->getPlanet(3, current, error);
		current.calculateCoord(m_t);

		std::cout << "Sun" << '\n' <<
			"X: " << m_solarSystem->star().coord().x() << '\n' <<
			"Y: " << m_solarSystem->star().coord().y() << '\n' <<
			"Earth" << '\n' <<
			"X: " << current.coord().x() << '\n' <<
			"Y: " << current.coord().y() << '\n';

		m_t += 10e-3;
	}

private:
	SolarSystem* m_solarSystem;
	float m_t;
};

int main()
{
	Simulator sim;

	EventLoop loop(30);
	loop.addAction(
		std::bind(&Simulator::updateState, &sim));
	loop.run();
}