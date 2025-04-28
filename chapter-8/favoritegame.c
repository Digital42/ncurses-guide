/*
    Date: 4/26/25


*/
#include <ncurses.h>
#include <string.h>
//#include <stdlib.h> ncurses include a few header filesstdlib being one

int main(int argc, char *argv[])
{
    char game[32];
    int ch = 0;
    
    initscr();

    do
    {
        clear();
        addstr("What is your favrotie game? ");
        getnstr(game, 31);                                                      //make sure this has to be 1 less then the string array 
        move(1, 0);                                                             //or equal to the string array

        printw("You said your favorite game is %s. ", game);
        printw("Is that correct? ");
        ch = getch();
    
    } while( ch != 'y');

    move(2, 0);
    printw("Well %s wasnt a very good game now was it?\n", game);               //printw will seg fault is the matching parameters for the format are not present

    getch();
    endwin();

    return(0);
}