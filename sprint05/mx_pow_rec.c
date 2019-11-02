double mx_pow_rec(double n, unsigned int pow) {
  unsigned int i = 2;
  double m = n;

  if (pow == 0)
    return 1;
  if (pow < 0)
    return 0;
  else
    while (i <= pow) {
      i++;
      n = m * mx_pow_rec(m, pow - 1);
    }
  return n;
}

#include <stdio.h>

int main () {
  printf("%f", mx_pow_rec(3, 3));
  return 0;
}
