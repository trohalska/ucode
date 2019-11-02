#include "minilibmx.h"
#include "calculator.h"

t_operation *mx_calc_operations(char *oper);

int main(int c, char **v) {
	//int res = 0;

	if(!mx_calc_check(c, v))
		return 0;
	
	int r1 = atoi(v[1]);
	int r2 = atoi(v[3]);
	
	t_operation *res = mx_calc_operations(v[2]);

	mx_printint(res->f(r1, r2));

	return 0;
}
