#ifndef MINILIBMX_H
#define MINILIBMX_H

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

#include <stdbool.h>
#include <unistd.h>

int mx_strlen(const char *s);
void mx_printerr(const char *s);
bool mx_isspace(char c);
void mx_printchar(char c);
void mx_printint(int n);
int mx_printstr(const char *s);
int mx_strcmp(const char *s1, const char *s2);

#endif
