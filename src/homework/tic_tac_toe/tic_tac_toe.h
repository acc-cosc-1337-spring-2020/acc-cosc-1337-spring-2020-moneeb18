//h
#include<string>
#include <vector>
#include <iostream>
class Error
{
public:
	Error(std::string msg) : message{ msg } {}
	std::string get_message()const { return message; }


private:
	std::string message;
};

class TicTacToe
{

public:
	bool TicTacToe::game_over();
	void start_game(std::string first_player);
	std::string get_player() const { return player; }
	void mark_board(int position);
	void display_board()const;

private:
	void set_next_player();
	bool check_board_full();
	void clear_board();
	std::string player;
	std::vector<std::string>pegs{ 9," " };
};
