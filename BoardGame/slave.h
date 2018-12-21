#pragma once
#include "person.h"

class Slave : public Person
{
private:
	void Ability() override;
	void PrintCharacterInfo() override;
};

