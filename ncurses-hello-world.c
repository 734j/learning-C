#include <ncurses.h>

int main()
{	
	initscr(); // Start screen
	printw("Hello world"); // Print "Hello world" to screen
	refresh(); // does something
	getch(); // User input
	endwin(); // end the curses mode

	return 0;
}