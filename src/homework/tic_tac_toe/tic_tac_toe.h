//h
#ifndef BOARD_H
#define BOARD_H
class Board
{
	char turn;
	char boardArr[9];

public:
	Board();
	void print();
	void changeTurn();
	bool makeMove(int pos);
};