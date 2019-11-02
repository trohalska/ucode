#include "minilibmx.h"

static int count_width(char *v) {
    int w = 1;
    int tmp = 0;

    char buf = 'a';
    int map = open(v, O_RDONLY);
    int n = read(map, &buf, sizeof(buf));
    while (n > 0) {
        // проверка что нужные символы
        if (buf != ',' && buf != '\n' && buf != '#' && buf != '.') {
            mx_printerr("map error");
            exit(1);
        }
        // подсчет всех элементов строки
        while (buf != '\n') {
            if (buf != ','){
                n = read(map, &buf, sizeof(buf));
                continue;
            }
            w++;           
            n = read(map, &buf, sizeof(buf));
        }
        // проверка на совпадение строк по длине 
        if (tmp != 0 && tmp != w) {
            mx_printerr("map error");
            exit(1);
        }
        n = read(map, &buf, sizeof(buf));
        tmp = w;
        w = 1;
    }
    close(map);
    return tmp;
}
static int count_height(char *v) {
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
static void getrows(int **str, char *v) {
    int w = count_width(v);
    int h = count_height(v);

    char buf = 'a';
    int fd = open(v, O_RDONLY);
    int n = read(fd, &buf, sizeof(buf));

    for (int i = 0; i < h && n > 0; i++) {

        int *s = malloc(w * sizeof(int));        
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

int main(int c, char *v[]) {

    if (c < 1)
        return 0;

    int w = count_width(v[1]);
    int h = count_height(v[1]);

    int **map = (int **) malloc(h * sizeof(int *));
    getrows(map, v[1]);

    const int ax = atoi(v[2]);
    const int ay = atoi(v[3]);
    const int bx = atoi(v[4]);
    const int by = atoi(v[5]);

    lee(map, ax, ay, bx, by, w, h);  

    // вывод на печать

    printf("%d %d", w, h);
    printf("\n");
    for (int i = 0; i < h; ++i)
    {
      for (int j = 0; j < w; ++j)
        {
      if (map[i][j] == -1 || map[i][j] > 9)
        printf ("%d ", map[i][j]);
      else
        printf (" %d ", map[i][j]);
        }
      printf("\n");
    }
	return 0;
}
