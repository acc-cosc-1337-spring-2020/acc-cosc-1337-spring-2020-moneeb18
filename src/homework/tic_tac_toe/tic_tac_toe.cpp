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
	if (pegs[0]=="X" && pegs[3]== "X" && pegs[6] == "X")
	{
		return true;
	}
	else if (pegs[0] == "O" && pegs[3] == "O" && pegs[6] == "O") { return true; }
	else if (pegs[1] == "X" && pegs[4] == "X" && pegs[7] == "X")
	{
		return true;
	}
	else if (pegs[1] == "O"&& pegs[4] ==  "O"&& pegs[7] == "O") { return true; }
	else if (pegs[2] == "X" && pegs[5] == "X" && pegs[8] == "X")
	{
		return true;
	}
	else if (pegs[2] == "O" && pegs[5] == "O" && pegs[8] == "O") { return true; }
	return false;
}

bool TicTacToe::check_row_win()
{
	if (pegs[0] == "X" && pegs[1] =="X" && pegs[2] == "X")
	{
		return true;
	}
	else if (pegs[0] == "O" && pegs[1] == "O" && pegs[2] == "O") { return true; }
	else if (pegs[3] == "X" && pegs[4] =="X" && pegs[5] == "X")
	{
		return true;
	}
	else if (pegs[3] == "O" && pegs[4] == "O" && pegs[5] == "O") { return true; }
	else if (pegs[6] == "X" && pegs[7] == "X" && pegs[8] == "X")
	{
		return true;
	}
	else if (pegs[6] == "O" && pegs[7] == "O" && pegs[8] == "O") { return true; }
	return false;
}

bool TicTacToe::check_diagonal_win()
{
	if (pegs[0] == "X"&& pegs[4] == "X" && pegs[8] == "X")
	{
		return true;
	}
	else if (pegs[0] == "O"&& pegs[4] == "0" && pegs[8] == "O") { return true; }
	else if (pegs[6] =="X" && pegs[4] == "X" && pegs[2] == "X")
	{
		return true;
	}
	else if (pegs[6] == "O" && pegs[4] == "O" && pegs[2] == "O") { return true; }
	return false;
}

void TicTacToe::set_winner()
{
	if (player == "X") { winner = 'O'; }
	else { winner = 'C'; }
	/*(win == 'O') || (win == 'C') {
		winner = win;
	}*/
}


TicTacToeManager::TicTacToeManager() {
	x_win = 0;
	o_win = 0;
	tie = 0;

}

void TicTacToeManager::save_game(const TicTacToe b)
{//append the incoming game to the list
	//call updatewinnercount
	
}

void TicTacToeManager::UpdateWinnerCount(std::string winner)
{//if statement
	if (winner == "X") { 1 + x_win; }
	else if (winner == "O") { 1 + o_win; }
	else if (winner == "C") { 1 + tie; }
}

std::ostream & operator<<(std::ostream & out, const TicTacToeManager & manager)
{
	// TODO: insert return statement here
}
