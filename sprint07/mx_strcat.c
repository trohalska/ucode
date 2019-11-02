#include <stdio.h>

int mx_strlen(const char *s);

char *mx_strcat(char *s1, const char *s2) {
    char *c = s1;
    int b = mx_strlen (c);

    while (*s1) {
        *(s1 + b) = *s2;
        s1++;
        s2++;
    }
    *s1 = '\0';  
    
    return c;
}
