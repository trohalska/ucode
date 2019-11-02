#include <unistd.h>

void mx_matrix_voice(void) {
    char s = '\a';
    write(1, &s, 1);
}
