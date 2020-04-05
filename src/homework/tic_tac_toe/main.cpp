
#include"tic_tac_toe.h"
using namespace std;
#include <string>
using std::cout; using std::cin;
int main()
{
	std::string first_player;
	//int position;
	std::string choice;
	bool winner;
	TicTacToe game;
	do 
	{
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
				int position;
				cout << " Mark the position 1 to 9 that you would like to take: " << endl;
				cin >> position;
				game.mark_board(position);
				game.display_board();
				winner = game.game_over();

			}
			catch (Error e)
			{
				cout << e.get_message() << endl;
			}

		} while (winner == false);
		cout << "The winner is: " << game.get_winner() << endl;
		cout << "To continue press Y : " << endl;
	} 
	while (choice == "Y"||choice =="y");
	return 0;
}