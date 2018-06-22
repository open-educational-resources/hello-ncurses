
#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>

int main() {
    initscr();
    //raw();
    //attron(A_STANDOUT | A_UNDERLINE);
    attron( A_REVERSE );
    mvprintw(2,2, "Hello World!");
    //attroff(A_STANDOUT | A_UNDERLINE);
    getch();
    endwin();
    return 0;
}
