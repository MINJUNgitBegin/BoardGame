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
		std::cout << "�ƿ��� 1ȸ �޽�" << std::endl;
	}

	else
	{
		system("cls");
		std::cout << this->Number + "�÷��̾��� �����Դϴ� �ֻ����� ��������" << std::endl;
		std::cout << "Press Enter" << std::endl;
		getchar();
		this->MoveValue = rand() % 6 + 1;
		system("cls");
		std::cout << "�ֻ��� ���� : " << this->MoveValue << std::endl;
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