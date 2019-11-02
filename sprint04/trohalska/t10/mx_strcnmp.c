int mx_strncmp(const char *s1, const char *s2, int n) {
	int i = 0;
	int s = 0;

    while ((*s1 != '\0' || *s2 != '\0') && s < n) {
        if (*s1 > *s2) {
        	i = 1;
        	return i;
        }
        if (*s1 < *s2) {
            i = -1;
            return i;
        }
        s1++;
        s2++;
        s++;
    }
    return i;
}
