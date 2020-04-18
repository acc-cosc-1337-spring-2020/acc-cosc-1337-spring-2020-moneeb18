//main
#include"tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
using namespace std;
#include <string>
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
	if (TypeOfGame == 3) {
		TicTacToe3 game;
	}
	else if (TypeOfGame == 4) {
		TicTacToe4 game;
	}
	do
	{
		std::string first_player;
		TicTacToe game;
		while (!(first_player == "X" || first_player == "O" || first_player == "x" || first_player == "o"))
		{
			try
			{
				cout << "First Player enter X or O: ";
				cin >> first_player;
				game.start_game(first_player);
			}
			catch (Error e)
			{
				cout << e.get_message() << endl;
			}
		}
		do
		{
			try {
			
				cin >> game;
				cout << game;
				winner = game.game_over();

			}
			catch (Error e)
			{
				cout << e.get_message() << endl;
			}

		} while (winner == false);
		allGames.save_game(game);
		allGames;
		cout << "The winner is: " << game.get_winner() << endl;
		cout << allGames<<endl;
		cout << "To continue press Y : " << endl;
		cin >> choice;
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