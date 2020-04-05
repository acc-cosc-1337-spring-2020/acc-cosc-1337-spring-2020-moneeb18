//cpp
#include "tic_tac_toe.h"
#include<iostream>
using namespace std;

bool TicTacToe::game_over()
{
	/*bool TicTacToe::game_over();
	return check_board_full();*/
	if (check_column_win() == true || check_row_win() == true || check_diagonal_win() == true) {
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
	set_next_player();



}



void TicTacToe::display_board() const
{
	for (int i = 0;i < 9;i += 3)
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
	if (pegs[0]==player && pegs[3]== player && pegs[6] == player)
	{
		return true;
	}
	else if (pegs[1] == player && pegs[4] == player && pegs[7] == player)
	{
		return true;
	}
	else if (pegs[2] == player && pegs[5] == player && pegs[8] == player)
	{
		return true;
	}
	return false;
}

bool TicTacToe::check_row_win()
{
	if (pegs[0] == player && pegs[1] == player && pegs[2] == player)
	{
		return true;
	}
	else if (pegs[3] == player && pegs[4] == player && pegs[5] == player)
	{
		return true;
	}
	else if (pegs[6] == player && pegs[7] == player && pegs[8] == player)
	{
		return true;
	}
	return false;
}

bool TicTacToe::check_diagonal_win()
{
	if (pegs[0] == player && pegs[4] == player && pegs[8] == player)
	{
		return true;
	}
	else if (pegs[6] == player && pegs[4] == player && pegs[2] == player)
	{
		return true;
	}
	return false;
}

void TicTacToe::set_winner()
{
	if (player == "X") { winner = 'O'; }
	else { winner = 'O'; }
	/*(win == 'O') || (win == 'C') {
		winner = win;
	}*/
}