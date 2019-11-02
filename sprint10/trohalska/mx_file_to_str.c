#include "file_to_str.h"

char *mx_file_to_str(const char *filename) {
    
    // if file doesn't exist
    int file = open(filename, O_RDONLY);
    // check
    if (file < 0) {        
        write(2, filename, mx_strlen(filename));
        write(2, ": ", 2);
        write(2, strerror(errno), mx_strlen(strerror(errno)));
        write(2, "\n", 2);
        exit(1);
        return 0;
    }
    // count bytes
    int k = 0;  
    char buf[1]; 
    int n = read(file, buf, sizeof(buf));
    while (n > 0) {
    	k++;
    	n = read(file, buf, sizeof(buf));
    }
    close(file);

    // copy to string
    file = open(filename, O_RDONLY);
    char *s = mx_strnew(k + 1);
    char *p = s;
    // check
    if (!s) {
        write(2, strerror(errno), mx_strlen(strerror(errno)));
        exit(1);
        return 0;
    }
    int m = read(file, buf, sizeof(buf));
    while (m > 0) {
    	*s = *buf;
    	m = read(file, buf, sizeof(buf));
    	s++;
    }    
    close(file);
	return p;
}

    /*char buf[1]; 
    int n = read(file, buf, sizeof(buf));
    char *s;
    while (n > 0) {        
        char *t = mx_strjoin(s, buf);
        n = read(file, buf, sizeof(buf));
        s = t;
        free(t);
    }
    close(file);
    return s; */

int main(int c, char *v[]) {
    if (c > 4)
        return 0;   
    char *s = mx_file_to_str(v[1]);
    write(1, s, mx_strlen(s));
	return 0;
}


