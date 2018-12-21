#pragma once
#include "person.h"
class Smoker : public Person
{
private:
	int SmokingCounter;
	void Ability() override;
	void PrintCharacterInfo() override;
public:
	Smoker();
	void RollingDice() override;
};

