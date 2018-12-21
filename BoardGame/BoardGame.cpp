#include "pch.h"
#include <iostream>
#include "Cell.h"
#include "Board.h"

int main()
{
	int TestArray[16][16] = { 0 };
	int *ArrayPoint[25][4];

	int FrontIndex = 1;
	int BackIndex = 1;
	int count = 0;
	for (int i = 0; i < 25; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			if (j >= 0 && j <= 1)
			{
				if (j % 2 == 0)
					ArrayPoint[i][j] = &TestArray[FrontIndex][BackIndex];
				else
					ArrayPoint[i][j] = &TestArray[FrontIndex][BackIndex + 1];
			}
			else
			{
				if (j % 2 == 0)
					ArrayPoint[i][j] = &TestArray[FrontIndex + 1][BackIndex];
				else
					ArrayPoint[i][j] = &TestArray[FrontIndex + 1][BackIndex + 1];
			}
		}
		if(i >= 5 && i < 10 || i >= 15 && i < 20)
			BackIndex -= 3;
		else
			BackIndex += 3;

		if ((i + 1) % 5 == 0)
			FrontIndex += 3;
	}

	for (int i = 0; i < 25; ++i)
		for (int j = 0; j < 4; ++j)
			*ArrayPoint[i][j] = 1;

	for (int i = 0; i < 16; ++i)
	{
		for (int j = 0; j < 16; ++j)
			std::cout << "[" << TestArray[i][j] << "]";
		std::cout << std::endl;
	}
	return 0;
}
