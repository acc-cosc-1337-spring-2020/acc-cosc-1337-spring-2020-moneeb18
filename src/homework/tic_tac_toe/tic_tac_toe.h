//h
#include<string>
#include <vector>
#include <iostream>
#include<ostream>
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
	bool game_over();
	void start_game(std::string first_player);
	std::string get_player() const { return player; }
	void mark_board(int position);
	void display_board()const;
	std::string get_winner()const {return winner;};
	//friend std::istream& operator>>(std::istream & in, const TicTacToe & mark_board);
	//friend std::ostream& operator<<(std::ostream & out, const TicTacToe & display_board);
	friend std::iostream& operator>>(std::iostream & in, const TicTacToe& game);
	friend std::ostream& operator<<(std::ostream & out, const TicTacToe& game);

private:
	void set_next_player();
	bool check_board_full();
	void clear_board();
	std::string player;
	std::vector<std::string>pegs{ 9," " };
	bool check_column_win();
	bool check_row_win();
	bool check_diagonal_win();
	void set_winner();
	std::string winner;
};

class TicTacToeManager
{
public:
	void save_game(const TicTacToe b);
	friend std::ostream& operator<<(std::ostream & out, const TicTacToeManager & manager);
	 TicTacToeManager();
	 //friend std::istream& operator>>(std::istream & in, const TicTacToe game);
	 //friend std::iostream& operator<<(std::iostream & out, const TicTacToe game);
private:
	std::vector<TicTacToe>games;
	int x_win;
	int o_win;
	int tie;
	void  UpdateWinnerCount(std::string winner);

};

