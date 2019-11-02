#include <stdlib.h>
#include <stdio.h>

unsigned long mx_hex_to_nbr(const char *hex);

int main () {
  char s[] = "12n";
  unsigned long a = mx_hex_to_nbr(s);
  printf("%s", s);
  printf("\n%lu", a);
  return 0;
}
