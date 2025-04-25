/*
    Date: 4/23/25


*/

#include <ncurses.h>
//#include <stdlib.h> ncurses include a few header filesstdlib being one

int main(int argc, char *argv[])
{
    int numpieces = 0;
    const float unitprice = 4.5;
    
    initscr();
    
    addstr("weed shop");                                        // addstr() ad two strings on the same line w/o newline
    move(2, 0);
    printw("we have weed for $%.2f.\n", unitprice);
    addstr("How many weeds do you want?");
    
    refresh();                                            // addstr() wont update until screen is refreshed
    
    scanw("%d", &numpieces);
    printw("You want %d weeds?\n", numpieces);
    printw("Thats going to be $%.2f!", unitprice * (float)numpieces);

    refresh();
    getch();

    endwin();
    
    return 0;
}