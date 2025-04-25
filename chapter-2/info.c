/*
    Date: 4/22/25


*/

#include <ncurses.h>
//#include <stdlib.h> ncurses include a few header filesstdlib being one

int main(int argc, char *argv[])
{
    char zip[6];
    char firstname[25];
    char lastname[25];
    

    initscr();
    
    addstr("What is the zip code? ");                                        // addstr() ad two strings on the same line w/o newline
    refresh();                                            // addstr() wont update until screen is refreshed
    getnstr(zip, 5);                                      // getnstr() read input first argument is the pointer to string and second argument is the lenth of input

    addstr("What is the first name? ");                                        // addstr() ad two strings on the same line w/o newline
    refresh();
    getnstr(firstname, 24);


    addstr("What is the last name? ");                                        // addstr() ad two strings on the same line w/o newline
    refresh();
    getnstr(lastname, 24);


    printw("Zip = %s --- full name is: %s %s", zip, firstname, lastname);

    refresh();
    getch();

    endwin();
    
    return 0;
}