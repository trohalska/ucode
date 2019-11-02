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

bool check(int **arr, int sizex, int sizey);
void lee(int **arr, int sx, int sy, int fx, int fy,
	    int sizex, int sizey);
void spread(int **arr, int fx, int fy, int sizex, int sizey);

#endif
