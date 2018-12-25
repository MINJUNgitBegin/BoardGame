#include "pch.h"
#include "Event.h"

void Event::BeDraggedAOG(Person* Player)
{
	bool IsInAOG = Player->GetLocatedAOG();
	int RestCount = Player->GetRestCount();
	int Pnum = Player->GetNumber();
	if(IsInAOG && RestCount == 0)
	{
		std::cout << Pnum + 1 << " �÷��̾ �ƿ������� ������ϴ�." << std::endl;
		Player->SetLocatedAOG();
		getchar();
		std::cout << "Press Enter" << std::endl;
	}
	else if(RestCount == 0)
	{
		std::cout << Pnum + 1 << " �÷��̾ ���� �ƿ����� �������ϴ�." << std::endl;
		Player->SetLocatedAOG();
		getchar();
		std::cout << "Press Enter" << std::endl;
	}
}

void Event::UseLadder(Person* Player)
{
	board->LadderAction(Player);
}

Event::Event(Board* board)
{
	this->board = board;
}

void Event::GenerateEvent(Person* Player)
{
	int AttriNum = Player->GetLocatedCell()->GetAttribute();

	switch(AttriNum)
	{
	case 1:
		BeDraggedAOG(Player);
		break;
	case 2:
		UseLadder(Player);
		GenerateEvent(Player);
		break;
	default:
		break;
	}
}

bool Event::IsInGoal(Person* Player)
{
	int AttriNum = Player->GetLocatedCell()->GetAttribute();
	int Pnum = Player->GetNumber();
	if(AttriNum == 3)
	{
		std::cout << Pnum + 1 << "�÷��̾��� �¸��Դϴ�." << std::endl;
		return true;
	}

	else
		return false;
}
