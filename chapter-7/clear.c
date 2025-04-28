/*
    Date: 4/26/25


*/
#include <ncurses.h>
#include <string.h>
//#include <stdlib.h> ncurses include a few header filesstdlib being one

int main(int argc, char *argv[])
{
    int row = 0; int col = 0;
    //int y = 0; int x = 0;
    int x = 0;
    int y = 0;

    // for future reference always make sure this is first before anyother ncurses functions are called
    initscr();

    getmaxyx(stdscr, y, x);
    printw("middle = %d", y);

    getch();


    int middle = y / 2;

    for(row = 0; row < LINES; row++)
    {
        for(col = 0; col < COLS; col++)
        {
            addch('.');
        }
    }

    refresh();
    getch();

    clear();
    refresh();

    getch();

    move(0, 0);

    for(row = 0; row < LINES; row++)
    {
        for(col = 0; col < COLS; col++)
        {
            addch('*');
        }
    }

    refresh();

    getch();

    move(0, 0);
    clrtoeol();

    getch();

    move(middle, 0);
    printw("middle = %d", y);
    clrtobot();
    refresh();

    getch();

    endwin();

    return(0);
}