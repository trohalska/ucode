#include <stdbool.h>

bool mx_multiple_number(int n, int mult)
{
	bool i=false;
	if (mult%n==0)
		i=true;
	return i;
}
