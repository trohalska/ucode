#include <stdbool.h>

bool mx_is_prime(int num)
{
    bool b = true;
    int i = 2;
    while (i < num && b == true)
    {
      if (num % i == 0) //вычисление 
        b = false;
      i++;    
    }
    return b;
}
