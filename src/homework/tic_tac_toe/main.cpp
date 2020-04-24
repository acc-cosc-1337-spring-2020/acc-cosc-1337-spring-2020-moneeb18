//main
#include"tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_manager.h"
#include "Error.h"
#include<iostream>
#include <functional>
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
	std::vector<std::reference_wrapper<TicTacToe>> games;
	TicTacToeManager allGames;
	cout << "To play a 3*3 tictactoe game enter 3 if you want to play a 4*4 tictactoe game enter 4:  \n";
	cin >> TypeOfGame;
	if (TypeOfGame == 3)
	{
		TicTacToe3 game3;
		games.push_back(game3);
	}
	else if (TypeOfGame == 4)
	{
		TicTacToe4 game4;
		games.push_back(game4);
	}
		do
		{
			std::string first_player;
			while (!(first_player == "X" || first_player == "O" || first_player == "x" || first_player == "o"))
			{
				try
				{
					cout << "First Player enter X or O: ";
					cin >> first_player;
					games.get().start_game(first_player);
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

					cin >> games.get();
					cout << games.get();
					winner = games.get().game_over();

				}
				catch (Error e)
				{
					cout << e.get_message() << endl;
				}

			}

			while(!games.get().game_over());//(winner == false);
			allGames.save_game(games.get());
			allGames;
			cout << "The winner is: " << games.get_winner(games.get()) << endl;
			cout << allGames << endl;
			cout << "To continue press Y : " << endl;
			cin >> choice;
		}
		while (choice == 'Y' || choice == 'y');

	
	return 0;
}
