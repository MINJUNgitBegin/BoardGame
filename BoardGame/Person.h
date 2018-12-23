#pragma once
#include <cstdlib>
#include <iostream>
#include "Cell.h"

class Person
{
protected:
	int MoveValue;
	Cell *LocatedCell;
	int LocationNum;
	int RestCounterInAOG;
	int Number;
	bool LocatedAOG;
	virtual void Ability() = 0;
	virtual void PrintCharacterInfo() = 0;
public:
	Person(int number);
	void RollingDice();
	void SetLocatedCell(Cell *cell);
	Cell* GetLocatedCell();
	Cell* GetLocatedCell() const;
	int GetNumber() const;
	int GetMoveValue() const;
	int GetLocationNumber() const;
	void SetLocationNumber(int LocationNumber);
};