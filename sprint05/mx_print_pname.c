void mx_printstr(const char *s);
void mx_printchar(char c);
int mx_strlen(const char *s);
char *mx_strchr(const char *s, int c);

int main(int c, char *v[]) {
  char *s = 0;
  if (c < 1)
    return 0;

  char *p = mx_strchr(v[0], '/'); 
  while (p) {
    s = p + 1;
    p = (mx_strchr(s, '/'));
  }
  mx_printstr(s);
  mx_printchar('\n');
  return 0;
}
