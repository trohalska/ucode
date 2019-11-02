#include "minilibmx.h"

bool checks(int c, char *v[]) {

    // check for args usage
    if (c != 6) {
		mx_printerr("usage: ./race04 [file_name] [x1] [y1] [x2] [y2]\n");
		return false;
	}
	// check if map exists
    int map = open(v[1], O_RDONLY);
    if (map < 0) {
        mx_printerr("map does not exist\n");
        return false;
    }
    close(map);

    int w = count_width(v[1]);
    int h = count_height(v[1]);
    int ax = atoi(v[2]);
    int ay = atoi(v[3]);
    int bx = atoi(v[4]);
    int by = atoi(v[5]);

    for (int i = 2; i < c; i++)
        for (int j = 0; j < mx_strlen(v[i]); j++)
            if (!mx_isdigit(v[i][j])) {
                mx_printerr("error\n");
                return false;
            }
    
    if (ax >= w || ay >= h || bx >= w || by >= w) {
        mx_printerr("points are out of map range\n");
        exit(1);
    }
    return true;
}
