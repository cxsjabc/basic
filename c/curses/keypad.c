#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <curses.h>

#include "common_local.h"

#define	LOCAL_ESCAPE_KEY		27

int main()
{
	int key;

	initscr();
	keypad(stdscr, TRUE);	

	noecho();
	clear();
	mvprintw(5, 5, "Now begin...");
	move(7, 5);
	refresh();

	key = getch();
	while(key != 'q') {
		move(7, 5);
		if(key >= 'a' && key <= 'z')
			printw("Key:%c\n", key);
		else {
			if(key == KEY_LEFT)
				printw("Left Key:%c\n", key);
			else if(key == LOCAL_ESCAPE_KEY)
				printw("Escape Key:%c\n", key);
				
		}
		refresh();
		key = getch();
	}

	endwin();	
    return 0;
}
