#include "file_to_str.h"

char *mx_strnew(const int size) {
  char *p = 0;
  if (size < 0){
    return NULL;
  }
 
 p = (char*) malloc((size + 1) * sizeof(char));
  if(p == NULL)
    return 0;
  for (int i = 0; i < size + 1; i++)
    p[i] = '\0';
  return p;
}
