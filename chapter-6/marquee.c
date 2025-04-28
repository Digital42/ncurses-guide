/*
    Date: 4/25/25


*/
#include <ncurses.h>
#include <string.h>
//#include <stdlib.h> ncurses include a few header filesstdlib being one

int main(int argc, char *argv[])
{
    char text[] = "This is the first line\n";
    char* t;
    char a;
    int len = 0;

    initscr();
   
    len = strlen(text);
    t = text;

    move(5, 0);
    for(a = 'A'; a < 'Z' + 1; a++)
    {
        addch(a);
        addstr("  ");
    }

    while(len)
    {
        move(5, 5);
        insch(*(t + len - 1));
        move(15, 15);
        insstr("insstr()");
        refresh();
        napms(100);
        len--;
    }

    move(15, 15);
    deleteln();

    move(5, 5);
    for(int x = 0; x < 5; x++)
    {
        delch();
        refresh();
        napms(250);
    }

    getch();

    endwin();

    return(0);
}