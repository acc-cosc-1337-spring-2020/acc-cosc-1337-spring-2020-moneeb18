#include "tic_tac_toe_data.h"
#include <fstream>
//cpp

void TicTacToeData::save_pegs(const std::vector<std::unique_ptr<TicTacToe>>& games)
{
	fstream MyFile("TicTacToe.txt");
	for (auto something : games)
	{
		cout << get_winner();
	}
}

std::vector<std::unique_ptr<TicTacToe>> TicTacToeData::get_games()
{
	fstream MyFile("TicTacToe.txt");

	return std::vector<std::unique_ptr<TicTacToe>>();
}

std::vector<std::unique_ptr<TicTacToe>> TicTacToeData::boards()
{
	fstream MyFile("TicTacToe.txt");
	return std::vector<std::unique_ptr<TicTacToe>>();
}
