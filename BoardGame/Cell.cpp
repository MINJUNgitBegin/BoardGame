#include "pch.h"
#include "Cell.h"
#include <iostream>


Cell::Cell()
{
	this->cell[0] = '[';
	for(int i = 1; i < 4; ++i)
	{
		this->cell[i] = ' ';
	}
	this->cell[4] = ']';
}

void Cell::print()
{
	for(int i = 0; i <5; ++i)
		std::cout << this->cell[i];
}


