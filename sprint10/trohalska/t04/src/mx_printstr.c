#include "minilibmx.h"

int mx_printstr(const char *s){
  write (1, s, mx_strlen(s));
  return 0;
}
