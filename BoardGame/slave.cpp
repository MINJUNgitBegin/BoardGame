#include "pch.h"
#include "slave.h"
using namespace std;

void Slave::Ability()
{
	 RestCounterInAOG += 1;
}

void Slave::PrintCharacterInfo()
{
	cout << "Player" + Number << "�� �뿹�� �Ǿ����ϴ�"<< endl;
	cout << "�ƿ����� ������ ��� �� �� �� ���Ե˴ϴ�."<< endl;
}
