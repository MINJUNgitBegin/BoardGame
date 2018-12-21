#include "pch.h"
#include "Board.h"
#include <iostream>
#include <cassert>

Cell* Board::FindCell(int CellNum)
{
	
}

Board::Board()
{
	this->cells = new Cell[5][5];
	int num = 0;

}

void Board::Print()
{
	
}

void Board::MovePlayer(Person* Player)
{
	int MoveVal = Player->ReturnMoveValue();
	Cell *LocatedCell = Player->ReturnLocatedCell();
	Cell *TargetCell = 
}



