#include "create_agent.h"

t_agent *mx_create_agent(char *name, int power, int strength) {
  
  // try to create an array 
  t_agent *p = malloc(sizeof(t_agent));
	if (!p) return NULL;
	if (!*name) return NULL;
	
	p->name = mx_strdup(name);
	p->power = power;
	p->strength = strength;
return p;
}

int main (void) {
t_agent *arr = mx_create_agent("Smith", 150, 66);
printf("name=%s, power=%d, strength=%d\n", arr->name, arr->power, arr->strength);
return 0;
}
