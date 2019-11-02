#include <stdbool.h>

bool mx_isdigit(int c);
void mx_printint(int n);
void mx_printchar(char c);
int mx_atoi(const char *str);

int main(int argc, char *v[]) {
  int a = 0;
  int b = 0;
  int c = 0;

  a = mx_atoi(v[1]);
  b = mx_atoi(v[2]);

  if (argc != 3 || a > 9 || b > 9)
    return 0;
  
  if (a == b){
    mx_printint(a * b);
    mx_printchar('\n');
  }
  else {

  if (a > b) {
    c = a;
    a = b;
    b = c;
  }
  
  for (int i = a; i <= b; i++) {
    for (int j = a; j <= b; j++){
      mx_printint(i * j);
      mx_printchar('\t');
    }
    mx_printchar('\n');
  }
  return 0;
}
}
