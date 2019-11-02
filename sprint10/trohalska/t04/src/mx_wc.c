#include "minilibmx.h"

void mx_print(int lines, int words, int bytes) {
    mx_printchar('\t');
    mx_printint(lines);
    mx_printchar('\t');
    mx_printint(words);
    mx_printchar('\t');
    mx_printint(bytes);
}
void mx_error_open(char *v) {
    mx_printerr("mx_wc: ");
    mx_printerr(v);
    mx_printerr(": open: ");
    mx_printerr(strerror(errno));
    mx_printerr("\n");
}
void mx_error_read(char *v) {
    mx_printerr("mx_wc: ");
    mx_printerr(v);
    mx_printerr(": read: Is a directory\n");
}
void mx_print1(void) { // count for one file
    int state = 0;
    int lines = 0;
    int words = 0;
    int bytes = 0;

    char buf = 'a';
    int n = read(0, &buf, sizeof(buf));
    while (n > 0) {
        bytes++;
        if (mx_isspace(buf))
            state = 0;
        else if (state == 0) {
            words++;
            state = 1;
        }
        if (buf == '\n')
            lines++;
        n = read(0, &buf, sizeof(buf));        
    }
    mx_print(lines, words, bytes);
    mx_printchar('\n');
}

int main(int c, char *v[]) {
    if (c == 1) {
        mx_print1();
        exit(0);
        return 0;
    }
    // open file - argunemts
    int totl = 0;
    int totw = 0;
    int totb = 0;
    for (int i = 1; i < c; i++) {
        int file = open(v[i], O_RDONLY);
        // check
        if (file < 0) {
            mx_error_open(v[i]);
            exit(1);
            return 0;
        }
        /*char *p1 = "./";
        char *p2 = "../";
        if (strcmp(v[1], p1) || strcmp(v[1], p2)) {
            mx_error_read(v[i]);
            exit(1);
            return 0;
        }*/
        // count for each file
        int state = 0;
        int lines = 0;
        int words = 0;
        int bytes = 0;

        char buf = 'a';
        while (read(file, &buf, sizeof(buf)) > 0) {
            bytes++;
            if (mx_isspace(buf))
                state = 0;
            else if (state == 0) {
                words++;
                state = 1;
            }
            if (buf == '\n')
                lines++;
        }
        close(file);
        mx_print(lines, words, bytes);
        mx_printchar(' ');
        write(1, v[i], mx_strlen(v[i]));
        mx_printchar('\n');
        
        totl += lines;
        totw += words;
        totb += bytes;
    }
    if (c > 2)
        mx_print(totl, totw, totb);
        write (1, " total", 5);
        mx_printchar('\n');
	return 0;
}
