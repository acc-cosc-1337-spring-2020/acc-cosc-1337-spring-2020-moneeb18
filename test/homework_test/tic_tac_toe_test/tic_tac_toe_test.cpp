
#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify TicTacToe mark board function")
{
	TicTacToe3 game3;
	REQUIRE_THROWS_AS(game.mark_board(1), Error);
}

TEST_CASE("Verify TicTacToe start game function")
{
	TicTacToe3 game3;
	REQUIRE_THROWS_AS(game.start_game("A"), Error);
}

TEST_CASE("Verify TicTacToe set first player function X")
{
	TicTacToe3 game3;
	game3.start_game("X");

	REQUIRE(game3.get_player() == "X");
}

TEST_CASE("Verify TicTacToe set first player function O")
{
	TicTacToe3 game3;
	game3.start_game("O");

	REQUIRE(game3.get_player() == "O");
}

TEST_CASE("Verify TicTacToe test game flow O")
{
	TicTacToe3 game3;
	game3.start_game("X");
	REQUIRE(game3.get_player() == "X");

	game3.mark_board(4);
	REQUIRE(game3.get_player() == "O");

}

TEST_CASE("Verify TicTacToe test game flow X")
{
	TicTacToe3 game3;
	game3.start_game("O");
	REQUIRE(game3.get_player() == "O");

	game3.mark_board(4);
	REQUIRE(game3.get_player() == "X");

}


/*TEST_CASE("Test game ends when board is full")
{
	TicTacToe game;
	game.start_game("X");

	for (int i = 1;i < 10;++i)
	{
		game.mark_board(i);
		REQUIRE(game.game_over() == false);
	}


	game.mark_board(9);
	REQUIRE(game.game_over() == true);
}*/

TEST_CASE("Win by first column") {
	TicTacToe3 game3;
	game3.start_game("X");
	REQUIRE(game3.game_over() == false);
	game3.mark_board(1);//X        
	REQUIRE(game3.game_over() == false);
	game3.mark_board(2);//O          
	REQUIRE(game3.game_over() == false);
	game3.mark_board(4);//X          
	REQUIRE(game3.game_over() == false);
	game3.mark_board(5);//O          
	REQUIRE(game3.game_over() == false);
	game3.mark_board(7);//X
	//X wins
	REQUIRE(game3.game_over() == true);
	REQUIRE(game3.get_winner() == "X");
}

TEST_CASE("Win by second column") {
	TicTacToe3 game3;
	game3.start_game("X");
	REQUIRE(game3.game_over() == false);
	game3.mark_board(2);//X        
	REQUIRE(game3.game_over() == false);
	game3.mark_board(1);//O          
	REQUIRE(game3.game_over() == false);
	game3.mark_board(5);//X          
	REQUIRE(game3.game_over() == false);
	game3.mark_board(3);//O          
	REQUIRE(game3.game_over() == false);
	game3.mark_board(8);//X
	//X wins
	REQUIRE(game3.game_over() == true);
}

TEST_CASE("Win by third column") {
	TicTacToe3 game3;
	game3.start_game("X");
	REQUIRE(game3.game_over() == false);
	game3.mark_board(3);//X        
	REQUIRE(game3.game_over() == false);
	game3.mark_board(1);//O          
	REQUIRE(game3.game_over() == false);
	game3.mark_board(6);//X          
	REQUIRE(game3.game_over() == false);
	game3.mark_board(2);//O          
	REQUIRE(game3.game_over() == false);
	game3.mark_board(9);//X
	//X wins
	REQUIRE(game3.game_over() == true);
}

TEST_CASE("Win by first row") {
	TicTacToe3 game3;
	game3.start_game("X");
	REQUIRE(game3.game_over() == false);
	game3.mark_board(1);//X        
	REQUIRE(game3.game_over() == false);
	game3.mark_board(4);//O          
	REQUIRE(game3.game_over() == false);
	game3.mark_board(2);//X          
	REQUIRE(game3.game_over() == false);
	game3.mark_board(7);//O          
	REQUIRE(game3.game_over() == false);
	game3.mark_board(3);//X
	//X wins
	REQUIRE(game3.game_over() == true);
}

TEST_CASE("Win by second row") {
	TicTacToe3 game3;
	game3.start_game("X");
	REQUIRE(game3.game_over() == false);
	game3.mark_board(4);//X        
	REQUIRE(game.game_over() == false);
	game3.mark_board(3);//O          
	REQUIRE(game3.game_over() == false);
	game3.mark_board(5);//X          
	REQUIRE(game3.game_over() == false);
	game3.mark_board(9);//O          
	REQUIRE(game3.game_over() == false);
	game3.mark_board(6);//X
	//X wins
	REQUIRE(game3.game_over() == true);
}

TEST_CASE("Win by third row") {
	TicTacToe3 game3;
	game3.start_game("X");
	REQUIRE(game3.game_over() == false);
	game3.mark_board(7);//X        
	REQUIRE(game3.game_over() == false);
	game3.mark_board(1);//O          
	REQUIRE(game3.game_over() == false);
	game3.mark_board(8);//X          
	REQUIRE(game3.game_over() == false);
	game3.mark_board(2);//O          
	REQUIRE(game3.game_over() == false);
	game3.mark_board(9);//X
	//X wins
	REQUIRE(game3.game_over() == true);
}

