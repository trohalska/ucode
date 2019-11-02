#include <stdbool.h>

bool mx_islower(int c);
bool mx_isupper(int c);
int mx_tolower(int c);
int mx_toupper(int c);

void mx_reverse_case(char *s){
	int z=0; 
    while (s[z]!='\0'){
        if (mx_isupper(s[z])){
            s[z] = mx_tolower(s[z]);
            }
        else
        if (mx_islower(s[z])){
            s[z] = mx_toupper(s[z]);
            }
        z++;
        }
}
