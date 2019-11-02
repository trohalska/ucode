#ifndef EXTERMINATE_AGENTS_H
#define EXTERMINATE_AGENTS_H

#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>
#include <stdlib.h>
#include "agent.h"

char *mx_strdup(const char *str);
char *mx_strnew(const int size);
char *mx_strcpy(char *dst, const char *src);
int mx_strlen(const char *s);
t_agent *mx_create_agent(char *name, int power, int strength);
t_agent **mx_create_new_agents(char **name, int *power, int *strength, int count);

#endif
