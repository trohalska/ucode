void mx_printstr(const char *s);

void mx_is_positive(int i) {
  char a[]="zero\n", b[]="negative\n", c[]="positive\n"; 
  if (i==0)
    mx_printstr(a);
  if (i<0)
    mx_printstr(b);
  if (i>0)
    mx_printstr(c);
}
