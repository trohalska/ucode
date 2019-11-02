void mx_deref_pointer(char ******str)
{
  char *s = "Follow the white rabbit!";
  char **s1 = &s;
  char ***s2 = &s1;
  char ****s3 = &s2;
  char *****s4 = &s3;
  str = &s5;
}
