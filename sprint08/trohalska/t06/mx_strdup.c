#include <stdlib.h>
#include <stdio.h>

char *mx_strnew(const int size);
char *mx_strcpy(char *dst, const char *src);
int mx_strlen(const char *s);

char *mx_strdup(const char *str) {
  char *p = 0;
  if (!*str) {
    printf ("%s", "fault"); //for me, need to be deleted
    return 0;
  }

  p = mx_strnew(mx_strlen(str));
  if(p == NULL)
    return 0;
  p = mx_strcpy(p, str);
  return p;
}
