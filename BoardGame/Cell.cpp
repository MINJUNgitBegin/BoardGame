#include "pch.h"
#include "Cell.h"
#include <iostream>


Cell::Cell()
{
	cell[0] = '[';
	for(int i = 1; i < 4; ++i)
		cell[i] = ' ';
	cell[4] = ']';

	Horse[0] = '@';
	Horse[1] = '#';
	Horse[2] = '$';
}

void Cell::print()
{
	for(int i = 0; i < 5; ++i)
	{
		std::cout << cell[i];
	}
}

void Cell::clean()
{
	cell[0] = '[';
	for(int i = 1; i < 4; ++i)
		cell[i] = ' ';
	cell[4] = ']';	
}

void Cell::DrawingPlayer(int PlayerNumber)
{
	cell[PlayerNumber] = Horse[PlayerNumber -1 ];
}

const int Cell::ReturnAttribute()
{
	return Attribute;
}
