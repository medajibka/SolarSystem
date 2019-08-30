#pragma once

#include <functional>
#include <vector>

using EventLoopAction = std::function<void()>;

class EventLoop {
public:
	EventLoop(int frequency);

	void addAction(const EventLoopAction& action);
	void run();

private:
	std::vector<EventLoopAction> m_actions;
	int m_frequency;
};