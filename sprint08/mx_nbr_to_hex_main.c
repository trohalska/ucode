#include <stdlib.h>
#include <stdio.h>

char *mx_nbr_to_hex(unsigned long nbr);

int main () {
  unsigned long a = 1000;
  char *p = mx_nbr_to_hex(a);
  printf("%s", p);
  printf("\n%lu", a);
  return 0;
}
