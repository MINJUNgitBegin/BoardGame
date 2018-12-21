#include "pch.h"
#include "slave.h"
using namespace std;

void Slave::Ability()
{
	 RestCounterInAOG += 1;
}

void Slave::PrintCharacterInfo()
{
	cout << "Player" + Number << "은 노예가 되었습니다"<< endl;
	cout << "아오지에 끌려갈 경우 한 턴 더 쉬게됩니다."<< endl;
}
