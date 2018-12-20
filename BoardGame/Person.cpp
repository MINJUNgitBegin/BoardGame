#include "pch.h"
#include "Person.h"
#include <cstdlib>

void Person::RollDice()
{
	this->DiceGradation = rand() % 6 + 1;
}