TEST_CASE("Win by diagonally top left") {
	TicTacToe3 game3;
	game3.start_game("X");
	REQUIRE(game3.game_over() == false);
	game3.mark_board(1);//X        
	REQUIRE(game3.game_over() == false);
	game3.mark_board(3);//O          
	REQUIRE(game3.game_over() == false);
	game3.mark_board(5);//X          
	REQUIRE(game3.game_over() == false);
	game3.mark_board(2);//O          
	REQUIRE(game3.game_over() == false);
	game3.mark_board(9);//X
	//X wins
	REQUIRE(game3.game_over() == true);
}

TEST_CASE("Win by diagonally bottom left") {
	TicTacToe3 game3;
	game3.start_game("X");
	REQUIRE(game3.game_over() == false);
	game3.mark_board(3);//X        
	REQUIRE(game3.game_over() == false);
	game3.mark_board(1);//O          
	REQUIRE(game3.game_over() == false);
	game3.mark_board(5);//X          
	REQUIRE(game3.game_over() == false);
	game3.mark_board(2);//O          
	REQUIRE(game3.game_over() == false);
	game3.mark_board(7);//X
	//X wins
	REQUIRE(game3.game_over() == true);
}

TEST_CASE("For no Winner") {
	TicTacToe3 game3;
	game3.start_game("X");
	REQUIRE(game3.game_over() == false);
	game3.mark_board(2);//X        
	REQUIRE(game3.game_over() == false);
	game3.mark_board(1);//O          
	REQUIRE(game3.game_over() == false);
	game3.mark_board(5);//X          
	REQUIRE(game3.game_over() == false);
	game3.mark_board(3);//O          
	REQUIRE(game3.game_over() == false);
	game3.mark_board(7);//X
	REQUIRE(game3.game_over() == false);
	game3.mark_board(4);//O        
	REQUIRE(game3.game_over() == false);
	game3.mark_board(6);//X          
	REQUIRE(game3.game_over() == false);
	game3.mark_board(8);//O          
	REQUIRE(game3.game_over() == false);
	game3.mark_board(9);//X          
	REQUIRE(game3.game_over() == true);
}

TEST_CASE("Mark position") {
	TicTacToe3 game3;
	game3.start_game("X");
	REQUIRE_THROWS_AS(game3.mark_board(0), Error);
	REQUIRE_THROWS_AS(game3.mark_board(10), Error);
	game3.mark_board(5);

}



TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify TicTacToe mark board function")
{
	TicTacToe3 game3;
	REQUIRE_THROWS_AS(game.mark_board(1), Error);
}

TEST_CASE("Verify TicTacToe start game function")
{
	TicTacToe3 game3;
	REQUIRE_THROWS_AS(game.start_game("A"), Error);
}

TEST_CASE("Verify TicTacToe set first player function X")
{
	TicTacToe3 game3;
	game3.start_game("X");

	REQUIRE(game3.get_player() == "X");
}

TEST_CASE("Verify TicTacToe set first player function O")
{
	TicTacToe3 game3;
	game3.start_game("O");

	REQUIRE(game3.get_player() == "O");
}

TEST_CASE("Verify TicTacToe test game flow O")
{
	TicTacToe3 game3;
	game3.start_game("X");
	REQUIRE(game3.get_player() == "X");

	game3.mark_board(4);
	REQUIRE(game3.get_player() == "O");

}

TEST_CASE("Verify TicTacToe test game flow X")
{
	TicTacToe3 game3;
	game3.start_game("O");
	REQUIRE(game3.get_player() == "O");

	game3.mark_board(4);
	REQUIRE(game3.get_player() == "X");

}


/*TEST_CASE("Test game ends when board is full")
{
	TicTacToe game;
	game.start_game("X");

	for (int i = 1;i < 10;++i)
	{
		game.mark_board(i);
		REQUIRE(game.game_over() == false);
	}


	game.mark_board(9);
	REQUIRE(game.game_over() == true);
}*/

TEST_CASE("Win by first column") {
	TicTacToe3 game3;
	game3.start_game("X");
	REQUIRE(game3.game_over() == false);
	game3.mark_board(1);//X        
	REQUIRE(game3.game_over() == false);
	game3.mark_board(2);//O          
	REQUIRE(game3.game_over() == false);
	game3.mark_board(4);//X          
	REQUIRE(game3.game_over() == false);
	game3.mark_board(5);//O          
	REQUIRE(game3.game_over() == false);
	game3.mark_board(7);//X
	//X wins
	REQUIRE(game3.game_over() == true);
	REQUIRE(game3.get_winner() == "X");
}

