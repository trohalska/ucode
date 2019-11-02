#include "hex_to_nbr.h"

unsigned long mx_hex_to_nbr(const char *hex) { 
  unsigned long n = 0;
  unsigned long t = 1;
  int k = 0;
  unsigned long m = 1;

  if (!*hex || *hex == 0)
    return n;
  
  const char *tmp = hex;
  while (*tmp != '\0'){
    k++; //находим кво цифр  k = 2
    tmp++;
    m = m * 16; //находим множитель 256
  }  

  for (int i = 0; i < k; i++) {
    if (mx_isdigit(hex[i]))
      t = hex[i] - '0';
    else if (mx_isalpha(hex[i])) {
      if (mx_islower(hex[i])){
        if (hex[i] > 'f') return 0;
	t = hex[i] - 'a' + 10; 
      }
      if (mx_isupper(hex[i])) {
        if (hex[i] > 'F') return 0;
	t = hex[i] - 'A' + 10; //67 - 65 + 10
      }
      m = m / 16; // 16, 1
      n = n + t * m; //0+12*16=192+4*1=196
    }
  }
  return n;
}
