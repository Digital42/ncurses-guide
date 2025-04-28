/*
    Date: 4/26/25


*/
#include <ncurses.h>
#include <string.h>
//#include <stdlib.h> ncurses include a few header filesstdlib being one

int main(int argc, char *argv[])
{
    int row = 0; int col = 0;

    initscr();

    for(row = 0; row < LINES; row++)
    {
        for(col = 0; col < COLS; col++)
        {
            addch('.');
        }
    }

    refresh();
    getch();

    move(5, 0);
    insdelln(3);
    refresh();
    getch();

    getch();
    endwin();

    return(0);
}