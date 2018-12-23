#include "pch.h"
#include <iostream>
#include "Cell.h"
#include "Board.h"
#include "FatMan.h"
#include <ctime>

int main()
{
	srand(time(NULL));
	Board board;
	Person *Player[4];
	for(int i = 0; i < 4; ++i)
	{
		Player[i] = new FatMan(i);
		board.PutPlayerFirstLocation(Player[i]);
	}
	board.Print();

	int count = 4;
	while(1)
	{
		int PlayerNum = count % 4;
		board.Print();
		Player[PlayerNum]->RollingDice();
		Sleep(1000);
		board.MovePlayer(Player[PlayerNum]);
		count++;
	}

	return 0;
}
