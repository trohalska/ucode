#include "minilibmx.h"

int count_width(char *v) {
    int w = 1;
    int tmp = 0;

    char buf = 'a';
    int map = open(v, O_RDONLY);
    int n = read(map, &buf, sizeof(buf));
    while (n > 0) {        
        // подсчет всех элементов строки
        while (buf != '\n') {
            // проверка что нужные символы
            if (!(buf == ',' || buf == '\n' || buf == '#' || buf == '.')) {
                mx_printerr("map error\n");
                exit(1);
            }
            if (buf != ','){
                n = read(map, &buf, sizeof(buf));
                continue;
            }
            w++;           
            n = read(map, &buf, sizeof(buf));
        }
        // проверка на совпадение строк по длине 
        if (tmp != 0 && tmp != w) {
            mx_printerr("map error\n");
            exit(1);
        }
        n = read(map, &buf, sizeof(buf));
        tmp = w;
        w = 1;
    }
    close(map);
    return tmp;
}
