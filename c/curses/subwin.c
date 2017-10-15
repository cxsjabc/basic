#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <curses.h>

#include "common_local.h"

int main()
{
	WINDOW *nw, *popup_win;
	int i;

	initscr();

	move(5, 5);
	printw("Test multiple windows...");
	refresh();
	sleep(2);


	nw = subwin(stdscr, 10, 20, 10, 10);
	assert(nw);
	scrollok(nw, 1);
	touchwin(stdscr);
	sleep(2);

	mvwprintw(nw, 2, 2, "Hello World!");
	wrefresh(nw);
	sleep(1);

	for(i = 1; i < 10; ++i) {
		wprintw(nw, "the text is wrapped, and will scroll...");
		wrefresh(nw);
		sleep(1);
	}	

	delwin(nw);

	touchwin(stdscr);
	refresh();
	sleep(1);

	endwin();

    return 0;
}
