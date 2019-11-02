#include <stdlib.h>
#include <stddef.h>
typedef struct s_agent
{
   char *name;
   int power;
   int strength;
} t_agent;
#include <ctype.h>
#include <stdio.h> // DELETE -----------------
t_agent *mx_create_agent(char *name, int power, int strength);
t_agent **mx_create_new_agents(char **name, int *power, int *strength, int count) {
   if (!name || !power || !strength) return NULL;
   // try create array
   t_agent **arr = (t_agent **) malloc((count+1 )* sizeof(t_agent *));
   if (arr == NULL) return NULL;
   // try create agents
   int i;
   for (i = 0; i < count; i++) {
       // try make one
       t_agent *new_agent = mx_create_agent(name[i], power[i], strength[i]);
       if (new_agent == NULL) return NULL;
       arr[i] = new_agent;
       //printf("CHECK i=%d %s %d %d\n",i, arr[i]->name, arr[i]->power, arr[i]->strength);
   }
   arr[i] = NULL;
   //if (arr[i+1] == NULL) printf("CHECK i=%d NULL\n",i);
   // *p = NULL;
   return arr;
}
t_agent *mx_create_agent(char *name, int power, int strength) {
 if (!name) return NULL;
 t_agent *res = NULL;
 res = (t_agent *) malloc(sizeof(t_agent));
 if (!res) return NULL;
 res->name = strdup(name);
 if (res->name == NULL) return NULL;
 res->power = power;
 res->strength = strength;
 return res;
}
int main(void) {
   char *names[] = {"Thompson", "Smith", "Colson"};
   int powers[] = {33, 66, 99};
   int strengths[] = {133, 166, 196};
   t_agent **arr = mx_create_new_agents(names, powers, strengths, 2); //returns 't_agent' type array
   // for (t_agent *p = *arr; p != NULL; p++) {
   //     printf("name=%s, power=%d, strength=%d\n", p->name, p->power, p->strength);
   // }
   //printf("check MAIN %c %d %d\n", arr[0]->name[0], arr[0]->power, arr[0]->strength);
   for (int i = 0; 1; i++) {
       if (arr[i] == NULL) {
           printf("NULL\n");
           break;
       }
       printf("name=%s, power=%d, strength=%d\n", arr[i]->name, arr[i]->power, arr[i]->strength);
   }
   return 0;
}

