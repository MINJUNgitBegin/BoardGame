#include"Person.h"


class Event
{protected:
	void BeDraggedAOG(Person* p);
	void UseLadder(Person* p);

public:
	 bool IsInGoal(const Person* p);
	 void GenerateEvent(Person* p);
	
};

