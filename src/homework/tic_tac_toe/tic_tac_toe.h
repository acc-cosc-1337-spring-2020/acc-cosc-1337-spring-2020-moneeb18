//h
#include<string>

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
	void start_game(std::string first_player);
	std::string get_player() const { return player; }
	void mark_board(int position);


private:
	void set_next_player();
	std::string player;

};
