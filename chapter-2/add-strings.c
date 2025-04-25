/*
    Date: 4/22/25
    Small ncurses program that takes two small strings
    and concatenate them using addstr() and then moves
    the cursor and prints another string ay (y,x)

*/


#include <ncurses.h>
//#include <stdlib.h> ncurses include a few header filesstdlib being one

int main(int argc, char *argv[])
{
    char text1[] = "Where you from?";
    char text2[] = "This the wrong hood.";
    char text3[] = "This isnt the wrong hood.";

    initscr();
    
    addstr(text1);                                        // addstr() ad two strings on the same line w/o newline
    addstr(text2);

    move(2, 0);                                           // move take a y(row) coord first and an x(column) coord second
    addstr(text3);

    refresh();                                            // addstr() wont update until screen is refreshed
    getch();

    endwin();
    
    return 0;
}