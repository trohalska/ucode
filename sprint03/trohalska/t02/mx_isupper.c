#include <stdbool.h>

bool mx_isupper(int c)
{
	bool i=false;
	if (c>='A' && c<='Z')
		i=true;
	return i;
}
