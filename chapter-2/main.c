/*
    Date: 4/22/25
    Small ncurses program that takes a small initialized string
    and prints each character with a .1 sec delay

*/


#include <ncurses.h>
//#include <stdlib.h> ncurses include a few header filesstdlib being one

int main(int argc, char *argv[])
{
    char text[] = "Where you from?";
    char* t;

    initscr();
    t = text;

    while(*t)
    {
        addch(*t);
        t++;
        refresh();
        napms(100);                                // delay .1 second
    }

    getch();
    endwin();
    
    return 0;
}