int mx_strncmp(const char *s1, const char *s2, int n) {
	while (n && *s1 && *s1 == *s2) {
		s1++;
        s2++;
        n--;
    }
    if (n == 0)
    		return 0;

    return *s1 - *s2;
}
