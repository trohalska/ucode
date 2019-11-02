char *mx_strcpy(char *dst, const char *src)
{
    char *ch = dst;
    while (*dst != '\0')
        {
        *dst = *src;
        dst++;
        src++;
        }
    *dst = '\0';
    return ch;
}
