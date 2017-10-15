#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <curses.h>

#include "common_local.h"

int main()
{
	WINDOW *nw, *popup_win;

	initscr();

	move(5, 5);
	printw("Test multiple windows...");
	refresh();
	sleep(2);


	nw = newwin(100, 100, 0, 0);
	assert(nw);
	mvwprintw(nw, 2, 2, "Hello World!");
	wrefresh(nw);
	sleep(2);

	popup_win = newwin(10, 20, 8, 8);
	box(popup_win, '|', '-');
	mvwprintw(popup_win, 5, 2, "Pop Up Window!");
	wrefresh(popup_win);
	sleep(2);

	touchwin(nw);
	wrefresh(nw);
	sleep(2);

	delwin(popup_win);
	delwin(nw);
	endwin();

    return 0;
}
