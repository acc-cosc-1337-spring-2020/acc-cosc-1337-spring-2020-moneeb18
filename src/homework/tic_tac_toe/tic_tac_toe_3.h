//h
#include "tic_tac_toe.h"
#include "error.h"
class TicTacToe3 : public TicTacToe
{
public:
	TicTacToe3() :TicTacToe(3) {};
	TicTacToe3(std::vector<std::string>p, std::string winner);
private: 
	bool check_column_win();
	bool check_row_win();
	bool check_diagonal_win();
};