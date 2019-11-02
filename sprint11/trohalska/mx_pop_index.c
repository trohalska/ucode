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
    mx_pop_index(&head, 3);

    t_list *q = head;
    while (q->next != NULL) {    
        printf("%s ", q->data);
        q = q->next;        
    }
    printf("%s ", q->data);
    return 0;
}*/
