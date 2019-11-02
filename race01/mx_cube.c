void mx_printchar(char c);

static void spaces(int num) {
    for (int i = 0; i < num; i++)
        mx_printchar(' ');
}
// prints horizontal laki +----+
static void horizontal(int n) {
    mx_printchar('+');
    for (int i = 0; i < n; i++)
        mx_printchar('-');
    mx_printchar('+');
}
// prints top
static void flat0(int dia, int hor) {
    spaces(dia + 1);
    horizontal(hor);
    mx_printchar('\n');
    for (int i = 1; i <= dia; i++) {
        spaces(dia - i + 1);
        mx_printchar('/');
        spaces(hor);
        mx_printchar('/');
        spaces(i - 1);
        mx_printchar('|');
        mx_printchar('\n');
    }
    horizontal(hor);
    spaces(dia);
    mx_printchar('|');
    mx_printchar('\n');
}
// prints front part with horizontal
static void flat1(int dia,int hor) {
    for (int i = 0; i <= dia; i++) {
        mx_printchar('|');
        spaces(hor);
        mx_printchar('|');
        spaces(dia);
        if (i == dia)
            mx_printchar('+');
        else
            mx_printchar('|');
        mx_printchar('\n');
    }
    for (int i = 1; i <= dia; i++) {
        mx_printchar('|');
        spaces(hor);
        mx_printchar('|');
        spaces(dia - i);
        mx_printchar('/');
        mx_printchar('\n');
    }
    horizontal(hor);
}

void mx_cube(int n) {
    int hor = 2 * n;
    int dia = n / 2;
    
    flat0(dia, hor);
    flat1(dia, hor);
    mx_printchar('\n');
}
