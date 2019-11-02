void mx_printchar(char c);

void mx_printint(int n)
{
    int j = 0; char a[10];
    while (n % 10 > 0)
	{
        a[j] = (n % 10) + '0';
	    n = n / 10;
        j++;
	}
	j = j - 1;
	while (j >= 0)
    {
		mx_printchar(a[j]);
        j--;
    }
}

