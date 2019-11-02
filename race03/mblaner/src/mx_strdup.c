#include "minilibmx.h"

char *mx_strdup(const char *str) {
  char *p = 0;
  if (!*str) {   
    return 0;
  }

  p = mx_strnew(mx_strlen(str));
  if(p == NULL)
    return 0;
  p = mx_strcpy(p, str);
  return p;
}
