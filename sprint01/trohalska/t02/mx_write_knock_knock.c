#include <unistd.h>
#include <string.h>

void mx_write_knock_knock(void) {
    char c[] = "Follow the white rabbit.\nKnock, knock, Neo.\n";
    write(1, c, strlen(c));
}
