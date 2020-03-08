#include &quot;tic_tac_toe.h&quot;
using std::cout; using std::cin;
int main()
{
	std::string first_player;
	//int position;
	std::string choice;

	TicTacToe game;
	while (first_player == &quot; X&quot; , &quot; O&quot;)
	{
		try
		{
			cout &lt; &lt; &quot; First Player enter X or O & quot;;
			cin &gt; &gt; first_player;
			game.start_game(first_player);
		}
		catch (Error e)
		{
			cout &lt; &lt; e.get_message() &lt; &lt; &quot; \n&quot;;
		}
	}
	do
	{
		try {
			int position;
			cout &lt; &lt; &quot; Mark the position 1 to 9 that you would like to take : &quot; &lt; &lt;

			&quot; \n&quot;;

			cin &gt; &gt; position;
			game.mark_board(position);
		}
		catch (Error e)
		{
			cout &lt; &lt; e.get_message() &lt; &lt; &quot; \n&quot;;
		}
		cout &lt; &lt; &quot; to continue press Y : &quot; &lt; &lt; &quot; \n&quot;;
	} while (choice == &quot; Y&quot; || choice == &quot; y&quot;);
	return 0;
}