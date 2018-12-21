#pragma once
#include "Cell.h"
#include "Person.h"

class Board
{
private:
	Cell (*cells)[5];
public:
	Board();
	void Print();
	void MovePlayer(Person* Player);
};

