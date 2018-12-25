#include "pch.h"
#include "Game.h"
#include "FatMan.h"
#include "Slave.h"
#include "Smoker.h"

void Game::GameInfo()
{
	std::cout << "�� ������ �÷��̾ Ż���� ������ ���� ���� �����Դϴ�." << std::endl;
	std::cout << "\n[Press Enter]" << std::endl;
	getchar();
	system("cls");
	std::cout << "�ִ� 4����� �÷��� �� �� ������ ���� ���� �Ķ� ��� �ʷϻ� ���� ������ �ֽ��ϴ�." << std::endl;
	std::cout << "\n[Press Enter]" << std::endl;
	getchar();
	system("cls");
	std::cout << "���� �߰��߰��� �׷��� ������ ���� �ƿ��� �Դϴ�." << std::endl;
	std::cout << "�÷��̾ �ֻ����� ���� �̰��� �����ϰ� �Ǹ� �ƿ����� ������ ���� ������ ���� �˴ϴ�." << std::endl;
	std::cout << "\n[Press Enter]" << std::endl;
	getchar();
	system("cls");
	std::cout << "���� �������� ������ �ʴ� ��ٸ��� ������ �ֽ��ϴ�. �� ��ٸ��� �̿��ϸ� �� ������ �� ���������� �ڷ� �� ���� �ֽ��ϴ�." << std::endl;
	std::cout << "������ �����Ϸ��� EnterŰ�� ���� �ּ���" << std::endl;
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
