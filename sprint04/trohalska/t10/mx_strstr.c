#include <stdio.h>

char *mx_strchr(const char *s, int c);
int mx_strncmp(const char *s1, const char *s2, int n);
int mx_strlen(const char *s);

char *mx_strstr(const char *s1, const char *s2) {    
    
    char *p = mx_strchr(s1, *s2);
    
    if (p) 
        if (mx_strncmp(p, s2, mx_strlen(s2)) == 0)
            return (char *)p;
        else
            return NULL;    
    else
        return NULL;
 }   
   

#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>

int main () {
    char d1[15] = "OMGG_so_long";
    char d2[5] = "_so";    
    printf("%c", *mx_strstr(d1, d2));
    return 0;
}
