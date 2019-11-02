#include "minilibmx.h"

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
