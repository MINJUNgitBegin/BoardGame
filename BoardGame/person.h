#pragma once
#include <cstdlib>
#include <iostream>
#include "Cell.h"

class Person
{
protected:
	int MoveValue;
	Cell *LocatedCell;
	int RestCounterInAOG;
	int Number;
	bool LocatedAOG;
	int PlayerTurn;
	virtual void Ability() = 0;
	virtual void PrintCharacterInfo() = 0;
public:
	Person(int Number);
	virtual void RollingDice();
	Cell* ReturnLocatedCell();
	Cell* ReturnLocatedCell() const;
	int ReturnNumber() const;
};
