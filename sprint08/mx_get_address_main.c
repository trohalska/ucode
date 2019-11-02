char *mx_get_address(void *p);

int main () {
  unsigned long a = 1200;
  char *p = mx_get_address(&a);
  printf("%s", p);
  printf("\n%lu", a);
  
  return 0;
}
