#include <time.h>

double mx_timer(void (*f)()) {  
  if (!f || clock() < 0) 
    return -1;

  clock_t t; 
  t = clock(); 
  f(); 
  t = clock() - t; 
  return ((double)t) / CLOCKS_PER_SEC;
}
