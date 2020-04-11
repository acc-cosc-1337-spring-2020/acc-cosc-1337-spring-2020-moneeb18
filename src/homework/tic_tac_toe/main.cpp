//main
#include"tic_tac_toe.h"
using namespace std;
#include <string>
using std::cout; using std::cin;
int main()
{
	
	//int position;
	auto choice ='Y' ;
	bool winner;
	
	TicTacToeManager allGames;
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
				/*int position;
				cout << " Mark the position 1 to 9 that you would like to take: " << endl;
				cin >> position;
				game.mark_board(position);
				game.display_board();*/
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