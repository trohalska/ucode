int mx_sum_digits(int num)
{
	int s = 0, i;
	if (num < 0)
		num = -num;
	while (num >=1 || num <= -1)
	{
		i = num % 10;
		s = s + i;
		num = num / 10;
	}
	return s;
}
