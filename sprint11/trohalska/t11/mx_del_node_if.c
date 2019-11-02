#include "list.h"

void mx_pop_front(t_list **list) {  
    if (*list == NULL || list == NULL)
        return; 
    
    if ((*list)->next == NULL) { // если первый нульовый нод
        free(*list); // удалить
        *list = NULL; // указатель начала NULL
        return;
    }
    else {
        t_list *p = (*list)->next; // запомнить следующий
        free(*list); // удалить
        *list = p; // передать значение следующего
    }
}

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
    else if (index >= k)
        mx_pop_back(list);
    else {
        p = *list; // запоминаем начало опять
        int n = 0;    
        // находим нужное место в листе
        while (p && p->next != NULL && n < index - 1) {
            n++;
            p = p->next;
        }        
        t_list *tmp = p->next;
        p->next = p->next->next;
        free(tmp);       
    }
}

void mx_del_node_if(t_list **list, void *del_data, bool (*cmp)(void *a, void *b)) {
    if (*list == NULL ||list == NULL || cmp == NULL)
        return;
    int i = 0;    
    for (t_list *q = *list; q != NULL; q = q->next) {    
        if (cmp(q->data, del_data))
            mx_pop_index(list, i);
        i++;
    }    
}
