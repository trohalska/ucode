void mx_printchar(char c);

void mx_isos_triangle(unsigned int length, char c)
{
	unsigned int i=1, j=1;
	for (i=1; i<=length; i++)
	{
		j=1;
		while (j<=i)
		{
			mx_printchar(c);
			j++;
		}
	mx_printchar('\n');
	}
}
