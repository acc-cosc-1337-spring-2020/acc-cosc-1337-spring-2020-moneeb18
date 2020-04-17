//cpp
#include "tic_tac_toe.h"
#include<iostream>
using namespace std;

bool TicTacToe::game_over()
{
	/*bool TicTacToe::game_over();
	return check_board_full();*/
	if (check_column_win() || check_row_win()|| check_diagonal_win()) {
		set_winner();
		return true;
	}
	else if (check_board_full() == true) {
		winner = 'C';
		return true;
	}
	else {
		return false;
	}
}

void TicTacToe::start_game(std::string first_player)
{

	if (first_player == "X" || first_player == "O")
	{

		player = first_player;
		clear_board();
	}
	else
	{
		throw Error("Player Must Be X or O. ");
	}


}

void TicTacToe::mark_board(int position)
{

	if (position < 1 || position > 9)
	{

		throw Error("Position must be 1 to 9.");

	}

	if (player == "")
	{

		throw Error("Player Must Start Game first: ");
	}
	pegs[position - 1]=player;
	if (!game_over()) { set_next_player(); }



}



void TicTacToe::display_board() const
{
	for (int i = 0;i < 9;i += 3)
	{
		cout << pegs[i] << "|" << pegs[i + 1] << "|" << pegs[i + 2] << "\n";
	}
	for (int i = 0; i < 16; i += 4)
	{
		cout << pegs[i] << "|" << pegs[i + 1] << "|" << pegs[i + 2] << "\n";
	}
}





void TicTacToe::set_next_player()
{
	if (player == "X")
	{
		player = "O";
	}
	else
	{
		player = "X";

	}

}

bool TicTacToe::check_board_full()
{
	for (std::size_t i = 0;i< pegs.size(); ++i) {
		if (pegs[i] == " ")
		{
			return false;
		}
	}
	return true;
}

void TicTacToe::clear_board()
{
	for (auto &peg : pegs)
	{
		peg = " ";
	}
}

bool TicTacToe::check_column_win()
{
	
	return false;
}

bool TicTacToe::check_row_win()
{
	
	return false;
}

bool TicTacToe::check_diagonal_win()
{
	
	return false;
}

void TicTacToe::set_winner()
{
	winner = player;
	/*if (player == "X") { winner = 'O'; }
	else { winner = 'C'; }
	(win == 'O') || (win == 'C') {
		winner = win;
	}*/
}


TicTacToeManager::TicTacToeManager()
{
	x_win = 0;
	o_win = 0;
	tie = 0;

}

void TicTacToeManager::save_game(const TicTacToe b)
{//append the incoming game to the list
	//call updatewinnercount
	games.push_back(b);
	UpdateWinnerCount(b.get_winner());
}

void TicTacToeManager::UpdateWinnerCount(std::string winner)
{//if statement

	if (winner == "X") { x_win++; }
	else if (winner == "O") {o_win++; }
	else if (winner == "C") { tie++; }
}

std::ostream & operator<<(std::ostream & out, const TicTacToeManager & manager)
{
	// TODO: insert return statement here
	for (size_t i = 0; i <manager.games.size() ; i++)
	{
		manager.games.at(i).display_board();
	}
	out << "X won: " << manager.x_win << " O won: " << manager.o_win << " Ties: " << manager.tie;
	if (manager.x_win > manager.o_win && manager.x_win > manager.tie) { out << " X won the most!"; }
	else if (manager.o_win > manager.tie) { out << " O won the most!"; }
	else { out << " Ties are the most!"; }
	return out;
}


/*std::istream& operator>>(std::istream & in, const TicTacToe & mark_board)
{
	if (position < 1 || position > 9)
	{

		throw Error("Position must be 1 to 9.");

	}

	if (player == "")
	{

		throw Error("Player Must Start Game first: ");
	}
	pegs[position - 1] = player;
	if (!game_over()) { set_next_player(); }

	return in;
}

std::ostream& operator<<(std::ostream & out, const TicTacToe & display_board)
{
	for (int i = 0; i < 9; i += 3)
	{
		cout << pegs[i] << "|" << pegs[i + 1] << "|" << pegs[i + 2] << "\n";
	}

	return out;
}*/


std::ostream & operator<<(std::ostream & out, const TicTacToe & game)
{

	game.display_board();

	return out;
}

std::istream & operator>>(std::istream & in, TicTacToe & game)
{
	int position;
	cout << " Mark the position 1 to 9 that you would like to take: " << endl;
	in >> position;
	game.mark_board(position);

	return in;
}