#include <unistd.h>

void mx_printchar(char c);

void mx_only_printable(void) {
    char a = '~';
    for ( a = 126; a >= 32; a--) {
        mx_printchar(a);
	write(1, "\n", 2);
    }
}
