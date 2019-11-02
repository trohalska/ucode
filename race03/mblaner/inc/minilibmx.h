#ifndef MINILIBMX_H
#define MINILIBMX_H

#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdlib.h>

typedef struct {
	int rank;
	char suit;
} t_card;

void mx_printchar(char c);
void mx_printint(int n);
int mx_strlen(const char *s);
int mx_printstr(const char *s);
char *mx_strcpy(char *dst, const char *src);
int mx_strcmp(const char *s1, const char *s2);
bool mx_isdigit(int c);
bool mx_isspace(char c);
int mx_atoi(const char *str);
char *mx_strcpy(char *dst, const char *src);
char *mx_strnew(const int size);
char *mx_strdup(const char *str);
void mx_printerr(const char *s);
bool mx_pocker_check(int c, char **v);
t_card **mx_create_cards(int c, char **v);

#endif
