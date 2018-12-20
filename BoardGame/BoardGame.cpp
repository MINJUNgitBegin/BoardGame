#include "pch.h"
#include <iostream>
#include "Cell.h"

int main()
{
	Cell cell;
	cell.print();
	cell.DrawingPlayer(1);
	cell.DrawingPlayer(2);
	cell.DrawingPlayer(3);
	cell.print();
	cell.clean();
	cell.print();
	cell.DrawingPlayer(1);
	cell.print();
	cell.clean();
	cell.DrawingPlayer(2);
	cell.print();
	cell.clean();
	cell.DrawingPlayer(3);
	cell.print();
	cell.clean();
	cell.print();
	std::cout << cell.ReturnAttribute();
}