#ifndef CHOICE_H
#define CHOICE_H

#include <stdlib.h>
#include <stdio.h>

char *mx_strdup(const char *str);
char *mx_strnew(const int size);
char *mx_strcpy(char *dst, const char *src);
int mx_strlen(const char *s);

typedef char *t_phrase;

static const int MX_RED_PILL = 1;
static const int MX_BLUE_PILL = 2;

static const char MX_SUCCESS_PHRASE[] = "Follow me!";
static const char MX_BLUE_PILL[] = "Perhaps I was wrong about you, Neo.";
static const char MX_UNDEFINED_PHRASE[] = "Are you sure about that?";

#endif
