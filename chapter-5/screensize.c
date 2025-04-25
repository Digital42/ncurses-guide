/*
    Date: 4/23/25


*/
#define _XOPEN_SOURCE_EXTENDED 1
#include <ncurses.h>
#include <locale.h>
//#include <stdlib.h> ncurses include a few header filesstdlib being one

#define COUNT 5

int main(int argc, char *argv[])
{
    int x = 0, y = 0;
   
    initscr();

    getmaxyx(stdscr, y, x);

    printw("Windows is %d rows by %d columns.\n", y, x);
    printw("Windows is %d rows by %d columns.\n", LINES, COLS);


    refresh();
    getch();

    endwin();

    return(0);
}