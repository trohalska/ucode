#include "file_to_str.h"

char *mx_strcpy(char *dst, const char *src)
{
    int i = 0;
    while (*src != '\0')
        {
        *(dst + i) = *src;
        i++;
        src++;
        }
    return dst;
}
