#include "list.h"

void mx_push_back(t_list **list, void *data) {    
    
    t_list *tmp = mx_create_node(data); // создать новый нод
    if (!tmp) return;
    t_list *p = *list;
    if (*list == NULL) { // найти нульовый нод
        *list = tmp;
        return;
    }
    else {
        while (p->next != NULL) // найти нульовый нод
            p = p->next;
        p->next = tmp; // присвоить
    }
}

/*#include <stdio.h>
int main() {  // for pytontutor
	int a = 125;
	int b = 99;
	int c = 50;
	t_list *head = mx_create_node(&a);
	t_list *s1 = mx_create_node(&b);
	head->next = s1;
	mx_push_back(&head, &c);
    return 0;
}

#include <stdio.h>
int main() {
    t_list *head = mx_create_node("ma");
    t_list *s1 = mx_create_node("pa");
    head->next = s1;
    mx_push_back(&head, "ss");    
    
    t_list *q = head;
    while (q && q->next != NULL) {
        q = q->next;
    }
    printf("%s ", head->data);
    printf("%s ", s1->data);
    printf("%s ", q->data);
    
    return 0;
}*/
