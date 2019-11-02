#include <time.h>

#include <stdio.h>

void f() 
{ 
  printf("f() starts \n"); 
  printf("Press enter to stop fun \n"); 
  while(1) { 
      if (getchar()) break; 
  } 
  //printf("fun() ends \n"); 
}  

double mx_timer(void (*f)()) {  
  if (!f || clock() < 0) 
    return -1;

  clock_t t; 
  t = clock(); 
  f(); 
  t = clock() - t; 
  return ((double)t) / CLOCKS_PER_SEC;
}
  
int main() {  
  printf("f() took %f seconds to execute \n", mx_timer(f)); 
    return 0; 
}
