#include "EventLoop.h"

#include <Windows.h>

EventLoop::EventLoop(int frequency) 
	: m_frequency(frequency)
{

}

void EventLoop::run() {
	const int SKIP_TICKS = 1000 / m_frequency;

	unsigned long nextTick = GetTickCount();

	int sleepTime = 0;

	while (true) {
		for (EventLoopAction action : m_actions) {
			action();
		}

		nextTick += SKIP_TICKS;
		sleepTime = nextTick - GetTickCount();

		if (sleepTime >= 0) {
			Sleep(sleepTime);
		}
	}
}

void EventLoop::addAction(const EventLoopAction& action) {
	m_actions.push_back(action);
}