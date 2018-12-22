#pragma once
#include "Cell.h"

class Board
{
private:
	Cell (*cells)[16];
	Cell *Locations[25][4];
	void SetLocations();
public:
	Board();
	~Board();
	void Print() const;
	void OnPlayer(int LocationNumber, int PlayerNumber);
	void CleanUpFootPrint(int LocationNumber, int PlayerNumber);
};

