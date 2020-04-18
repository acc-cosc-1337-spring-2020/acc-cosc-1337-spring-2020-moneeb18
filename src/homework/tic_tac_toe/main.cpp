//main
#include"tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
using namespace std;
#include <string>
#include <vector>
using std::cout; using std::cin;
int main()
{
	
	//int position;
	auto choice ='Y' ;
	bool winner;
	int TypeOfGame;
	TicTacToeManager allGames;
	cout << "To play a 3*3 tictactoe game enter 3 if you want to play a 4*4 tictactoe game enter 4:  \n";
	cin >> TypeOfGame;
	if (TypeOfGame == 3)
	{
		TicTacToe3 game3;
		games.push_back(game3);
		do
		{
			std::string first_player;
			TicTacToe game3;
			while (!(first_player == "X" || first_player == "O" || first_player == "x" || first_player == "o"))
			{
				try
				{
					cout << "First Player enter X or O: ";
					cin >> first_player;
					game3.start_game(first_player);
				}
				catch (Error e)
				{
					cout << e.get_message() << endl;
				}
			}
			do
			{
				try
				{

					cin >> game3;
					cout << game3;
					winner = game3.game_over();

				}
				catch (Error e)
				{
					cout << e.get_message() << endl;
				}

			}
			while (winner == false);
		}
		
		allGames.save_game(game3);
		allGames;
		cout << "The winner is: " << game3.get_winner() << endl;
		cout << allGames << endl;
		cout << "To continue press Y : " << endl;
		cin >> choice;
	}
	else if (TypeOfGame == 4) 
	{
		TicTacToe4 game4;
		games.push_back(game4);
		do
		{
			std::string first_player;
			TicTacToe game4;
			while (!(first_player == "X" || first_player == "O" || first_player == "x" || first_player == "o"))
			{
				try
				{
					cout << "First Player enter X or O: ";
					cin >> first_player;
					game4.start_game(first_player);
				}
				catch (Error e)
				{
					cout << e.get_message() << endl;
				}
			}
			do
			{
				try
				{

					cin >> game4;
					cout << game4;
					winner = game4.game_over();

				}
				catch (Error e)
				{
					cout << e.get_message() << endl;
				}
			}
			while (winner == false);
		}
		
		allGames.save_game(game4);
		allGames;
		cout << "The winner is: " << game4.get_winner() << endl;
		cout << allGames << endl;
		cout << "To continue press Y : " << endl;
		cin >> choice;
	}
	 
	} while (choice == 'Y'||choice =='y');
	
	return 0;
}

/*std::ostream & operator<<(std::ostream & out, const TicTacToe & game)
{
	
	game.display_board();
	
	return out;
}

std::istream & operator>>(std::istream & in,  TicTacToe & game)
{
	int position;
	cout << " Mark the position 1 to 9 that you would like to take: " << endl;
	in >> position;
	game.mark_board(position);

	return in;
}*/