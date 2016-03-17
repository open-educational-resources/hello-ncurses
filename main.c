#include <ncurses.h>

int main() {
    initscr();
    raw();
    attron(A_STANDOUT | A_UNDERLINE);
    mvprintw(12, 40, "Hello World!");
    attroff(A_STANDOUT | A_UNDERLINE);
    getch();
    endwin();

    return 0;
}
