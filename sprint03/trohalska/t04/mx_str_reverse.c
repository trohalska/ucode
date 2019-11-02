int mx_strlen(const char *s);
void mx_swap_char(char *s1, char *s2);

void mx_str_reverse(char *s)
{
	char i = 0;
	while (i <= (mx_strlen(s) / 2)){
		mx_swap_char(s + i, s + mx_strlen(s) - i - 1);
		i++;
	}
}
