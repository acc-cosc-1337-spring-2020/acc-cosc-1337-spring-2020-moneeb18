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
	//void display_board()const;
	std::string get_winner()const { return winner; };
	//friend std::istream& operator>>(std::istream & in, const TicTacToe & mark_board);
	//friend std::ostream& operator<<(std::ostream & out, const TicTacToe & display_board);
	friend std::istream& operator>>(std::istream & in, TicTacToe& game);
	friend std::ostream& operator<<(std::ostream & out, const TicTacToe& game);
	TicTacToe(int s):pegs(s*s," "){};
private:
	void set_next_player();
	bool check_board_full();
	void clear_board();
	std::string player;
	void set_winner();
	std::string winner;

protected:
	std::vector<std::string>pegs{};
	virtual bool check_column_win();
	virtual bool check_row_win();
	virtual bool check_diagonal_win();
};


#endif // !TIC_TAC_TOE