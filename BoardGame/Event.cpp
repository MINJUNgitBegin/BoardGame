#include "pch.h"
#include "Event.h"
#include "Person.h"
#include <ostream>
#include <iostream>


void BeDraggedAOG(Person* p)
{
	
}
void UseLadder(Person* p)
{
	
}
bool IsInGoal(const Person* p)
{
	
		

	
}
void GenerateEvent(Person* p)
{
	switch (p->locatedcell->ReturnAttribute())
	{
		case 1:
			BeDraggedAOG();
			break;
		case 2:
			UseLadder();
			break;
		default:
			IsInGoal();
		if(p->locatedC)
		{
				
		}
			break;
	}
	
}