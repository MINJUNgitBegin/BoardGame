#include "pch.h"
#include "Slave.h"


void Slave::Ability()
{
	std::cout << "";
}

void Slave::PrintCharacterInfo()
{
	std::cout << "";
}

Slave::Slave(int num)
	:Person(num)
{

}

void Slave::SetLocatedAOG()
{
	if (LocatedAOG == false)
	{
		RestCounterInAOG = 2;
	}
	LocatedAOG = !LocatedAOG;
}
