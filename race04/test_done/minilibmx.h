#ifndef MINILIBMX_H
#define MINILIBMX_H

#include <stdio.h> 
#include <fcntl.h> 
#include <errno.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int mx_strlen(const char *s);
void mx_printerr(const char *s);
bool mx_isdigit(int c);
bool mx_isspace(char c);
int mx_atoi(const char *str);
void mx_printchar(char c);
void mx_printint(int n);

void wave(int **grid, int ax, int ay, int bx, int by, int h, int w);
bool checks(int c, char *v[]);

int count_width(char *v);
int count_height(char *v);
void getrows(int **str, char *v);


#endif
