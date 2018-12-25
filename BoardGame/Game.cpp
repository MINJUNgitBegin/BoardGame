#include "pch.h"
#include "Game.h"
#include "FatMan.h"
#include "Slave.h"
#include "Smoker.h"

void Game::GameInfo()
{
	std::cout << "이 게임은 플레이어가 탈북해 목적지 까지 가는 게임입니다." << std::endl;
	std::cout << "\n[Press Enter]" << std::endl;
	getchar();
	system("cls");
	std::cout << "최대 4명까지 플레이 할 수 있으며 각각 빨강 파랑 노랑 초록색 말을 가지고 있습니다." << std::endl;
	std::cout << "\n[Press Enter]" << std::endl;
	getchar();
	system("cls");
	std::cout << "보드 중간중간에 그려진 검정색 땅은 아오지 입니다." << std::endl;
	std::cout << "플레이어가 주사위를 굴려 이곳에 도착하게 되면 아오지에 끌려가 다음 한턴을 쉬게 됩니다." << std::endl;
	std::cout << "\n[Press Enter]" << std::endl;
	getchar();
	system("cls");
	std::cout << "보드 곳곳에는 보이지 않는 사다리가 숨겨져 있습니다. 이 사다리를 이용하면 더 앞으로 갈 수도있으며 뒤로 갈 수도 있습니다." << std::endl;
	std::cout << "게임을 시작하려면 Enter키를 눌러 주세요" << std::endl;
	std::cout << "\n[Press Enter]" << std::endl;
	getchar();
}

Person* Game::RandomSelect(int PlayerNumber)
{
	Person *Player;
	int randomnum = (rand() % 3) + 1;

	switch (randomnum)
	{
	case 1:
		Player = new FatMan(PlayerNumber);
		return Player;
	case 2:
		Player = new Slave(PlayerNumber);
		return Player;
	case 3:
		Player = new Smoker(PlayerNumber);
		return Player;
	}
}
