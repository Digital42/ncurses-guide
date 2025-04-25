#include <ncurses.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    initscr();
    addstr("This is so fun!");
    refresh();
    getch();

    endwin();
    
    return 0;
}