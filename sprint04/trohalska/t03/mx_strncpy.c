char *mx_strncpy(char *dst, const char *src, int len) {
    int i = 0;
    char *c = dst;

    while (*dst && i < len) {
        *dst = *src;
        dst++;
        src++;
        if (*dst == '\0')
            i = len;
        else
            i++;
        }
    *dst = '\0';
    return c;
}
