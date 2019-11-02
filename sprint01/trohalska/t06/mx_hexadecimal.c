#include <unistd.h>

void mx_printchar(char c);

void mx_hexadecimal(void) {
    char  n = '\n';
    for (char  a = '0'; a <= '9'; a++) {
    mx_printchar(a);
    write(1, &n, 1);
    }
    for (char  a = 'A'; a <= 'F'; a++) {
    mx_printchar(a);
    write(1, &n, 1);
    }
}
