#pragma once
#include <Windows.h>
#include <iostream>

#define BLACK 0
#define GRAY 8
#define BLUE 9
#define GREEN 10
#define RED 12
#define YELLOW 14
#define WHITE 15

typedef unsigned short Color;

class Cell
{
	friend class Board;
private:
	char cell[2];
	Color color;
	Color Origin;
	int Attribute;
	int LocationNumber;

	void SetColor(Color color);
	void SetOriginColor();
	void ChangeOriginColor(Color color);
	void SetConsoleColor();
	Cell(Color color = GRAY, Color origin = GRAY);
	void Print();
	void ChangeColor(Color color);
	void SetAttribute(int attribute);
	int GetAttribute() const;

public:
};

