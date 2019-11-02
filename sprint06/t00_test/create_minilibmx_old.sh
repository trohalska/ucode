#!/bin/sh

touch minilibmx.h
echo '#ifndef _minilibmx_
#define _minilibmx_

void mx_printchar(char c);
void mx_printint(int n);
void mx_printstr(const char *s);
char *mx_strcpy(char *dst, const char *src);
int mx_strlen(const char *s);
int mx_strcmp(const char *s1, const char *s2);
bool mx_isdigit(char c);
bool mx_isspace(char c);
int mx_atoi(const char *str);

#endif' > minilibmx.h

cat mx_printchar.c mx_printint.c mx_printstr.c mx_strcpy.c mx_strlen.c mx_strcmp.c mx_isdigit.c mx_isspace.c mx_atoi.c > minilibmx.c
clang -o minilibmx.o -c minilibmx.c
ar r minilibmx.a minilibmx.o
