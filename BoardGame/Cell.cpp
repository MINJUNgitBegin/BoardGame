#include "pch.h"
#include "Cell.h"

Cell::Cell(Color color)
{
	this->color = color;
	cell[0] = ' ';
	cell[1] = ' ';
}

void Cell::SetColor(Color color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color | (color << 4));
}

void Cell::ReturnColor()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE | (BLACK << 4));
}

void Cell::Print()
{
	SetColor(color);
	std::cout << cell[0];
	std::cout << cell[1];
	ReturnColor();
}

void Cell::ChangeColor(Color color)
{
	this->color = color;
}
