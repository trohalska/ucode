#ifndef CREATE_AGENT_H
#define CREATE_AGENT_H

#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>
#include <stdlib.h>
#include "agent.h"

char *mx_strdup(const char *str);
char *mx_strnew(const int size);
char *mx_strcpy(char *dst, const char *src);
int mx_strlen(const char *s);

#endif
