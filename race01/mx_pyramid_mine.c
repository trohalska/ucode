void mx_printchar(char c);

static void spaces(int num) {
    for (int i = 0; i < num; i++)
        mx_printchar(' ');
}


void two(int n) {
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
    
    if (n < 1 && n % 2 != 0)
    	return;

    if (n = 2)
    	two(n);
    else
      
}


int main (){
    mx_pyramid(6);
    return 0;
}
