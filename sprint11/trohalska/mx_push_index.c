#include "list.h"

void mx_push_index(t_list **list, void *data, int index) {
    if (*list == NULL || list == NULL)
        return;    

    // считаем количество элементов
    int k = 0;
    t_list *p = *list;
    if (!p) return;
    while (p && p->next != NULL) {
        k++;
        p = p->next;
    }

    if (index <= 0)
        mx_push_front(list, data);
    else if (index > k)
        mx_push_back(list, data);
    else {
    	p = *list; // запоминаем начало опять
    	int n = 0;    
    	// находим нужное место в листе
    	while (p && p->next != NULL && n < index - 1) {
        	n++;
        	p = p->next;
    	}
    	t_list *q = mx_create_node(data);
    	t_list *tmp = p->next;
    	p->next = q;
    	q->next = tmp;
    }
}

/*#include <stdio.h>
int main() {  // for pytontutor
    int a = 122;
    int b = 99;
    int c = 66;
    int d = 33;
    t_list *head = mx_create_node(&a);
    t_list *s1 = mx_create_node(&b);
    head->next = s1;
    t_list *s2 = mx_create_node(&c);
    s1->next = s2;    
    mx_push_index(&head, &d, 8);
    return 0;
}*/

#include <stdio.h>
int main() {
    t_list *head = mx_create_node("pa");
    t_list *s1 = mx_create_node("ma");
    head->next = s1;
    t_list *s2 = mx_create_node("sun");
    s1->next = s2;
    mx_push_index(&head, "sun2", 3);

    t_list *q = head;    
       	q = q->next;    
    printf("%s ", head->data);
    printf("%s ", q->data);
    	q = q->next;
    printf("%s ", q->data);
    	q = q->next;
    printf("%s ", q->data);
    return 0;
}
