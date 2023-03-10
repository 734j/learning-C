#include <ncurses.h>

int main() {
    initscr();

    
	int guess;
	while(guess != 69) {
		guess = 0;

		printw("Find the right number... (Hint: Its between 1-100) ");
		scanw("%d", &guess);

		if (guess != 69){
			printw("Wrong! Try again!");
		}
		else {
			printw("You win! ");
			move(2,0);
			printw("###    ## ##  ###### ####### ");
			move(3,0);
			printw("####   ## ## ##      ##  ");
			move(4,0);
			printw("## ##  ## ## ##      #####  ");
			move(5,0);
			printw("##  ## ## ## ##      ##      ");
			move(6,0);
			printw("##   #### ##  ###### ####### ");
		}
		refresh();
		getch();
		clear();
		
	}

	endwin();
    return 0;
}
