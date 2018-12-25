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
	if (LocatedAOG && RestCounterInAOG != 0)
	{
		MoveValue = 0;
		--RestCounterInAOG;
		std::cout << GetNumber() + 1 << "�÷��̾ �ƿ����� ������ �뵿���Դϴ�." << std::endl;
		std::cout << "Press Enter" << std::endl;
		getchar();
	}

	else
	{
		std::cout << std::endl << GetNumber() + 1 << " �÷��̾��� �����Դϴ� �ֻ����� ��������" << std::endl;
		std::cout << "\n\tPress Enter" << std::endl;
		getchar();
		MoveValue = rand() % 6 + 1;
		std::cout << "�ֻ��� ���� : " << MoveValue << std::endl;
		Ability();
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

bool Person::GetLocatedAOG() const
{
	return LocatedAOG;
}

void Person::SetLocatedAOG()
{
	if(LocatedAOG == false)
	{
		RestCounterInAOG = 1;
	}
	LocatedAOG = !LocatedAOG;
}

int Person::GetRestCount()
{
	return RestCounterInAOG;
}
