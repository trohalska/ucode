#include "minilibmx.h"

int main(int c, char *v[]) {
	if (c != 2) {
		mx_printerr("usage: ./read_file [file_path]\n");
		return 0;
	}
	int file = open(v[1], O_RDONLY);
    
    if (file == -1) {
        mx_printerr("error\n");
        exit(1);
    }

    char buf[1];
    int n = read(file, buf, sizeof(buf));
    while (n > 0) {
    	write(1, buf, n);
    	n = read(file, buf, sizeof(buf));
    }
	close(file);
	return 0;
}
