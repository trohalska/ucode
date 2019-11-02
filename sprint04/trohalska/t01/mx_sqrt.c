int mx_sqrt(int x) {
	int i = 1;
	while (i*i != x && i*i < x)
		i++;
	if (x < 0 || i*i != x)
		i = 0;
	return i;
}
