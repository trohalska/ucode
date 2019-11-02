#include "create_new_agents.h"

t_agent **mx_create_new_agents(char **name, int *power, int *strength, int count) {
  if (!name || !power || !strength || count < 1 || count == NULL) return NULL;

  // try to create an array + 1 for NULL                                                          
  t_agent **p = (t_agent **) malloc((count + 1)*sizeof(t_agent *));
  if (!p) return NULL;

  // try to create an agents
  for (int i = 0; i < count; i++) {
    t_agent *new = mx_create_agent(name[i], power[i], strength[i]);
      if (!new) return NULL;
    p[i] = new;
  }
  p[count] = NULL;  
  return p;
}
