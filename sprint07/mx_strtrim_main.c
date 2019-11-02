#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

char *mx_strtrim(const char *str);

int main () {//for me, need to be deleted
  char w[] = "\f  My name... is Neo  \t\n ";
  //char n[] = {"123"};
  char *p = mx_strtrim(w);
  printf("%s", p);
  return 0;
}
