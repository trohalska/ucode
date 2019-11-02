#include "mylib.h"
#include <unistd.h>
#include <stdbool.h>

void mx_printchar(char c) {
  write(1, &c, 1);
}

void mx_printint(int n) {
  int j = 0; 
  char a[10];
    
  while (n > 0) {
    a[j] = (n % 10) + '0';
    n = n / 10;
    j++;
  }
  j = j - 1;
  while (j >= 0) {
    mx_printchar(a[j]);
    j--;
  }
}

int mx_strlen(const char *s) {
  int z=0;
  while (s[z]!='\0') z++;
  return z;
}

int mx_printstr(const char *s){
  write (1, s, mx_strlen(s));
  return 0;
}

char *mx_strcpy(char *dst, const char *src)
{
    int i = 0;
    while (*src != '\0' || *dst != '\0')
        {
        *(dst + i) = *src;
        i++;
        src++;
        }
    return dst;
}

int mx_strcmp(const char *s1, const char *s2)
{
    int i = 0;
    while (*s1 != '\0' || *s2 != '\0')
        {
        if (*s1 > *s2)
            i = 1;
        if (*s1 < *s2)
            i = -1;
        s1++;
        s2++;
        } 
     return i;
}

bool mx_isdigit(int c)
{
  bool i = false;
  if (c >= '0' && c<='9')
    i = true;
  return i; 
}

bool mx_isspace(char c)
{
  bool i = false;
  if (c==' ' || c=='\t' || c=='\n' 
    || c=='\v' || c=='\f' || c=='\r')
    i = true;
  return i; 
}

int mx_atoi(const char *str) {
  int i = 0;
  int n = 0;
  int s = 1;
  
  while (!mx_isdigit(str[i])){
    if (!mx_isspace(str[i]) && str[i] != '-' && str[i] != '+')
        return 0;
    i++;
  }
  if (str[i - 1] == '-') {
    s = -s;
  }
  for (; mx_isdigit(str[i]); i++) {
    n = ((n * 10) + (str[i] - '0'));
  }
  if (s < 0)
    n = -n;
  return n;
}
