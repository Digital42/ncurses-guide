/*
    Date: 4/22/25


*/

#include <ncurses.h>
//#include <stdlib.h> ncurses include a few header filesstdlib being one

#define COUNT 5

int main(int argc, char *argv[])
{
    
    initscr();
    start_color();
    init_pair(1, COLOR_BLACK, COLOR_RED);    
    init_pair(2, COLOR_YELLOW, COLOR_BLACK);
    attrset(COLOR_PAIR(1));

    addstr("Black\n");
    attrset(COLOR_PAIR(2));

    addstr("Yellow\n");
    attrset(COLOR_PAIR(2) | A_BOLD);

    addstr("Bold\n");
    attrset(COLOR_PAIR(2) | A_BOLD);

    addstr("You 2?");

    refresh();
    getch();

    endwin();
    
    return(0);
}