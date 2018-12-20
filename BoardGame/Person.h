#pragma once
#include <cstdlib>
#include <iostream>
class Person
{
protected:
	int MoveValue;
	Cell *LocatedCell;
	int RestCounterInAOG;
	int Number;
	bool LocatedAOG;
	virtual void Ability() = 0;
	virtual void PrintCharacterInfo() = 0;
public:
	Person(int Number);
	void RollingDice();
	Cell* ReturnLocatedCell();
	Cell* ReturnLocatedCell() const;
	int ReturnNumber() const;
};

