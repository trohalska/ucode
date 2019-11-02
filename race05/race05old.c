#include "minilibmx.h"

int main() {
    /*char *s1 = "Wake up , Neo..\n";        
    char *s2 = "The Matrix has you..\n";
    char *s3 = "Follow the white rabbit\n";
    char *s4 = "Knock, knock, Neo\n";*/
    int row, col;
    setlocale (LC_ALL, "ja_JP");

    initscr();    
    noecho();
    curs_set(0);
    getmaxyx(stdscr, row, col);
    start_color();
    init_pair(1, COLOR_GREEN, COLOR_BLACK);
    init_pair(2, COLOR_WHITE, COLOR_BLACK);
    attron(COLOR_PAIR(1));

// print text
/*{
    int y = row / 6;
    int x = col / 10;

    move(y, x);  
    for (int i = 0; i < mx_strlen(s1); i++) {
        for (int j = 0; j < mx_strlen(s1); j++) {
            move(y, x + i);
            addch(s1[i] | A_DIM);
            refresh();
        }
        usleep(100000);
    }
    refresh();
    clear();    

    move(y, x);  
    for (int i = 0; i < mx_strlen(s2); i++) {
        for (int j = 0; j < mx_strlen(s2); j++) {
            move(y, x + i);
            addch(s2[i] | A_DIM);
            refresh();
        }
        usleep(100000);
    }
    refresh();
    clear();    

    move(y, x);  
    for (int i = 0; i < mx_strlen(s3); i++) {
        for (int j = 0; j < mx_strlen(s3); j++) {
            move(y, x + i);
            addch(s3[i] | A_DIM);
            refresh();
        }
        usleep(100000);
    }
    refresh();
    clear();

    move(y, x);  
    for (int i = 0; i < mx_strlen(s4); i++) {
        for (int j = 0; j < mx_strlen(s4); j++) {
            move(y, x + i);
            addch(s4[i] | A_DIM);
            refresh();
        }
        usleep(100000);
    }
    refresh();
    clear();
}*/

//rain
{
	
	char hir[99] = "平仮名は漢字の知識に乏しい人々などが用いる私的な性格のものであった";
	srand(time(NULL));
	while (1) {
		int len = rand() % row + 1;
        int pos = rand() % col + 1;

		for (int i = 0; i < row + len; i++) {
			/*if (i == row) {
				attron(COLOR_PAIR(2));
					move(i, pos);
					int j = 0;
					if (j % 3 == 0) {
						int k = rand() % 99;
						k -= k % 3;
						int g = 0;
						while (g < 3) {
							printw("%c", hir[k + g]);
							g++;
							j++;
						}
					}					
				attroff(COLOR_PAIR(2));
				//refresh();
				
			}*/

			if (i < row) {
				//for (int j = 0; j < col * 3; j++) {
				int j = 0;
					move(i, pos);
					if (j % 3 == 0) {
						int k = rand() % 99;
						k -= k % 3;
						int g = 0;
						while (g < 3) {
							printw("%c", hir[k + g]);
							g++;
							j++;
						}
					}
					
					//refresh();
				//}
				//refresh();					
			}
			if (i >= len) {
				//for (int j = 0; j < col * 3; j++) {
				int j = 0;
					move(i - len, pos);
					if (j % 3 == 0) {
						int g = 0;
						while (g < 3) {
							printw(" ");
							g++;
							j++;
						}
					}
				//}
			}
			usleep(250000);
			refresh();
		}
	}

    /*while (1){
        int len = rand() % row + 1;
        int pos = rand() % col + 1;
        for (int i = 0; i < row + len; i++) {
            if (i < row) {
                move(i, pos);
                addch("ABCDEFGHIJKLMNOPQRSTUVWXYZ"[rand() % 26]);
            }
            if (i >= len){
                move(i - len, pos);
                addch(' ');
            }
            usleep(25000);
            refresh();
        } 
    }*/
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

