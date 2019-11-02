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
