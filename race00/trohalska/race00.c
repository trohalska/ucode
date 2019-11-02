void mx_printchar(char c);
void mx_printstr(const char *s);
int mx_strlen(const char *s);

void fence(int map_width);
void map(int map_length, int map_width, int one_y, int one_x);
void collum(int i);

void race00(int map_length, int map_width, int one_y, int one_x) {
  
  if (map_length == 1 && map_width == 1) {
    mx_printstr("\n");
    return;
  }

  if (one_y > map_length || one_x > map_width) {
    mx_printstr("\n");
    return;
  }
   
  fence(map_width);
  map(map_length, map_width, one_y, one_x);
  fence(map_width);
}

void fence(int map_width) {
  if (map_width == 1){
    mx_printstr("<=>\n");
    return;
  }
  if (map_width == 2){
    mx_printstr("<==>\n");
    return;
  }
  mx_printstr("<=");
  for (int i = 0; i < map_width - 2; i++)
    mx_printstr("-");
  mx_printstr("=>\n");
}

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
}

void collum(int i) {
  if (i % 2 ==0)
    mx_printchar('*');
  else
    mx_printchar('+');
}
