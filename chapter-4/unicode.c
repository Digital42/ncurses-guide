/*
    Date: 4/23/25
    build with --- gcc -o unicode unicode.c -lncursesw



*/
#define _XOPEN_SOURCE_EXTENDED 1
#include <ncurses.h>
#include <locale.h>
//#include <stdlib.h> ncurses include a few header filesstdlib being one

#define COUNT 5

int main(int argc, char *argv[])
{
    wchar_t hi[] = {
        0x041f, 0x0440, 0x0438,
        0x0432, 0x0435, 0x0442,
        0x0021, 0x0
    };

    cchar_t heart = {
        A_NORMAL,
        L"\u2665"
    };

    setlocale(LC_CTYPE, "en_US.UTF-8");
   
    initscr();
    addwstr(hi);
    refresh();
    addstr("I ");
    add_wch(&heart);
    addstr(" smoking weed and programming");

    refresh();
    getch();

    endwin();

    return(0);
}