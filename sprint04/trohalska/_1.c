#include <stdbool.h>

bool mx_isdigit(int c);
bool mx_isspace(char c);

int mx_atoi(const char *str) {
	int n = 0;
	int i = 0;

	

	if (!mx_isdigit(str[i]))
		return 0;

	while (!mx_isdigit(str[i]))
		if (mx_isdigit(str[i])) {
			n = n * 10 + (*str) + '0';
			i++;
		}
		
	return n;
}

#include <stdio.h>

int main() {
	char n[10] = {0, 7, 8, 'j', 'k'};
	int m = mx_atoi(n);
	printf("%d", m);
	return 0;
}
