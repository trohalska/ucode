#include "list.h"

void mx_pop_index(t_list **list, int index) {
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
        mx_pop_front(list);
    else if (index > k)
        mx_pop_back(list);
    else {
        p = *list; // запоминаем начало опять
        int n = 0;    
        // находим нужное место в листе
        while (p && p->next != NULL && n < index - 1) {
            n++;
            p = p->next;
        }        
        t_list *tmp = p->next->next;
        free(p->next);
        p->next = tmp;
    }
}
