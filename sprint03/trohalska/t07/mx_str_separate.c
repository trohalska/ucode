void mx_printchar(char c);

#include <unistd.h>

void mx_str_separate(const char *str, char delim)
{
    while (*str != '\0')
    {
        if (*str != delim)
            write(1, str, 1);
        else
        if (*str == delim)
        	{
        	while (*str == delim)
        		str++;
            write(1, "\n", 2);
            str--;
            }
        str++;
    }
}
