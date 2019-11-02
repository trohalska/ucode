int mx_gcd(int a, int b) {

  if (a == b)
    return a;
  if (a == 0)
    return b;
   if (b == 0)
    return a;
  if (a < 0)
    a = -a;
  if (b < 0)
    b = -b;
 
  if (a > b)
    return mx_gcd(a-b, b);
  return mx_gcd(a, b-a);
}
