#include "pch.h"
#include "smoker.h"
using namespace std;

Smoker::Smoker()
	:Person(Number)
{
	SmokingCounter = 1;
}

void Smoker::Ability()
{
	if(SmokingCounter%3 ==0 && SmokingCounter>2)
		MoveValue == 0;
}

void Smoker::PrintCharacterInfo()
{
	cout << "Player" + Number << "은 흡연충가 되었습니다"<< endl;
	cout << "아오지에 끌려갈 경우 한 턴 더 쉬게됩니다."<< endl;
}

void Smoker::RollingDice()
{	
	if(LocatedAOG)
	{
		this->MoveValue = 0;
		--this->RestCounterInAOG;
		system("cls");
		std::cout << "아오지 1회 휴식" << std::endl;
	}

	else
	{
		system("cls");
		std::cout << this->Number + "플레이어의 차례입니다 주사위를 굴리세요" << std::endl;
		std::cout << "Press Enter" << std::endl;
		getchar();
		this->MoveValue = rand() % 6 + 1;
		system("cls");
		std::cout << "주사위 눈금 : " << this->MoveValue << std::endl;
		this->Ability();
	}

	SmokingCounter++;
}
