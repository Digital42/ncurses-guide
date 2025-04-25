/*
    Date: 4/22/25


*/

#include <ncurses.h>
//#include <stdlib.h> ncurses include a few header filesstdlib being one

#define PINK 8

int main(int argc, char *argv[])
{
    
    initscr();
    start_color();
    
    if(!can_change_color())
    {
        addstr("Color change not supported\n");
    }

    init_color(PINK, 1000, 750, 750);
    init_pair(1, PINK, COLOR_BLACK);
    init_pair(2, COLOR_GREEN, COLOR_RED);

    bkgd(COLOR_PAIR(2));
    attrset(COLOR_PAIR(1));
    beep();
    refresh();
    getch();

    flash();

    bkgd(COLOR_PAIR(1));
    refresh();

    printw("This is the new color %d.\n", PINK);


    refresh();
    getch();

    endwin();
    
    return(0);
}