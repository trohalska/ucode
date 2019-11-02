#include "list.h"

void mx_push_front(t_list **list, void *data) {	
	if (!*list || !list || !data) return;
	t_list *tmp = mx_create_node(data);
	tmp->next = (*list);
	*list = tmp;
}

/*#include <stdio.h>
int main() {
    t_list *t = mx_create_node("mama");
    mx_push_front(&t, "papa");
    printf("%s", t->data);    
    return 0;
}*/
