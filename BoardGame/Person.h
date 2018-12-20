#pragma once
class Person
{
protected:
	int DiceGradation;
	 
public:
	void RollDice();
	virtual void PrintCharacterInfo() = 0;
};

