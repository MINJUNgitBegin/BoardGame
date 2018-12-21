#pragma once
#include "Cell.h"

class Board
{
private:
	Cell (*cells)[16];
	Cell *Locations[25][4];
public:
	Board();
	~Board();
	void Print();
};

