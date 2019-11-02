#include "header.h"


void func1( int max_y, int len, int max_len, char ch[6][4], int *arr, int lines, int *arr1) {
    srand(time(NULL));
    
        for (int i = 0; i < max_y + max_len + 1; i++) {
            for (int j = 0; j < lines; j += 3) {
                attron(COLOR_PAIR(2));
                if (i < arr[j] + arr1[j]) {
                    attron(COLOR_PAIR(1));
                    mvprintw(i - arr1[j], j , ch[rand() % len]);
                    attron(COLOR_PAIR(1));
                    mvprintw(i - arr1[j] - 1, j , ch[rand() % len]);
                }
                if (i >= arr[j] - arr1[j]) {
                attron(COLOR_PAIR(1));
                mvprintw(i - arr1[j] - 1, j , ch[rand() % len]);
                attron(COLOR_PAIR(2));
                mvprintw(i - arr1[j], j , ch[rand() % len]);
                mvprintw(i - arr[j], j , "   ");
                mvprintw(i - arr[j] + arr1[j], j ,  "   ");
                mvprintw(i + arr1[j], j ,  "   ");
                timeout(0);
                char c = getch();
                if(c == 'q') {
                    exit(0);
                }
                }
            }
        usleep(50000);
        refresh();
        }
}


int main() {

    char *s1 = "Wake up , Neo..\n"; 
    char *s2 = "The Matrix has you..\n";
    char *s3 = "Follow the white rabbit\n";
    char *s4 = "Knock, knock, Neo\n";
    setlocale (LC_ALL, "ja_JP");
    initscr(); 
    noecho();                // Инициализация ncurses
    curs_set(0);               // Делаем курсор невидимым
    WINDOW *stdscr = initscr(); // Ініціалізація ncurses (зчитування конфігурації термінала)
    start_color();
    init_pair(1, COLOR_GREEN, COLOR_BLACK);
    init_pair(2, COLOR_WHITE, COLOR_BLACK);
    int max_x;
    int max_y; 
    getmaxyx(stdscr, max_y, max_x);
    srand(time(NULL));
    char ch[6][4] = { "用", "さ", "れ", "て", "い", "ま"};
    int len = 6;
    int max_len = 0;
    int lines = max_x;
    int arr[lines];
    int arr1[lines * 3];
    





    attron(COLOR_PAIR(1));
         int y = max_y / 6;

        int x = max_x / 10;

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

    attroff(COLOR_PAIR(1));









    for (int i = 0; i < lines; i++) {
        arr[i] = rand() % (max_y / 2) + 1;
        
        if (arr[i] > max_len) {
            max_len = arr[i];
        }
    }

    for (int i = 0; i < lines * 3; i++) {
        arr1[i] = rand() % 70;
    }
    while (true) {
     
        func1( max_y, len, 20, ch, arr, lines, arr1);
    }

    endwin();

    return 0;
}
