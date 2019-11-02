#include <stdlib.h>
#include <stdio.h>

int *mx_copy_int_arr(const int *src, int size) {

  if (size < 1 || !*src){
    return NULL;
  }
  int *p = 0;
  p = malloc(size * sizeof(int));
  if(p == NULL)
    return 0;
  for (int i = 0; i < size; i++) {
    *(p + i) = *src;
    src++;
  }
  return p;
}
