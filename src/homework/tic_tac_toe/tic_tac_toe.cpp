//cpp
#include "tic_tac_toe.h"
#include<iostream>
#include "Error.h"
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
		winner = "C";
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

	if (position < 1 || position > pegs.size())
	{

		throw Error("Position out of range.");

	}

	if (player == "")
	{

		throw Error("Player Must Start Game first: ");
	}
	pegs[position - 1]=player;
	set_next_player();



}



TicTacToe::TicTacToe(std::vector<string> p, string win)
{
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
	if (player == "X") { winner = "O"; }
	else { winner = "X"; }
	
}


std::ostream & operator<<(std::ostream & out, const TicTacToe & game)
{
	if (game.pegs.size() == 9) {
		for (int i = 0; i < 9; i += 3)
		{
			out << game.pegs[i] << "|" << game.pegs[i + 1] << "|" << game.pegs[i + 2] << "\n";
		}
	}
	else if (game.pegs.size()==16){
		for (int i = 0; i < 16; i += 4)
		{
			out << game.pegs[i] << "|" << game.pegs[i + 1] << "|" << game.pegs[i + 2] <<"|"<<game.pegs[i+3]<<"|"<<"\n";
		}
	}

	return out;
}

std::istream & operator>>(std::istream & in, TicTacToe & game)
{

		if (game.pegs.size() == 9) {
			int position;
			cout << " Mark the position 1 to 9 that you would like to take: " << endl;
			in >> position;
			game.mark_board(position);
			cout << "\n";
		}
		else if (game.pegs.size() == 16) {
			int position;
			cout << " Mark the position 1 to 16 that you would like to take: " << endl;
			in >> position;
			game.mark_board(position);
			cout << "\n";
		}
		
		
	return in;
}