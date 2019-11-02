#include "exterminate_agents.h"

void mx_exterminate_agents(t_agent ***agents) {
  if (agents == NULL) return NULL;
  char ***p = agents;
  char **pp = *agents;
  while (**p != NULL) {
    xm_strdel(*p);
    (*p)++;
  }               
  free (pp);
  *agents = NULL;
}
