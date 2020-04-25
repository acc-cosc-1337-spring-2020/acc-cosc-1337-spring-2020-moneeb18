//main
#include"tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_manager.h"
#include "Error.h"
#include<iostream>
#include <functional>
#include <memory>
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
	std::unique_ptr<TicTacToeManager>allGames = make_unique<TicTacToeManager>();
	std::unique_ptr<TicTacToe>allGames = make_unique<TicTacToe>();
	//std::vector<std::reference_wrapper<TicTacToe>> games;
	cout << "To play a 3*3 tictactoe game enter 3 if you want to play a 4*4 tictactoe game enter 4:  \n";
	cin >> TypeOfGame;
		do
		{
			std::unique_ptr<TicTacToe>game;
			TicTacToe3 game3;
			TicTacToe4 game4;
			if (TypeOfGame == 3)
			{
				std::unique_ptr<TicTacToe>three = make_unique<TicTacToe3>();
				allGames.push_back(std::move(game));
			}
			else if (TypeOfGame == 4)
			{
				std::unique_ptr<TicTacToe>three = make_unique<TicTacToe4>();
				allGames.push_back(std::move(game));
			}
				
			//std::reference_wrapper<TicTacToe>game = games.back(game);
			ames.push_back(std::move(game));
			std::string first_player;
			while (!(first_player == "X" || first_player == "O" || first_player == "x" || first_player == "o"))
			{
				try
				{
					cout << "First Player enter X or O: ";
					cin >> first_player;
					game->start_game(first_player);
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

					cin >> *game;
					cout << *game;
					//winner = *game.get().game_over();

				}
				catch (Error e)
				{
					cout << e.get_message() << endl;
				}

			}

			while(!(game->game_over()));//(winner == false);
			allGames->save_game(game);
			allGames;
			cout << "The winner is: " << game.get().get_winner() << endl;
			cout << allGames << endl;
			cout << "To continue press Y : " << endl;
			cin >> choice;
		}
		while (choice == 'Y' || choice == 'y');

	
	return 0;
}
