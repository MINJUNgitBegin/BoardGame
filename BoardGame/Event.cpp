#include "pch.h"
#include "Event.h"
#include "Person.h"
#include <ostream>
#include <iostream>


void BeDraggedAOG(Person* p)
{
	p->LocatedCell->RestCounterInAOG;
	
	//moveplayer�� ���� ������ ������ �̵��� ���ε� �Լ�����;
}
void UseLadder(Person* p)
{
	p->LocatedCell->//�����Ѱ����� ������
	
	//moveplayer�� ���� �����Ѱ����� �̵���
}
bool IsInGoal(const Person* p)
{
	if (p->locatedCell->ReturnAttribute())
	{
		system("cls");
		std::cout << " " << p->Number <<"you Win" << std::endl;
	}
	else
	{
		
	}
		

	
}
void GenerateEvent(Person* p)
{
	switch (p->locatedcell->ReturnAttribute())
	{
		case 1:
			BeDraggedAOG(p);
			break;
		case 2:
			UseLadder(p);
			break;
		default:
			IsInGoal(p);
			break;
	}
	
}