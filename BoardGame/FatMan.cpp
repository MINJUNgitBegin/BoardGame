#include "pch.h"
#include "FatMan.h"

FatMan::FatMan(int number)
	:Person(number)
{
	PrintCharacterInfo();
}

void FatMan::Ability()
{
	std::cout << "Ż������ �强�� ȿ���� �ֻ��� ���ݰ��� 1 ���� �߽��ϴ�." << std::endl;
	this->MoveValue -= 1;
	std::cout << "\n\tPress Enter" << std::endl;
	getchar();
}

void FatMan::PrintCharacterInfo()
{
	system("cls");
	std::cout << GetNumber() + 1 << "�÷��̾�� Ż������ �强�Դϴ�.\n" << std::endl;
	std::cout << "Ż������ �强�� ü�� ������ ���� �ʾ� ü���� �������ϴ�.\n�ֻ����� ���� �� ���� �ֻ��� ���ݰ��� 1 �����ϴ� ȿ���� Ư���� �ֽ��ϴ�.\n" << std::endl;
	std::cout << "Press Enter" << std::endl;
	getchar();
}
