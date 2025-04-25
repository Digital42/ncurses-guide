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
    
    for(a=0; a < COUNT; a++)
    {
        for(b=0; b < COUNT; b++)
        {
            if(b == a)
            {
                attrset(A_BOLD | A_UNDERLINE);
            }
            
            printw("%s", text[b]);
            if(b == a)
            {
                attroff(A_BOLD | A_UNDERLINE);
            }

            addch(' ');
        }

        addstr("\b\n");
    }

    refresh();
    getch();

    endwin();
    
    return(0);
}