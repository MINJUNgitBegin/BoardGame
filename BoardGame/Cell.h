#pragma once
#include <Windows.h>
#include <iostream>

#define BLACK 0
#define GRAY 8
#define BULE 9
#define RED 12
#define YELLOW 14
#define WHITE 15

typedef unsigned short Color;

class Cell
{
private:
	char cell[2];
	Color color;
	void SetColor(Color color);
	void ReturnColor();
public:
	Cell(Color color = GRAY);
	void Print();
	void ChangeColor(Color color);
};

