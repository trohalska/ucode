#include "minilibmx.h"

bool mx_isvalid(char *str) {
  bool k = true;

  //check if int is valid
  if (mx_isdigit(*str) || *str == '-' || *str == '+') {    
    str++;
    while (*str) {
      if (!mx_isdigit(*str))
         k = false;
      str++;
    }
  }
  else
    k = false;
  return k;
}
