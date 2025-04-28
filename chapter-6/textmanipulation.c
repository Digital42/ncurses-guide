/*
    Date: 4/25/25

*/
#include <ncurses.h>

#include <string.h>
//#include <stdlib.h> ncurses include a few header filesstdlib being one

int main(int argc, char *argv[])
{
    char text1[] = "This is the first line\n";
    char text2[] = "Line 2\n";
    char text3[] = "Line 3\n";
    char text4[] = "Line 4\n";
    char text5[] = "  \n";

    initscr();
    addstr(text1);
    //addstr(text2);
    addstr(text3);
    //addstr(text4);
    addstr(text5);

    refresh();
    getch();

    move(1, 0);
    insertln();
    refresh();
    getch();

    addstr(text2);
    refresh();
    getch();

    endwin();

    return(0);
}
