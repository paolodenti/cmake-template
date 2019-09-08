#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <curses.h>

int libfunc2(int a) {
    return a + a;
}

void banner() {
    WINDOW * mainwin;
    if ( (mainwin = initscr()) == NULL ) {
    	fprintf(stderr, "Error initializing ncurses.\n");
        return;
    }

    mvaddstr(1, 33, "Hello, world!");
    refresh();
    sleep(1);

    delwin(mainwin);
    endwin();
    refresh();
}
