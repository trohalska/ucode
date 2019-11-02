#include "list.h"

t_list *mx_create_node(void *data) {
    if (!data) return NULL;
    t_list *temp = malloc(sizeof(t_list));
    if (!temp) return NULL;
    temp->data = data;
    temp->next = NULL;
    return temp;
}

/*#include <stdio.h>
int main() {   
    t_list *s = mx_create_node("dojo");
    printf("%s", s->data);
    return 0;
}*/
