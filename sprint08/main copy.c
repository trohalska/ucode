#include <stdlib.h>
#include <stddef.h>


char *mx_strnew(const int size) {
  char *p = 0;
  if (size < 0){
    return NULL;
  }
 
 p = (char*) malloc((size + 1) * sizeof(char));
  if(p == NULL)
    return 0;
  for (int i = 0; i < size + 1; i++)
    p[i] = '\0';
  return p;
}

char *mx_strcpy(char *dst, const char *src)
{
    int i = 0;
    while (*src != '\0')
        {
        *(dst + i) = *src;
        i++;
        src++;
        }
    return dst;
}

int mx_strlen(const char *s) {
    int z = 0;
    while (s[z] != '\0')
        z++;
    return z;
}


char *mx_strdup(const char *str) {
  char *p = 0;
  if (!*str) {
    printf ("%s", "fault"); //for me, need to be deleted
    return 0;
  }

  p = mx_strnew(mx_strlen(str));
  if(p == NULL)
    return 0;
  p = mx_strcpy(p, str);
  return p;
}
typedef struct s_agent
{
    char *name;
    int power;
    int strength;
} t_agent;

t_agent *mx_create_agent(char *name, int power, int strength) {
  t_agent *p = malloc(sizeof(t_agent));
  if (!p) return NULL;
  p->name = mx_strdup(name);
  p->power = power;
  p->strength = strength;
  return p;
}

t_agent **mx_create_new_agents(char **name, int *power, int *strength, int count) {
  if (!name || !power || !strength || count < 1) return NULL;

  // try to create an array + 1 for NULL                                                          
  t_agent **p = (t_agent **) malloc((count + 1)*sizeof(t_agent *));
  if (!p) return NULL;

  // try to create an agents
  int i = 0;
  for (i; i < count; i++) {
    t_agent *new_agent = mx_create_agent(name[i], power[i], strength[i]);
      if (!new_agent) return NULL;
    p[i] = new_agent;
  }
  p[count] = NULL;  
  return p;
}

int main(void) {
  t_agent ***p = (t_agent ***) malloc(sizeof(t_agent *));
  if (!p) return NULL;
  return 0;
}
