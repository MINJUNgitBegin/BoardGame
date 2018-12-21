#pragma once
#include "Cell.h"

class Board
{
private:
	int (*cell)[5];
public:
	void Print();
	void MovePlayer(Person* Player);
	
};

