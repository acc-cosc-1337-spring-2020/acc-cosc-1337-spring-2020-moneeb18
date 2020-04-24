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
	TicTacToeManager* ptr_allGames;
	std::vector<std::reference_wrapper<TicTacToe>> games;
	cout << "To play a 3*3 tictactoe game enter 3 if you want to play a 4*4 tictactoe game enter 4:  \n";
	cin >> TypeOfGame;
		do
		{
			TicTacToe3 game3;
			TicTacToe4 game4;
			if (TypeOfGame == 3)
			{

				std::move(game3);
			}
			else if (TypeOfGame == 4)
			{

				std::move(game4);
			}
				
			std::reference_wrapper<TicTacToe>game = games.back();
			std::string first_player;
			while (!(first_player == "X" || first_player == "O" || first_player == "x" || first_player == "o"))
			{
				try
				{
					cout << "First Player enter X or O: ";
					cin >> first_player;
					game.get().start_game(first_player);
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

					cin >> game.get();
					cout << game.get();
					winner = game.get().game_over();

				}
				catch (Error e)
				{
					cout << e.get_message() << endl;
				}

			}

			while(!game.get().game_over());//(winner == false);
			allGames->save_game(game.get());
			allGames;
			cout << "The winner is: " << game.get().get_winner() << endl;
			cout << allGames* << endl;
			cout << "To continue press Y : " << endl;
			cin >> choice;
		}
		while (choice == 'Y' || choice == 'y');

	
	return 0;
}
