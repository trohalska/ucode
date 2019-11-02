#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int mx_strlen(const char *s);
char *mx_strnew(const int size);
void mx_strdel(char **str);
bool mx_isspace(char c);
char *mx_strncpy(char *dst, const char *src, int len);
char *mx_strtrim(const char *str); //выписывает строку без знаков табуляции

char *mx_del_extra_whitespaces(const char *str) {
  char *n = mx_strtrim(str);
  /*char *t = mx_strnew(mx_strlen(n)); // пустая строчка длинны трим
  if (!*str) return NULL;

  // проверяем пока не пробел
  int k = 0;
  char *n1 = n;
  while (!mx_isspace(*n)){
    k++;
    n++;
  }
  t = mx_strncpy(t, n1, k);*/
  
  return n;
}
