#include "pch.h"
#include "smoker.h"
using namespace std;

Smoker::Smoker()
	:Person(Number)
{
	SmokingCounter = 1;
}

void Smoker::Ability()
{
	if(SmokingCounter%3 ==0 && SmokingCounter>2)
		MoveValue == 0;
}

void Smoker::PrintCharacterInfo()
{
	cout << "Player" + Number << "�� ���氡 �Ǿ����ϴ�"<< endl;
	cout << "�ƿ����� ������ ��� �� �� �� ���Ե˴ϴ�."<< endl;
}

void Smoker::RollingDice()
{	
	if(LocatedAOG)
	{
		this->MoveValue = 0;
		--this->RestCounterInAOG;
		system("cls");
		std::cout << "�ƿ��� 1ȸ �޽�" << std::endl;
	}

	else
	{
		system("cls");
		std::cout << this->Number + "�÷��̾��� �����Դϴ� �ֻ����� ��������" << std::endl;
		std::cout << "Press Enter" << std::endl;
		getchar();
		this->MoveValue = rand() % 6 + 1;
		system("cls");
		std::cout << "�ֻ��� ���� : " << this->MoveValue << std::endl;
		this->Ability();
	}

	SmokingCounter++;
}
