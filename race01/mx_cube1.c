/*void fence(int map_width);
void map(int map_length, int map_width, int one_y, int one_x);
void collum(int i);*/

void mx_printchar(char c);

void spaces(int num) {
  for(int i = 0; i < num; i++)
    mx_printchar(' ');
}

void horizontal(int n) {
  mx_printchar('+');
  for (int i = 1; i < 2 * n; i++)
    mx_printchar('-');
  mx_printchar('+');    
}

void oblique(int n) {
    int len = n / 2;    
  for (int i = 0; i < len - 1; i++) {
     for (int j = 0; j < len - 1; j++)
       if (j == len - i)
        mx_printchar('/');
      else
        mx_printchar(' ');
    mx_printchar('\n');
  }

}

void mx_cube(int n) { 
  if (n <= 1)    
    return;

  else { // print cube
    
// print first string
    for (int i = 0; i < n/2 + 1; i++)
      mx_printchar(' ');
    horizontal(n);
    mx_printchar('\n');

// print 

    for (int i = 0; i < n / 2; i++) {
      mx_printchar(' ');
      oblique (n);
    }







  }  
}


















int main () {
  mx_cube(4);
  return 0;
}



/*
void map(int map_length, int map_width, int one_y, int one_x) {
  for (int i = 0; i < map_length; i++) {
    collum(i);
    for (int j = 0; j < map_width; j++){
      if (one_y == i && one_x == j)
        mx_printchar('1');
      else
        mx_printchar('0');
    }
    collum(i);
    mx_printchar('\n');
  }


void collum(int i) {
  if (i % 2 ==0)
    mx_printchar('*');
  else
    mx_printchar('+');
}*/
