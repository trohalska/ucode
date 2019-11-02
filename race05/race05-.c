#include "minilibmx.h"

int main() {
    char *s1 = "Wake up , Neo..\n";        
    char *s2 = "The Matrix has you..\n";
    char *s3 = "Follow the white rabbit\n";
    char *s4 = "Knock, knock, Neo\n";
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
