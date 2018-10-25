#include "State.h"
#include "Animation.h"
#include <thread>
#include <chrono>
int main()
{
	bool run{ true };
	Animation fsm;
	int i = 0;
	while (run)
	{
		if (i == 0)
		{
			fsm.jumping();
			std::this_thread::sleep_for(std::chrono::milliseconds::duration(1000));
			fsm.idle();
			std::this_thread::sleep_for(std::chrono::milliseconds::duration(500));
			i = 1;
		}
		else
		{
			fsm.climbing();
			std::this_thread::sleep_for(std::chrono::milliseconds::duration(1000));
			fsm.idle();
			std::this_thread::sleep_for(std::chrono::milliseconds::duration(500));
			i = 0;
		}
	}
}