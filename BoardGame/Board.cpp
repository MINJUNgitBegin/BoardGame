#include "pch.h"
#include "Board.h"
#include "Person.h"

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
		{
			Locations[i][j]->LocationNumber = i;
			Locations[i][j]->SetAttribute(0);
		}
}

void Board::PutPlayer(const Person *Player, int Lnum)
{
	int Pnum = Player->GetNumber();
	Locations[Lnum][Pnum]->ChangeColor(PlayerColors[Pnum]);
}

void Board::CleanUpFootPrint(const Person *Player, int Lnum)
{
	int Pnum = Player->GetNumber();
	Locations[Lnum][Pnum]->SetOriginColor();
}

void Board::SetEventLocations(int LocationNumber, int attribute)
{
	Color color;

	switch(attribute)
	{
	case 1:
		color = BLACK;
		break;
	case 2:
		color = WHITE;
		break;
	case 3:
		color = WHITE;
		break;
	default:
		break;
	}

	for (int i = 0; i < 4; ++i)
	{
		Locations[LocationNumber][i]->ChangeColor(color);
		Locations[LocationNumber][i]->ChangeOriginColor(color);
		Locations[LocationNumber][i]->SetAttribute(attribute);
	}
}

void Board::SetLadderGoal(int start, int goal)
{
	for(int i = 0; i < 4; ++i)
		Locations[start][i]->SetLadderGoal(Locations[goal][i]);
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
	SetEventLocations(3, 1);
	SetEventLocations(4, 2);
	SetLadderGoal(4, 14);
	SetEventLocations(10, 1);
	SetEventLocations(12, 2);
	SetLadderGoal(12, 8);
	SetEventLocations(16, 2);
	SetLadderGoal(16, 21);
	SetEventLocations(17, 1);
	SetEventLocations(22, 2);
	SetLadderGoal(22, 12);
	SetEventLocations(23, 1);
	SetEventLocations(24, 3);

	PlayerColors[0] = RED;
	PlayerColors[1] = BLUE;
	PlayerColors[2] = YELLOW;
	PlayerColors[3] = GREEN;
}

Board::~Board()
{
	delete [] cells;
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

void Board::PutPlayerFirstLocation(Person* Player)
{
	const int Pnum = Player->GetNumber();
	Player->SetLocatedCell(Locations[0][Pnum]);
	PutPlayer(Player, 0);
}

void Board::MovePlayer(Person* Player)
{
	int MoveVal = Player->GetMoveValue();
	int Lnum = Player->GetLocationNumber();
	int Pnum = Player->GetNumber();
	int NextLocation;
	if (Lnum + MoveVal >= 24)
		NextLocation = 24;
	else
		NextLocation = Lnum + MoveVal;

	CleanUpFootPrint(Player, Lnum);
	Player->SetLocatedCell(Locations[NextLocation][Pnum]);
	Player->SetLocationNumber(NextLocation);

	for(int i = 0; i < MoveVal; ++i)
	{
		if (Lnum + i >= 24)
			break;
		PutPlayer(Player, Lnum + (i + 1));
		Print();
		if(i == 0 && Lnum == 0)
			CleanUpFootPrint(Player, 0);
		CleanUpFootPrint(Player, Lnum + (i + 1));
		Sleep(500);
	}

	PutPlayer(Player, NextLocation);
}

void Board::LadderAction(Person* Player)
{
	Cell *PlayerLocation = Player->GetLocatedCell();
	Cell *LadderGoal = PlayerLocation->GetLadderGoal();
	int Lnum = Player->GetLocationNumber();
	int Pnum = Player->GetNumber();
	int Gnum = LadderGoal->GetLocationNumber();

	std::cout << Pnum + 1 << "플레이어가 사다리를 사용합니다." << std::endl;
	getchar();
	std::cout << "Press Enter" << std::endl;
	CleanUpFootPrint(Player, Lnum);
	PutPlayer(Player, Gnum);
	Player->SetLocatedCell(LadderGoal);
	Player->SetLocationNumber(Gnum);
	Print();
}
