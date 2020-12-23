#include "checkerboard.h"
#include <string>

CheckBoard::CheckBoard(){

}
bool CheckBoard::JudgeCordi_legal(int x, int y) const{
    if(x>15||x<0||y>15||y<0){
        perror("Out of the Board");
        return false;
    }
    else {
        return true;
    }
}

void CheckBoard::PieceMove(int x,int y, string id){
    if(JudgeCordi_legal(x,y))
        board[y][x]=id;
    else
        perror("Out of the Board, Please Remove!");
}

bool CheckBoard::JudgeWin(const Board &current_situation, const string id){
    static const int dr[] = {-1, 1, 0, 0, 1, 1, -1, -1};
    static const int dc[] = {0, 0, -1, 1, 1, -1, 1, -1};
    int r, c, r0, c0, cnt;
    r0 = current_situation.y;
    c0 = current_situation.x;

    bool isWin = false;

    for (int i=0; i<8; i++)
    {
        cnt = 1;

        r = r0 + dr[i];
        c = c0 + dc[i];
        while (JudgeCordi_legal(r, c) && board[r][c] == id)
        {
            cnt++;
            r += dr[i];
            c += dc[i];
        }

        r = r0 - dr[i];
        c = c0 - dc[i];
        while (JudgeCordi_legal(r, c) && board[r][c] == id)
        {
            cnt++;
            r -= dr[i];
            c -= dc[i];
        }

        if (cnt>=5)
        {
            isWin = true;  //Game Over
            break;
        }
    }

    return isWin;
}
