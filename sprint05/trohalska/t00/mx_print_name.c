void mx_printstr(const char *s);
void mx_printchar(char c);
int mx_strlen(const char *s);
void mx_printint(int n);

int main(int argc, char *argv[]) {
  if (argc >=2) {
    mx_printstr(argv[0]);
    mx_printchar('\n');
    mx_printint(argc);
    mx_printchar('\n');
  }
}
