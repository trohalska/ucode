#ifndef MINILIBMX_H
#define MINILIBMX_H

#include <stdio.h> 
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
#include <ncurses.h>
#include <locale.h>

#include <wchar.h>


int mx_strlen(const char *s);
void mx_printerr(const char *s);
bool mx_isdigit(int c);
bool mx_isspace(char c);
int mx_atoi(const char *str);
void mx_printchar(char c);
void mx_printint(int n);

#endif
