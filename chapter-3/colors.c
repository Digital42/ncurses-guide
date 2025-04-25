/*
    Date: 4/22/25


*/

#include <ncurses.h>
//#include <stdlib.h> ncurses include a few header filesstdlib being one

#define COUNT 5

int main(int argc, char *argv[])
{
    char text[COUNT][10] = {
        "Do", "not", "do", "drugs"
    };

    int a, b = 0;
    

    initscr();
    
    if(!has_colors())
    {
        endwin();
        puts("Terminal no soy color");
        return(1);
    }
    if(start_color() != OK)
    {
        endwin();
        puts("no color starty");
        return(1);
    }

    init_pair(1, COLOR_GREEN, COLOR_BLUE);
    attrset(COLOR_PAIR(1));
    addstr("colored text\n");
    attrset(A_NORMAL);

    printw("Colors initialized\n");
    printw("%d color avilable.\n", COLORS);
    printw("%d color pairs.", COLOR_PAIRS);


    refresh();
    getch();

    endwin();
    
    return(0);
}