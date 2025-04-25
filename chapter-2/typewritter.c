/*
    Date: 4/22/25


*/

#include <ncurses.h>
//#include <stdlib.h> ncurses include a few header filesstdlib being one

int main(int argc, char *argv[])
{
    int ch = 0;
    

    initscr();
    
    addstr("Type some text...\n");                                        // addstr() ad two strings on the same line w/o newline
    addstr("Press ~ to quit\n");
    refresh();                                            // addstr() wont update until screen is refreshed
    
    while( (ch = getch()) != '~');

    endwin();
    
    return 0;
}