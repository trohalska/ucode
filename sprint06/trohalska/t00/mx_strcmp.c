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

