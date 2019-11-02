void mx_printchar(char c);

static void spaces(int num) {
    for (int i = 0; i < num; i++)
        mx_printchar(' ');
}

void straight(int num) {
    for(int i = 0; i < num; i++)
        mx_printchar('_');
}

void top(int n) {
    spaces(n - 1);
    mx_printchar('/');
    mx_printchar('\\');
    mx_printchar('\n');
}

void pyramid(int n) {
    top(n);
    for (int i = 0; i < n - 1; i++) {
        spaces(n - i - 2);
        mx_printchar('/');
        if (i < n - 2)
            spaces(2 * i + 1);
        else 
            straight(2 * n - 3);
        mx_printchar('\\');
        if(i < n / 2 - 1) {
            spaces(i + 1);
            mx_printchar('\\');
            mx_printchar('\n');
        }
        else {
            spaces(n - i - 2);
            mx_printchar('|');
            mx_printchar('\n');
        }
    }
}

void two(void) {
    mx_printchar(' ');
    mx_printchar('/');
    mx_printchar('\\');
    mx_printchar('\n');
    mx_printchar('/');
    mx_printchar('_');
    mx_printchar('\\');
    mx_printchar('|');
}

void mx_pyramid(int n) {    
    if (n <= 1)
        return;
    if (n > 1 && n % 2 != 0)
        return;            
    if (n == 2)
        two();
    else
        pyramid(n);      
}
