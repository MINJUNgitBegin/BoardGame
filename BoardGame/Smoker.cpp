#include "pch.h"
#include "Smoker.h"


void Smoker::Ability()
{
	SmokingCount++;
	std::cout << GetNumber() + 1 << "플레이어의 담배타임 카운트가 1 증가합니다. Count : "
		<< SmokingCount << std::endl;
	std::cout << "Press Enter" << std::endl;
	getchar();
}

void Smoker::PrintCharacterInfo()
{
	std::cout << "Test!" << std::endl;
}

Smoker::Smoker(int num)
	:Person(num)
{
	SmokingCount = 0;
}

void Smoker::RollingDice()
{
	if(SmokingCount == 2)
	{
		std::cout << GetNumber() + 1 << "플레이어가 담배타임을 가집니다(1회 휴식)" << std::endl;
		SmokingCount = 0;
		MoveValue = 0;
		std::cout << "Press Enter" << std::endl;
		getchar();
	}
	else if (LocatedAOG)
	{
		MoveValue = 0;
		--RestCounterInAOG;
		std::cout << GetNumber() + 1 << "플레이어가 아오지에 끌려가 노동중입니다." << std::endl;
		std::cout << "Press Enter" << std::endl;
		getchar();
	}

	else
	{
		std::cout << std::endl << GetNumber() + 1 << " 플레이어의 차례입니다 주사위를 굴리세요" << std::endl;
		std::cout << "\n\tPress Enter" << std::endl;
		getchar();
		MoveValue = rand() % 6 + 1;
		std::cout << "주사위 눈금 : " << MoveValue << std::endl;
		Ability();
	}
}
