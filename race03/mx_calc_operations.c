#include "minilibmx.h"
#include "calculator.h"

t_operation *mx_calc_operations(char *oper) {	

	char *ADD = "+";
	char *SUB = "-";
	char *MUL = "*";
	char *DIV = "/";
	char *MOD = "%";
	
	t_operation *p = malloc(sizeof(t_operation));
	if (!p) return NULL;

	p->op = *oper;
	
	if (mx_strcmp(oper, ADD) == 0) {
		p->f = mx_add;
	}
	if (mx_strcmp(oper, SUB) == 0) {
		p->f = mx_sub;
	}
	if (mx_strcmp(oper, MUL) == 0) {
		p->f = mx_mul;
	}
	if (mx_strcmp(oper, DIV) == 0) {
		p->f = mx_div;
	}
	if (mx_strcmp(oper, MOD) == 0) {
		p->f = mx_mod;
	}
	return p;	
}

int mx_add(int a, int b) {
	int x = a + b;
	return x;}
int mx_sub(int a, int b) {
	int x = a - b;
	return x;}
int mx_mul(int a, int b) {
	int x = a * b;
	return x;}
int mx_div(int a, int b) {
	int x = a / b;
	return x;}
int mx_mod(int a, int b) {
	int x = a % b;
	return x;}
