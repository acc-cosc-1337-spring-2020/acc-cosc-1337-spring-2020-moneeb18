//cpp
#include "tic_tac_toe.h"

void TicTacToe::start_game(std::string first_player)
{

	if (first_player == "X" || first_player == " O ")
	{

		player = first_player;

	}
	else if (first_player == " ")
	{

		throw Error("Player Must Start Game first: ");
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

	set_next_player();



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

}.h file
