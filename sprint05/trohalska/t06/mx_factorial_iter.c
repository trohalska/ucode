int mx_factorial_iter(int n) {
  unsigned long fact = 1;
  if (n < 0) {
    return 0;
  }  
  for (int i = 1; i <= n; i++) {
    fact = fact * i;
  }
  if (fact > 2147483647) {
    return 0;
  }
  else {
    return fact;
  }
}
