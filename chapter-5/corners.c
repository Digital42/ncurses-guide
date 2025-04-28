/*
    Date: 4/24/25

    uses mvaddch() to place an asterisk in each corner every 1 second
    center() is a custom function to pit text in the center
*/
#include <ncurses.h>
#include <locale.h>
#include <string.h>
//#include <stdlib.h> ncurses include a few header filesstdlib being one

void center(int row, char* title);

int main(int argc, char *argv[])
{
    int lines = 0, cols = 0;

    initscr();

    getmaxyx(stdscr, lines, cols);
    
    lines--;
    cols--;

    mvaddch(0, 0, '*');

    refresh();
    napms(1000);

    mvaddch(0, cols, '*');

    refresh();
    napms(1000);

    mvaddch(lines, 0, '*');

    refresh();
    napms(1000);

    mvaddch(lines, cols, '*');

    center(3, "Test string!");

    getyx(stdscr, lines, cols);
    printw("The cursor was at position %d, %d ", lines, cols);

    refresh();
    getch();

    endwin();

    return(0);
}


void center(int row, char* title)
{
    int len = 0, indent = 0, y = 0, width = 0;

    getmaxyx(stdscr, y, width);

    len = strlen(title);
    
    indent = (width - len) / 2;

    mvaddstr(row, indent, title);

    refresh();
}