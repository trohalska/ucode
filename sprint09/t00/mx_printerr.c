#include "printerr.h"

void mx_printerr(const char *s) {
	if (!*s) return;
  
    write(2, s, mx_strlen(s));
   
  }

 
int main () {
  char *s = "Error\n";
  mx_printerr(s);
  return 0;
}

