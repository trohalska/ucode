#include <stdlib.h>
#include <stdio.h>

char *mx_strcpy(char *dst, const char *src);
char *mx_strcat(char *s1, const char *s2);
char *mx_strnew(const int size);
char *mx_strdup(const char *str);
int mx_strlen(const char *s);

char *mx_strjoin(char const *s1, char const *s2) {
  char *p = 0;
  int d1 = mx_strlen(s1);
  int d2 = mx_strlen(s2);
 
  if (!*s1 && !*s2) {
    printf ("%s", "NULL return"); //for me, need to be deleted
    return NULL;
  }
  else if (!*s1) p = mx_strdup(s2);
  else if (!*s2) p = mx_strdup(s1);
  else {
    p = mx_strnew(d1 + d2);    
    p = mx_strcpy(p, s1);
    p = mx_strcat(p, s2);
  }
  if(p == NULL) return 0;
  return p;
}

int main () { //for me, need to be deleted
  char a[] = "true_";
  char b[] = "false";
  char *p = mx_strjoin(a, b);
  printf("%s", p);
  return 0;
}
