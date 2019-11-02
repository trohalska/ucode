int mx_count_words(const char *str, char delimiter) {
    int s = 0;

    while (*str != '\0') {

        // if not word
        if (*str == delimiter && *str != '\0')
            while (*str == delimiter)
                str++;

        // if word
        if (*str != delimiter) {
            s++;
            while (*str != delimiter && *str != '\0')
                str++;
        }
    }
    return s;
}
