#include "minilibmx.h"

int count_height(char *v) {
    int h = 0;

    char buf = 'a';
    int map = open(v, O_RDONLY);
    int n = read(map, &buf, sizeof(buf));
    while (n > 0) {
        if (buf == '\n') {
            h++;
        }
        n = read(map, &buf, sizeof(buf));        
    }
    close(map);
    return h;
}
