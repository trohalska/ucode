double mx_pow_rec(double n, unsigned int pow) {
  if (pow == 0) return 1;
  else if (pow == 1) return n;
  else if (n == 1) return 1;
    n = n * mx_pow_rec(n, pow - 1);
  return n;
}
