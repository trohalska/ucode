#include <stdbool.h>

bool mx_islower(int c)
{
	bool i=false;
	if (c>='a' && c<='z')
		i=true;
	return i;
}
