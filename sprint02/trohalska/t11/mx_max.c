int mx_max(int a, int b, int c)
{
	int i=0;
	if (a>=b)
		i=a;
	else
		i=b;
	if (c>=i)
		i=c;
	return i;
}
