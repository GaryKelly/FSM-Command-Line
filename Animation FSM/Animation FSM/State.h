#ifndef STATE_H
#define STATE_H


#include <iostream>

class Animation;
class State
{

public:
	virtual void idle(Animation *a) { std::cout << "State::Idling\n"; };
	virtual void jumping(Animation *a) { std::cout << "State::Jumping\n"; };
	virtual void climbing(Animation *a) { std::cout << "State::Climbing\n"; };
};
#include "Idle.h"
#endif // !STATE_H

