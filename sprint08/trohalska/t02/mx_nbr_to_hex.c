#include "nbr_to_hex.h"

char *mx_nbr_to_hex(unsigned long nbr) { // 495
  unsigned long n = 1;
  int k = 1;
  unsigned long t = nbr;
  char *s = 0;

  while (n * 16 <= nbr) {  
    n = 16 * n;// находимпервое гекс 16, 256
    k++; //находим кво чисел k = 3
  }
  s = mx_strnew(k);
  for (int i = 0; i < k; i++) {
    t = nbr / n; // =1
    nbr = nbr - (t * n); //n = 495 - 1*256 = 239    
    n = n / 16;
    s[i] = t < 10 ? t + '0' : t + 'a' - 10; 
  }
  return s;
}
