#include "minilibmx.h"
#include "calculator.h"

bool mx_calc_check(int c, char **v) {
	
	bool k = true;

	char *s[] = {"+", "-", "*", "/", "%"};
	char *z[] = {"0"};

	char INCORRECT_OPERAND[] = "error: invalid number\n";
	char INCORRECT_OPERATION[] = "error: invalid operation\n";
	char DIV_BY_ZERO[] = "error: division by zero\n";

	// check for arguments and operations)

	if (c < 4) {
		mx_printerr(INCORRECT_OPERATION);
		k = false;
	} 
	if (mx_strcmp(v[2], s[0]) != 0
		&& mx_strcmp(v[2], s[1]) != 0
		&& mx_strcmp(v[2], s[2]) != 0
		&& mx_strcmp(v[2], s[3]) != 0
		&& mx_strcmp(v[2], s[4]) != 0) {
			mx_printerr(INCORRECT_OPERATION);
			k = false;
	}

	// check if operators is digits
	if (!mx_isvalid(v[1]) || !mx_isvalid(v[3])) {
		mx_printerr(INCORRECT_OPERAND);
		k = false;
	}

	// check div on 0
	if (mx_strcmp(v[3], z[0]) == 0) {
		mx_printerr(DIV_BY_ZERO);
		k = false;
	}
	return k;
}
