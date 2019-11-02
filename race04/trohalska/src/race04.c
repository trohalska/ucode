#include "minilibmx.h"

void freeall_int(int **arr, int size) {
    for (int i = 0; i < size; i++)
        free(arr[i]);
    free(arr);
}

void freeall_char(char **arr, int size) {
    for (int i = 0; i < size; i++)
        free(arr[i]);
    free(arr);
}

int main(int c, char *v[]) {

    if (!checks(c, v)) {
        return 0;
        exit(1);
    }

    int w = count_width(v[1]);
    int h = count_height(v[1]);
    int ax = atoi(v[2]);
    int ay = atoi(v[3]);
    int bx = atoi(v[4]);
    int by = atoi(v[5]);

    int **map = (int **) malloc(h * sizeof(int *));
    if (!map){
        mx_printerr("error\n");
        exit(1);
    }
    getrows(map, v[1]);
    wave(map, ax, ay, bx, by, h, w);
        
    // создание карты
    char **res = (char **) malloc(h * sizeof(char *));
    if (!res){
        mx_printerr("error\n");
        exit(1);
    }
    for (int i = 0; i < h; i++) {
        char *s = malloc(w * sizeof(char));
        if (!s){
            mx_printerr("error\n");
            exit(1);
        }        
        res[i] = s;
    }

    int len = map[by][bx];
    int x = bx;
    int y = by;
    int d = len;
    int k = 0;
    int max = len;
    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, 1, 0, -1};

    while (d > 0) { // выпечатываем путь *
        res[y][x] = '*';
        d--;
        for (k = 0; k < 4; k++) {
            int iy = y + dy[k];
            int ix = x + dx[k];
            if (iy >= 0 && iy < h && ix >= 0 && ix < w
                && map[iy][ix] == d) {
                x = x + dx[k];
                y = y + dy[k];
                break;
            }
        }
    }
    res[ay][ax] = '*';
    
    // находим максимум
    for (int i = 0; i < h; i++)
        for (int j = 0; j < w; j++)
            if (map[i][j] > max)
                max = map[i][j];

    // выпечатываем решетки и точки
    for (int i = 0; i < h; i++)
        for (int j = 0; j < w; j++){            
            if (map[i][j] == -1)
                res[i][j] = '#';
            else if (map[i][j] == max)
                res[i][j] = 'D';
            else if (res[i][j] != '*' 
                && res[i][j] != 'D'
                && res[i][j] != '#')
                res[i][j] = '.';
        }
    if (map[by][bx] == max)
        res[by][bx] = 'X';

    char n = '\n';
    int fd = open("path.txt", O_WRONLY);
    
    if (fd < 0)
        fd = open("path.txt", O_WRONLY | O_CREAT);
    // to dst
    for (int i = 0; i < h; i++){
        for (int j = 0; j < w; j++)
            write(fd, &res[i][j], 1);
        write(fd, &n, 1);
    }
    close(fd);
    
    int max_v = max - 1;
    int ex = map[by][bx] - 1;

    write(1, "dist=", 5);
    mx_printint(max_v);
    mx_printchar('\n');

    write(1, "exit=", 5);
    mx_printint(ex);
    mx_printchar('\n');

    freeall_int(map, h);    
    freeall_char(res, h);
}
