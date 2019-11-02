#include <stdlib.h>
#include <stdio.h>

int mx_strlen(const char *s);
char *mx_strcpy(char *dst, const char *src);
char *mx_strcat(char *s1, const char *s2);
char *mx_strnew(const int size);
char *mx_strdup(const char *str);
char *mx_strjoin(char const *s1, char const *s2);
void mx_strdel(char **str);


char *mx_concat_words(char **words) {
  char *p = 0;
  char n[] = " ";
  if (!words) return NULL;

  int i = 1;
  p = mx_strdup(words[0]);
  while (words[i] != NULL) {
    p = mx_strjoin(p, n);
    p = mx_strjoin(p, words[i]);
    i++;
  }  
  char *s = p;
  mx_strdel(&p);
  return s;
}
