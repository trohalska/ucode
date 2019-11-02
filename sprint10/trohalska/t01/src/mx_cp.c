#include "minilibmx.h"

int main(int c, char *v[]) {
	if (c != 3) {
		mx_printerr("usage: ./mx_cp [source_file] [target_file]\n");
		exit (1);
        return 0;
	}
    //check is crs or drt exist
	int src = open(v[1], O_RDONLY);
    if (src < 0) {    
        mx_printerr("mx_cp: ");
        mx_printerr(v[1]);
        mx_printerr(": ");
        mx_printerr(strerror(errno));
        mx_printerr("\n");
        exit(1);
        return 0;
    }    
    int dst = open(v[2], O_WRONLY);
    //if dst exists - exit
    if (dst > 0) {
        exit(1);
        return 0;
    }
    //if dst didn't exists - create
    if (dst < 0) {
        dst = open(v[2], O_WRONLY | O_CREAT);
    }
    // src to dst
    char buf[1];
    int n = read(src, buf, 1);
    while (n > 0) {
        write(dst, buf, n);
        n = read(src, buf, 1);
    }
	close(src);
    close(dst);    
	return 0;
}


