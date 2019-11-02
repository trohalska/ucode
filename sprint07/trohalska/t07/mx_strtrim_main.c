#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

char *mx_del_extra_whitespaces(const char *str);

int main () {//for me, need to be deleted
  //char w[] = "\f  My name...     is  \r Neo  \t\n ";
  char w[] = "\f  My name...     is  \r Neo  \t\n";
  //char n[] = {"123"};
  char *p = mx_del_extra_whitespaces(w);
  printf("%s", p);
  return 0;
}
