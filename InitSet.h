#ifndef INITSET_H
#define INITSET_H

enum Board_Size
{
    GRID_N   = 15,
    GRID_DN  = 21
};

enum CTRL_BUTTON_INDEX
{
    NEW_BUTTON,
    RESTART_BUTTON,
    RETRACT_BUTTON,
    CHANGE_BUTTON,
    CTRL_BUTTON_N
};

enum TITLE_BUTTON_INDEX
{
    MINI_BUTTON,
    CLOSE_BUTTON,
    TITLE_BUTTON_N
};

class Board{
public:
    int size=15;
    int x,y;
    Board();
    Board(int x,int y);
};

#endif // INITSET_H
