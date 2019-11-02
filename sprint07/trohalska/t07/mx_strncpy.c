char *mx_strncpy(char *dst, const char *src, int len) {
    int i = 0;
    char *c = dst;
    if(!*src)
        return 0;
    while (i < len) {
        *dst = *src;
        dst++;
        src++;        
        i++;
    }
    *dst = '\0';  
    return c;
}
