#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int mx_strlen(const char *s);
char *mx_strnew(const int size);
void mx_strdel(char **str);
bool mx_isspace(char c);
char *mx_strncpy(char *dst, const char *src, int len);

char *mx_strtrim(const char *str) {
  char *n = 0;
  char *t = 0;
  if (!*str) return NULL;

  //проверяем с конца все знаки табуляции, запоминаем k
  int k = 0;
  const char *m = (str + mx_strlen(str) - 1);
  for (int i = mx_strlen(str) - 1; i > 0 && (mx_isspace(*m)); i--) {
        k++;
        m--;
    
  }
  // проверяем сначала все знаки табуляции и пропускаем
  while (mx_isspace(*str))
    str++;
  // начиная с первой буквы
  if (!mx_isspace(*str)) {
    int len = mx_strlen(str);
    t = mx_strnew(len - k);
    t = mx_strncpy(t, str, len - k);
  }
  n = t;
  mx_strdel(&t);
  return n;
}
