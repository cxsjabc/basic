#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <curses.h>

#include "common_local.h"

int main()
{
	initscr();

	if(!has_colors()) {
		endwin();
		return 1;
	}

	if(start_color() != OK) {
		endwin();
		printf("start_color error!\n");
		return 2;
	}

	clear();
	
	init_pair(1, COLOR_RED, COLOR_GREEN);
	attrset(COLOR_PAIR(1));
	mvprintw(5, 5, "Color pair");
	refresh();
	sleep(1);
		
	endwin();
    return 0;
}
