#include "pch.h"
#include "Event.h"
#include "Person.h"
#include <ostream>
#include <iostream>


void BeDraggedAOG(Person* p)
{
	p->LocatedCell->RestCounterInAOG;
	
	//moveplayer의 값을 지정한 값으로 이동후 무인도 함수실행;
}
void UseLadder(Person* p)
{
	p->LocatedCell->//지정한값으로 보내기
	
	//moveplayer의 값을 지정한값으로 이동후
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