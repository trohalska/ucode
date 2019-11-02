int mx_gcd(int a, int b);

int mx_lcm(int a, int b) {
  int lcm = 0;

  if (a == 0 || b == 0)
    return lcm;
  if (a < 0)
    a = -a;
  if (b < 0)
    b = -b;
 
  lcm = (a * b) / mx_gcd(a, b);
  return lcm;
}
