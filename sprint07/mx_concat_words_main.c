#include <stdlib.h>
#include <stdio.h>

char *mx_concat_words(char **words);

int main () {//for me, need to be deleted
  char *words[] = {"Free", "your", "mind.", "123", "mine", NULL};
  char *p = mx_concat_words(words);
  printf("%s", p);
  return 0;
}
