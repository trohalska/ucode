#include "minilibmx.h"

int main() {
    char s[4][30] = {"Wake up , Neo..\0", 
    				"The Matrix has you..\0",
    				"Follow the white rabbit\0",
    				"Knock, knock, Neo\0"};
    int row, col;

    initscr();
    noecho();
    curs_set(0);
    getmaxyx(stdscr, row, col);
    int y = row / 6;
    int x = col / 10;

    start_color();
    init_pair(1, COLOR_GREEN, COLOR_BLACK);
    init_pair(2, COLOR_WHITE, COLOR_BLACK);
    attron(COLOR_PAIR(1));

// print text
	{
	    move(y, x);  
	    for (int i = 0; i < 4; i++) {
	    	int j = 0;
	    	while (s[i][j]) {
	    		j++;
	           // move(y, x + j);
	            printw("%s", s[i][j]);
	            refresh();
	        	halfdelay(1);
	        }
	        halfdelay(2);
	        refresh();
	        clear();
	    }
	    refresh();
	    clear();
	}
	attroff(COLOR_PAIR(1));

// esc 'Q'
	{ 
		while (true) {
	        switch (getch()) {
	            case 'q':
	                return 0; 
	                break;
	        }
	    }
	}
    endwin();
    return 0;
}

