#include "pch.h"
#include "Board.h"

void Board::SetLocations()
{
	int FrontIndex = 1;
	int BackIndex = -2;
	for (int i = 0; i < 25; ++i)
	{
		if (i != 0 && i % 5 == 0)
			FrontIndex += 3;

		if ((i > 5 && i < 10) || (i > 15 && i < 20))
			BackIndex -= 3;

		else if (i != 0 && i % 5 == 0)
			BackIndex = BackIndex;

		else
			BackIndex += 3;

		for (int j = 0; j < 4; ++j)
		{
			if (j >= 0 && j <= 1)
			{
				if (j % 2 == 0)
					Locations[i][j] = &cells[FrontIndex][BackIndex];
				else
					Locations[i][j] = &cells[FrontIndex][BackIndex + 1];
			}
			else
			{
				if (j % 2 == 0)
					Locations[i][j] = &cells[FrontIndex + 1][BackIndex];
				else
					Locations[i][j] = &cells[FrontIndex + 1][BackIndex + 1];
			}
		}
	}
	for(int i = 0; i < 25; ++i)
		for (int j = 0; j < 4; ++j)
			Locations[i][j]->LocationNumber = i;
}

Board::Board()
{
	cells = new Cell[16][16];

	for(int i = 0; i < 16; ++i)
		for(int j = 0; j < 16; ++j)
		{
			if (i % 3 == 0 || j % 3 == 0);
			else
			{
				cells[i][j].ChangeColor(WHITE);
				cells[i][j].ChangeOriginColor(WHITE);
			}
		}

	SetLocations();
}

Board::~Board()
{
	delete[] cells;
}

void Board::Print() const
{
	system("cls");
	for (int i = 0; i < 16; ++i)
	{
		for (int j = 0; j < 16; ++j)
			cells[i][j].Print();
		std::cout << std::endl;
	}
}

void Board::OnPlayer(int LocationNumber, int PlayerNumber)
{
	Locations[LocationNumber][PlayerNumber]->ChangeColor(RED);
}

void Board::CleanUpFootPrint(int LocationNumber, int PlayerNumber)
{
	Locations[LocationNumber][PlayerNumber]->SetOriginColor();
}
