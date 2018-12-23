#include "pch.h"
#include "FatMan.h"

FatMan::FatMan(int number)
	:Person(number)
{

}

void FatMan::Ability()
{
	std::cout << "FatMan의 효과로 주사위 눈금값이 1 감소 했습니다." << std::endl;
	this->MoveValue -= 1;
	std::cout << "\n\tPress Enter" << std::endl;
	getchar();
}

void FatMan::PrintCharacterInfo()
{
	std::cout << "Test!!" << std::endl;
}
