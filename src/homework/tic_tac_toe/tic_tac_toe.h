//h
#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

#include<string>
#include <vector>
#include <iostream>
#include<ostream>


class TicTacToe
{

public:
	bool game_over();
	void start_game(std::string first_player);
	std::string get_player() const { return player; }
	void mark_board(int position);
	std::string get_winner()const { return winner; };
	friend std::istream& operator>>(std::istream & in, TicTacToe& game);
	friend std::ostream& operator<<(std::ostream & out, const TicTacToe& game);
	TicTacToe(int s):pegs(s*s," "){};
	TicTacToe(std::vector<string>p, string win);
	std::string get_pegs()const { return pegs{}; }
private:
	void set_next_player();
	bool check_board_full();
	void clear_board();
	std::string player;
	void set_winner();
	std::string winner;

protected:
	std::vector<std::string>pegs{};
	virtual bool check_column_win()=0;
	virtual bool check_row_win()=0;
	virtual bool check_diagonal_win()=0;
};


#endif // !TIC_TAC_TOE