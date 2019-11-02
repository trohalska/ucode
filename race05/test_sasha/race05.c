#include "minilibmx.h"

#include <ncurses.h>
#include <unistd.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

void mx_printchar(char c);
int mx_strlen(const char *s);

void func1(int max_y, int len, char *ch, int *arr, int lines, int *h) {
    
    
    for (int i = 0; i < max_y + 1; i++) {
        for (int j = 0; j < lines; j += 2) {

            if (i < max_y + h[j] || i - h[j] == 0) {
                attron(COLOR_PAIR(2));

                mvaddch(i - h[j], j + 2, ch[rand() % len]);

                attroff(COLOR_PAIR(2));
                
            }
            if (i < max_y + h[j] + 1) {
                attron(COLOR_PAIR(1));

                mvaddch(i - h[j] - 1, j + 2, ch[rand() % len]);

                attroff(COLOR_PAIR(1));
            }
            if (i >= arr[j]) {
                attron(COLOR_PAIR(1));

                mvaddch(i - arr[j] - h[j], j + 2, ' ');

                attroff(COLOR_PAIR(1));
                
            }
        }
    usleep(25000);
    refresh();
    }
}


int main() {
    /*char *s1 = "Wake up , Neo..\n";
    char *s2 = "The Matrix has you..\n";
    char *s3 = "Follow the white rabbit\n";
    char *s4 = "Knock, knock, Neo\n";*/

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
    char ch[] = "drsglghjajsjtgjeortirpueqy]v2357829690!@#$%^&*(*&^%$#)";
    int len = mx_strlen(ch);
    int lines = max_x;
    int arr[lines];
    int h[lines];

/*
{
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
}
*/

    /*for (int i = 0; i < lines; i++) {
        srand(time(NULL));
        arr[i] = rand() % (max_y / 2) + 1;
        h[i] = rand() % max_y + 1;        
        
    }*/

    while (true) {
        srand(time(NULL));

        for (int i = 0; i < lines; i++) {
            arr[i] = rand() % (max_y / 2) + 1;
            h[i] = rand() % max_y + 1;
        }      
        func1( max_y, len, ch, arr, lines, h);
    }

    getch();                   // Ожидание пользовательского ввода
    endwin();

    return 0;
}
