#include "pch.h"
#include "Person.h"

Person::Person(int number)
{
	MoveValue = 0;
	LocatedCell = nullptr;
	RestCounterInAOG = 0;
	LocatedAOG = false;
	Number = number;
}

void Person::RollingDice()
{
	if (LocatedAOG)
	{
		MoveValue = 0;
		--RestCounterInAOG;
		system("cls");
		std::cout << "�ƿ��� 1ȸ �޽�" << std::endl;
	}

	else
	{
		std::cout << std::endl << GetNumber() + 1 << " �÷��̾��� �����Դϴ� �ֻ����� ��������" << std::endl;
		std::cout << "\n\tPress Enter" << std::endl;
		getchar();
		MoveValue = rand() % 6 + 1;
		Ability();
		std::cout << "�ֻ��� ���� : " << MoveValue << std::endl;
	}
}

void Person::SetLocatedCell(Cell *cell)
{
	LocatedCell = cell;
}

Cell* Person::GetLocatedCell()
{
	return LocatedCell;
}

Cell* Person::GetLocatedCell() const
{
	return LocatedCell;
}

int Person::GetNumber() const
{
	return Number;
}

int Person::GetMoveValue() const
{
	return MoveValue;
}

int Person::GetLocationNumber() const
{
	return LocationNum;
}

void Person::SetLocationNumber(int LocationNumber)
{
	LocationNum = LocationNumber;
}
