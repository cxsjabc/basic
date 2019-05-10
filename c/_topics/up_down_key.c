#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <termios.h>

#include "common_local.h"

// 21 97 65: up
// 21 97 66: down

struct termios cooked, raw;

int get_input_key()
{
	char buf[3];
	int ret;
	char ch;

	ch = getchar();
	//printf("ch:%x\n", ch);
	
	if(ch == 0x1B) {
		ch = getchar();
		if(ch == 0x5B) {
			ch = getchar();
			if(ch == 0x41)
				return 1;
			else if(ch == 0x42)
				return 2;
		}
	}

	return ch;
	
}

void process_up_down_keys()
{

	while(1) {
		int key;
		tcgetattr(0, &cooked);
		memcpy(&raw, &cooked, sizeof(struct termios));
		raw.c_lflag &= ~(ICANON | ECHO);
		raw.c_cc[VEOL] = 1;
		raw.c_cc[VEOF] = 2;
		tcsetattr(0, TCSANOW, &raw);

		key = get_input_key();

		tcsetattr(0, TCSANOW, &cooked);
		printf("key:%x\n", key);

		if(key != 1 && key != 2)
			break;
	}
}

int main(int argc, char *argv[])
{
	process_up_down_keys();
    return 0;
}
