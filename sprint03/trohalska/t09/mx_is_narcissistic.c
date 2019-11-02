#include <stdbool.h>

double mx_pow(double n, unsigned int pow);

bool mx_is_narcissistic(int num){
    bool b = false;
    unsigned int st = 0;
    double s = 0;
    int i = 0, m = num;
    while (m >= 1){ //вычисление количества цифр (степени)
        m = m / 10;
        st++;
    }
    m = num; //переприсваивание для if в конце
    while (m >= 1){ //вычисление суммы
        i = m % 10;
        s = s + mx_pow(i, st);
        m = m / 10;
    }
    if (s == num && num >= 0) //если сумма равна числу - то число Армстронга
        b = true;
    return b;
}