TEST_CASE("Win by second column") {
	TicTacToe3 game3;
	game3.start_game("X");
	REQUIRE(game3.game_over() == false);
	game3.mark_board(2);//X        
	REQUIRE(game3.game_over() == false);
	game3.mark_board(1);//O          
	REQUIRE(game3.game_over() == false);
	game3.mark_board(5);//X          
	REQUIRE(game3.game_over() == false);
	game3.mark_board(3);//O          
	REQUIRE(game3.game_over() == false);
	game3.mark_board(8);//X
	//X wins
	REQUIRE(game3.game_over() == true);
}

TEST_CASE("Win by third column") {
	TicTacToe3 game3;
	game3.start_game("X");
	REQUIRE(game3.game_over() == false);
	game3.mark_board(3);//X        
	REQUIRE(game3.game_over() == false);
	game3.mark_board(1);//O          
	REQUIRE(game3.game_over() == false);
	game3.mark_board(6);//X          
	REQUIRE(game3.game_over() == false);
	game3.mark_board(2);//O          
	REQUIRE(game3.game_over() == false);
	game3.mark_board(9);//X
	//X wins
	REQUIRE(game3.game_over() == true);
}

TEST_CASE("Win by first row") {
	TicTacToe3 game3;
	game3.start_game("X");
	REQUIRE(game3.game_over() == false);
	game3.mark_board(1);//X        
	REQUIRE(game3.game_over() == false);
	game3.mark_board(4);//O          
	REQUIRE(game3.game_over() == false);
	game3.mark_board(2);//X          
	REQUIRE(game3.game_over() == false);
	game3.mark_board(7);//O          
	REQUIRE(game3.game_over() == false);
	game3.mark_board(3);//X
	//X wins
	REQUIRE(game3.game_over() == true);
}

TEST_CASE("Win by second row") {
	TicTacToe3 game3;
	game3.start_game("X");
	REQUIRE(game3.game_over() == false);
	game3.mark_board(4);//X        
	REQUIRE(game.game_over() == false);
	game3.mark_board(3);//O          
	REQUIRE(game3.game_over() == false);
	game3.mark_board(5);//X          
	REQUIRE(game3.game_over() == false);
	game3.mark_board(9);//O          
	REQUIRE(game3.game_over() == false);
	game3.mark_board(6);//X
	//X wins
	REQUIRE(game3.game_over() == true);
}

TEST_CASE("Win by third row") {
	TicTacToe3 game3;
	game3.start_game("X");
	REQUIRE(game3.game_over() == false);
	game3.mark_board(7);//X        
	REQUIRE(game3.game_over() == false);
	game3.mark_board(1);//O          
	REQUIRE(game3.game_over() == false);
	game3.mark_board(8);//X          
	REQUIRE(game3.game_over() == false);
	game3.mark_board(2);//O          
	REQUIRE(game3.game_over() == false);
	game3.mark_board(9);//X
	//X wins
	REQUIRE(game3.game_over() == true);
}

TEST_CASE("Win by diagonally top left") {
	TicTacToe3 game3;
	game3.start_game("X");
	REQUIRE(game3.game_over() == false);
	game3.mark_board(1);//X        
	REQUIRE(game3.game_over() == false);
	game3.mark_board(3);//O          
	REQUIRE(game3.game_over() == false);
	game3.mark_board(5);//X          
	REQUIRE(game3.game_over() == false);
	game3.mark_board(2);//O          
	REQUIRE(game3.game_over() == false);
	game3.mark_board(9);//X
	//X wins
	REQUIRE(game3.game_over() == true);
}

TEST_CASE("Win by diagonally bottom left") {
	TicTacToe3 game3;
	game3.start_game("X");
	REQUIRE(game3.game_over() == false);
	game3.mark_board(3);//X        
	REQUIRE(game3.game_over() == false);
	game3.mark_board(1);//O          
	REQUIRE(game3.game_over() == false);
	game3.mark_board(5);//X          
	REQUIRE(game3.game_over() == false);
	game3.mark_board(2);//O          
	REQUIRE(game3.game_over() == false);
	game3.mark_board(7);//X
	//X wins
	REQUIRE(game3.game_over() == true);
}

TEST_CASE("For no Winner") {
	TicTacToe3 game3;
	game3.start_game("X");
	REQUIRE(game3.game_over() == false);
	game3.mark_board(2);//X        
	REQUIRE(game3.game_over() == false);
	game3.mark_board(1);//O          
	REQUIRE(game3.game_over() == false);
	game3.mark_board(5);//X          
	REQUIRE(game3.game_over() == false);
	game3.mark_board(3);//O          
	REQUIRE(game3.game_over() == false);
	game3.mark_board(7);//X
	REQUIRE(game3.game_over() == false);
	game3.mark_board(4);//O        
	REQUIRE(game3.game_over() == false);
	game3.mark_board(6);//X          
	REQUIRE(game3.game_over() == false);
	game3.mark_board(8);//O          
	REQUIRE(game3.game_over() == false);
	game3.mark_board(9);//X          
	REQUIRE(game3.game_over() == true);
}

TEST_CASE("Mark position") {
	TicTacToe3 game3;
	game3.start_game("X");
	REQUIRE_THROWS_AS(game3.mark_board(0), Error);
	REQUIRE_THROWS_AS(game3.mark_board(10), Error);
	game3.mark_board(5);

}
