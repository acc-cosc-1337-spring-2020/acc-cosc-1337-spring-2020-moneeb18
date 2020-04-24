//h
#include<string>
#include <vector>
#include <iostream>
#include<ostream>
#include "tic_tac_toe.h"
#include <memory>
class TicTacToeManager
{
public:
	void save_game(std::unique_ptr<TicTacToe>&);
	friend std::ostream& operator<<(std::ostream & out, const TicTacToeManager & manager);
	TicTacToeManager();
	
	
private:
	std::vector<std::unique_ptr<TicTacToe>>games;
	int x_win;
	int o_win;
	int tie;
	void  UpdateWinnerCount(std::string winner);

};
