#include <stdbool.h>

double mx_pow(double n, unsigned int pow);
bool mx_is_prime(int num);

bool mx_is_mersenne(int n){
    bool b = false;
    double ms = 0;
    unsigned int pow = 2;
    int m = 2;
    
    while (m < n && b == false){
        if (mx_is_prime(pow))
            ms = mx_pow(2, pow) - 1; //вычисляем самочисло
        if (ms == n) //если марсеново число равно заданному
            b = true;
        pow++;
        m++;
     }         
    return b;
}
