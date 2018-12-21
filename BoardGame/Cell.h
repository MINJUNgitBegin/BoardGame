#pragma once
class Cell
{
	friend class Board;
private:
	char cell[5];
	int Attribute;
	char Horse[3];
	int Number;
public:
	Cell();
	void print();
	void clean();
	void DrawingPlayer(int PlayerNumber);
	const int ReturnAttribute();
};

