#include "create_new_agents.h"

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
