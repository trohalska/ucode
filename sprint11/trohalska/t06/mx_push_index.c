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
