#pragma once
class Cell
{
private:
	char cell[5];
	int Attribute;
	char Horse[3];
public:
	Cell();
	void print();
	void clean();
	void DrawingPlayer(int PlayerNumber);
	const int ReturnAttribute();
};

