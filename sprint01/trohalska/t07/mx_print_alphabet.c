#include <unistd.h>

void mx_printchar(char c);

void mx_print_alphabet(void) {
  for (char  a = 'A', b = a+33; a <= 'Z'; a=a+2, b=b+2) {
    mx_printchar(a);
    mx_printchar(b);
    }
    write (1, "\n", 2);
}
