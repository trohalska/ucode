#include "list.h"

void mx_pop_back(t_list **list) {	
	if (*list == NULL || list == NULL)
		return;	
	
	if ((*list)->next == NULL) { // найти нульовый нод
		free(*list); // удалить
		*list = NULL; // указатель начала NULL
		return;
	}
	else {
		t_list *p = *list; // запомнить начало
		if (!p) return;
		while (p && p->next->next != NULL) // найти предпоследний
			p = p->next;
		free(p->next); // удалить
		p->next = NULL; // указатель на NULL
	}
}

/*#include <stdio.h>
int main() {  // for pytontutor
	int a = 125;
	int b = 99;	
	t_list *head = mx_create_node(&a);
	t_list *s1 = mx_create_node(&b);
	head->next = s1;
	mx_pop_back(&head);
    return 0;
}

t_list *mx_create_node(void *data) {
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
    mx_pop_back(&head);

    t_list *q = head;
    while (q && q->next != NULL) {
        q = q->next;
    }
    printf("%s ", head->data);
    printf("%s ", q->data);
    return 0;
}*/
