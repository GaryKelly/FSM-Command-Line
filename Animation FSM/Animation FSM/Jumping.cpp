#include "jumping.h"

void Jumping::idle(Animation * a)
{
	std::cout << "Idling\n";
	a->setCurrent(new Idle());
	delete this;
}
