int mx_mid(int a, int b, int c)
{
	int i=b;
	if ((c >= a && a >= b) || (b >= a && a >= c))
		i = a;
	if ((a >= c && c >= b) || (b >= c && c >= a))
		i = c;
	return i;
}
