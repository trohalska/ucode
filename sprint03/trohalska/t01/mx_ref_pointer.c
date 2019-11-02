void mx_ref_pointer(int i, int ******ptr)
{
  int *s = &i;
  int **s1 = &s;
  int ***s2 = &s1;
  int ****s3 = &s2;
  int *****s4 = &s3;
  ptr = &s5;
}
