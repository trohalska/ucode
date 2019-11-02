int mx_factorial_iter(int n) {
  unsigned long fact = 1;
  if (n < 1)
    return 1;
  fact = n * mx_factorial_iter(n - 1);
  if (fact > 2147483647)
    return 0;
  else
    return fact;
}
