//h
#include<string>
#include<vector>
#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

class TicTacToe()
{
public:
    bool game_over();

private:
    bool check_board_full()const;
    std::string player;
    std::vector<std::string> pegs{9, " "};
};

#endif