//h
#include<string>
#include <vector>
#include <iostream>
#include<ostream>
#include "tic_tac_toe.h"
class TicTacToeManager
{
public:
	void save_game(const TicTacToe b);
	friend std::ostream& operator<<(std::ostream & out, const TicTacToeManager & manager);
	TicTacToeManager();
	//friend std::istream& operator>>(std::istream & in, const TicTacToe game);
	//friend std::iostream& operator<<(std::iostream & out, const TicTacToe game);
private:
	std::vector<std::reference_wrapper<TicTacToe>>games;
	int x_win;
	int o_win;
	int tie;
	void  UpdateWinnerCount(std::string winner);

};
