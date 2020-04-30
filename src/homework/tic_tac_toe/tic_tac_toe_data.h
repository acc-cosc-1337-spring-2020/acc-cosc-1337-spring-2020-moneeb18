//h
#include "tic_tac_toe.h"
using namespace std;

class TicTacToeData 
{
	void save_pegs(const std::vector<std::unique_ptr<TicTacToe>>&games);
	std::vector<std::unique_ptr<TicTacToe>>get_games();
	std::vector<std::unique_ptr<TicTacToe>>boards();
};