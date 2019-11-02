#include <stdlib.h>
#include <stdio.h>

int *mx_copy_int_arr(const int *src, int size) {

  if (size < 1 || !*src){
    printf ("%s", "fault"); //delete
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

int main () { //delete
  int s = 5;
  int a[5] = {1, 2, 3, 4, 5};
  int *p = mx_copy_int_arr(a, s);
  for (int i = 0; i < s; i++)  
    printf("%d ", p[i]);
  return 0;
}
