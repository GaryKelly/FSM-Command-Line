#include "Idle.h"

void Idle::jumping(Animation * a)
{
	std::cout << "Jumping\n";
	a->setCurrent(new Idle());
	delete this;
}

void Idle::climbing(Animation * a)
{
	std::cout << "Climbing\n";
	a->setCurrent(new Idle());
	delete this;
}
