#include "pch.h"
#include "FatMan.h"

FatMan::FatMan(int number)
	:Person(number)
{

}

void FatMan::Ability()
{
	std::cout << "FatMan�� ȿ���� �ֻ��� ���ݰ��� 1 ���� �߽��ϴ�." << std::endl;
	this->MoveValue -= 1;
	std::cout << "\n\tPress Enter" << std::endl;
	getchar();
}

void FatMan::PrintCharacterInfo()
{
	std::cout << "Test!!" << std::endl;
}
