#include <stdio.h>
#include <curses.h>

void initial()
{
	initscr();
	cbreak();
	nonl();
	echo();
	intrflush(stdscr, FALSE);
	keypad(stdscr, TRUE);
	refresh();



}

int main()
{
	initial();


	return 0;
}
