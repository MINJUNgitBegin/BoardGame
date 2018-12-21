#include "pch.h"
#include "Board.h"

Board::Board()
{
	cells = new Cell[16][16];

	for(int i = 0; i < 16; ++i)
	{
		for(int j = 0; j < 16; ++j)
		{
			if (i % 3 == 0 || j % 3 == 0);
			else
				cells[i][j].ChangeColor(WHITE);
		}
	}

	Locations[0][0] = &cells[1][1];
	Locations[0][1] = &cells[1][2];
	Locations[0][2] = &cells[2][1];
	Locations[0][3] = &cells[2][2];

	Locations[1][0] = &cells[1][4];
	Locations[1][1] = &cells[1][5];
	Locations[1][2] = &cells[2][4];
	Locations[1][3] = &cells[2][5];

	Locations[2][0] = &cells[1][7];
	Locations[2][1] = &cells[1][8];
	Locations[2][2] = &cells[2][7];
	Locations[2][3] = &cells[2][8];

	Locations[3][0] = &cells[1][10];
	Locations[3][1] = &cells[1][11];
	Locations[3][2] = &cells[2][10];
	Locations[3][3] = &cells[2][11];

	Locations[4][0] = &cells[1][13];
	Locations[4][1] = &cells[1][14];
	Locations[4][2] = &cells[2][13];
	Locations[4][3] = &cells[2][14];

	int FrontIndex = 1;
	int BackIndex = 1;
	for(int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			if(j >= 0 && j <= 1)
			{
				if(j % 2 == 0)
					Locations[i][j] = &cells[FrontIndex][BackIndex];
				else
					Locations[i][j] = &cells[FrontIndex][BackIndex+1];
			}
			else
			{
				if (j % 2 == 0)
					Locations[i][j] = &cells[FrontIndex+1][BackIndex];
				else
					Locations[i][j] = &cells[FrontIndex+1][BackIndex+1];
			}
		}
		BackIndex += 3;
	}
}

Board::~Board()
{
	delete[] cells;
}

void Board::Print()
{
	for (int i = 0; i < 16; ++i)
	{
		for (int j = 0; j < 16; ++j)
			cells[i][j].Print();
		std::cout << std::endl;
	}
}
