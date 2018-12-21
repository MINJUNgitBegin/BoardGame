#include "pch.h"
#include "fatman.h"
using namespace std;

void Fatman::Ability()
{
	MoveValue -= 1;
}

void Fatman::PrintCharacterInfo()
{
	cout << "Player" + Number << "은 파오후가 되었습니다" << endl;
	cout << "항상 주사위 눈금의 -1만큼 이동하게 됩니다."<< endl;
}

