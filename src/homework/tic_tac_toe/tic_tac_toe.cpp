//cpp
#include <iostream>
Board::Board()
{
	turn = 'X';
	for (int i = 0; i < 9; i++)
	{
		boardArr[i] =' ';
	}
}

void Board::print()
{
	std::cout << "[" << boardArr[0] << "] ";
	std::cout << "[" << boardArr[1] << "] ";
	std::cout << "[" << boardArr[2] << "]\n ";
	std::cout << "[" << boardArr[3] << "] ";
	std::cout << "[" << boardArr[4] << "] ";
	std::cout << "[" << boardArr[5] << "]\n ";
	std::cout << "[" << boardArr[6] << "] ";
	std::cout << "[" << boardArr[7] << "] ";
	std::cout << "[" << boardArr[8] << "]\n ";

}

void Board::changeTurn()
{
	turn = (turn == 'X') ? 'O' : 'X';
}
bool Board::makeMove(int pos)
{
	if (pos < 1 || poz >9) {
		return false;
	}
	if (boardArr[pos] != ' ') {
		return false;
	}
	return;
}