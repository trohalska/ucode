int mx_factorial_iter(int n) {
  int fact = 1;
  if (n == 1)
    return 1;
  else if (n < 1 || n > 13)
    return 0;
  else    
    fact = n * mx_factorial_iter(n - 1);
  return (int) fact;
}

#include <stdio.h>

int main () {
  printf("%d", mx_factorial_iter(5));
  return 0;
}
