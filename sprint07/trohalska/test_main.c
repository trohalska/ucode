#include <stdlib.h>
#include <stdio.h>

int main () { //for me, need to be deleted
  char b[] = "123456";
  char *a = malloc(6*sizeof (char));
  for(int i = 0; i < 6; ++i)
    a[i] = b[i];
  for(int i = 0; i < 6; ++i)
    printf("%c  ", a[i]);
  
  mx_strdel(&a);
}
