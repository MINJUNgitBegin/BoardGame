#include "pch.h"
#include "fatman.h"
using namespace std;

void Fatman::Ability()
{
	MoveValue -= 1;
}

void Fatman::PrintCharacterInfo()
{
	cout << "Player" + Number << "�� �Ŀ��İ� �Ǿ����ϴ�" << endl;
	cout << "�׻� �ֻ��� ������ -1��ŭ �̵��ϰ� �˴ϴ�."<< endl;
}

