#pragma once
#include "Cell.h"
#include "Person.h"

class Board
{
private:
	Cell (*cells)[16];
	Cell *Locations[25][4];
	Color PlayerColors[4];
	void SetLocations();
	void PutPlayer(const Person *Player, int Lnum);
	void CleanUpFootPrint(const Person *Player, int Lnum);
	void SetEventLocations(int LocationNumber, int attribute);
public:
	Board();
	~Board();
	void Print() const;
	void PutPlayerFirstLocation(Person *Player);
	void MovePlayer(Person *Player);
};

