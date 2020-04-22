//cpp
#include "tic_tac_toe_manager.h"
TicTacToeManager::TicTacToeManager()
{
	x_win = 0;
	o_win = 0;
	tie = 0;

}

void TicTacToeManager::save_game(TicTacToe b)
{//append the incoming game to the list
	//call updatewinnercount
	games.push_back(b);
	UpdateWinnerCount(b.get_winner());
}

void TicTacToeManager::UpdateWinnerCount(std::string winner)
{//if statement

	if (winner == "X") { x_win++; }
	else if (winner == "O") { o_win++; }
	else if (winner == "C") { tie++; }
}

std::ostream & operator<<(std::ostream & out, const TicTacToeManager & manager)
{
	// TODO: insert return statement here
	for (size_t i = 0; i < manager.games.size(); i++)
	{
		out<<manager.games.at(i);
	}
	out << "X won: " << manager.x_win << " O won: " << manager.o_win << " Ties: " << manager.tie;
	if (manager.x_win > manager.o_win && manager.x_win > manager.tie) { out << " X won the most!"; }
	else if (manager.o_win > manager.tie) { out << " O won the most!"; }
	else { out << " Ties are the most!"; }
	return out;
}

