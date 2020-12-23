#ifndef CHECKERBOARD_H
#define CHECKERBOARD_H
#include "InitSet.h"
#include <string>
using namespace std;
class CheckBoard{
public:
    string black_piece_id;
    string board[15][15];
    CheckBoard();

    void init();
    bool JudgeCordi_legal(int x, int y) const;
    void PieceMove(int x,int y, string id);
    //void setBlackPieceID(string id);
    bool JudgeWin(const Board &current_situation,const string id);
};

#endif // CHECKERBOARD_H
