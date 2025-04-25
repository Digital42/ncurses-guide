/*
    Date: 4/22/25


*/

#include <ncurses.h>
//#include <stdlib.h> ncurses include a few header filesstdlib being one

#define PINK 8

int main(int argc, char *argv[])
{
    chtype string[] = {
        'H' | A_BOLD, 'e', 'l' | A_REVERSE,
        'l' | A_REVERSE, 'o', '!' | A_UNDERLINE, 0
    };

    char box[] = "lqk\nx x\nmqj\n";                                             //this string some how forms a box likely some form of black magic

    initscr();

    attrset(A_ALTCHARSET);
    addstr(box);
    refresh();
    getch();

    addchstr(string);
    refresh();
    getch();

    addch('c');
    addch(A_BOLD | 'a');
    addch(A_REVERSE | 't');

    refresh();
    curs_set(0);

    move(0, 2);
    addch(A_REVERSE | 'K');                             // this preserve the character attributes thru switches
    refresh();
    getch();
    
    endwin();
    
    return(0);
}