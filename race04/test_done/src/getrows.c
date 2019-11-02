#include "minilibmx.h"

void getrows(int **str, char *v) {
    int w = count_width(v);
    int h = count_height(v);

    char buf = 'a';
    int fd = open(v, O_RDONLY);
    int n = read(fd, &buf, sizeof(buf));

    for (int i = 0; i < h && n > 0; i++) {

        int *s = malloc(w * sizeof(int));
        if (!s) {
            mx_printerr("error\n");
            exit(1);
        }

        for (int j = 0; j < w && n > 0 && buf != '\n'; j++) {
                
                if (buf == ',') {
                    n = read(fd, &buf, sizeof(buf));
                }
                if (buf == '#'){
                    s[j] = -1;
                }
                else s[j] = 0;
                n = read(fd, &buf, sizeof(buf));
        }
        str[i] = s;
        n = read(fd, &buf, sizeof(buf));
    }
}
