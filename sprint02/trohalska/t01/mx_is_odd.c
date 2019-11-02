#include <stdbool.h>

bool mx_is_odd(int value){
  int i=2;
  if (value%i!=0)
    return 1;
  else
    return 0;
}

