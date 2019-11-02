#include "list.h"

int mx_list_size(t_list *list) {
	int k = 1;
	if (list == NULL)
		return 0;	

	t_list *p = list;
	if (!p) return k;
	while (p && p->next != NULL) {
		k++;
		p = p->next;
	}
	return k;
}

/*t_list *mx_create_node(void *data) {
    if (!data) return NULL;
    t_list *temp = malloc(sizeof(t_list));
    if (!temp) return NULL;
    temp->data = data;
    temp->next = NULL;
    return temp;
}

#include <stdio.h>
int main() {
    t_list *head = mx_create_node("ma");
    t_list *s1 = mx_create_node("pa");
    head->next = s1;
    t_list *s2 = mx_create_node("ss");
    s1->next = s2;
    
    int k = mx_list_size(head);
    
    printf("%d", k);
    return 0;
}*/
