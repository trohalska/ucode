include <unistd.h>

void mx_strlen(const char *s);

void mx_printstr(const char *s){
  write (1, s, mw_strlen(s));
 }
