#include "get_address.h"
#include <stdlib.h>

char *mx_get_address(void *p) {
  char *s = 0;
  char *p1 = 0;
  s = mx_strnew(mx_strlen(p) + 2);
  if (s == 0) return NULL;
  p1 = s;
  *s = '0';
  s++;
  *s = 'x';
  s++;
  char *m = mx_nbr_to_hex((unsigned long) p);
  s = mx_strcpy(s, m);
  return p1;
}
