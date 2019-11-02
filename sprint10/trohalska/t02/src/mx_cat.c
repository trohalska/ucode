#include "minilibmx.h"

int main(int c, char *v[]) {
    
    if (c == 1) {
        char buf = 'a';
        int m = read(0, &buf, sizeof(buf));
        while (buf != '\n') {
            write(1, &buf, m);
            m = read(0, &buf, sizeof(buf));           
        }
        exit(1);
        return 0;
    }
    // open file - argunemts
    for (int i = 1; i < c; i++) {
        int file = open(v[i], O_RDONLY);    
        if (file < 0) {            
            mx_printerr("mx_cat: ");
            mx_printerr(v[i]);
            mx_printerr(": ");
            mx_printerr(strerror(errno));
            mx_printerr("\n");
            exit(1);
            return 0;
        }
        // src to output
        char buf[1];
        int n = read(file, buf, sizeof(buf));
        while (n > 0) {
            write(1, buf, n);
            n = read(file, buf, sizeof(buf));
        }
        write(1, "\n", 2);
        close(file); 
    }	   
	return 0;
}


