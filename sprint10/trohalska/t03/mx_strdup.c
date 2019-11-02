#include "file_to_str.h"

char *mx_strdup(const char *str) {
  char *p = 0;
  if (!*str) {
    //printf ("%s", "fault"); //for me, need to be deleted
    return 0;
  }

  p = mx_strnew(mx_strlen(str));
  if(p == NULL)
    return 0;
  p = mx_strcpy(p, str);
  return p;
}

/*int main () {//for me, need to be deleted
  char a[] = "true";
  char *p = mx_strdup(a);
  printf("%s", p);
  return 0;
}*/
