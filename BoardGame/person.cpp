#include "pch.h"
#include "Person.h"

Person::Person(int Number)
{
	this->MoveValue = 0;
	this->LocatedCell = NULL;
	this->RestCounterInAOG = 0;
	this->LocatedAOG = false;
	this->Number = Number;
	this->PlayerTurn = 1;
}

void Person::RollingDice()
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
}

Cell* Person::ReturnLocatedCell()
{
	return this->LocatedCell;
}

Cell* Person::ReturnLocatedCell() const
{
	return this->LocatedCell;
}

int Person::ReturnNumber() const
{
	return this->Number;
}