#include "list.h"

void mx_clear_list(t_list **list) {	
	if (*list == NULL || list == NULL)
		return;	
		
	t_list *p = *list; // запомнить начало
	if (!p) return;
	while (p != NULL) { // найти предпоследний
		t_list *tmp = p->next;		
		free(p); // удалить последний
		p = tmp; // указатель на NULL
	}
    *list = NULL;
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
    void *a = "pa";
    void *b = "ma";
    void *c = "son";
    //int d = 33;
    t_list *head = mx_create_node(a);
    t_list *s1 = mx_create_node(b);
    head->next = s1;
    t_list *s2 = mx_create_node(c);
    s1->next = s2;
    
    t_list *q = head;
    while (q->next != NULL) {    
        printf("%s ", q->data);
        q = q->next;        
    }
    printf("%s ", q->data);

    mx_clear_list(&head);

    while (q->next != NULL) {    
        printf("%s ", q->data);
        q = q->next;        
    }
    printf("%s ", q->data);
    return 0;
}*/
