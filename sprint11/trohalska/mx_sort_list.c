#include "list.h"

bool cmp(void *a, void *b) {
	if (*(int *)a > *(int *)b)
		return true;
	else return false;
}

t_list *mx_sort_list(t_list *list, bool (*cmp)(void *a, void *b)) {
    if (list == NULL || cmp == NULL)
        return NULL;

    for (t_list *i = list; i->next != NULL; i = i->next) {
        t_list *m = i;   	
    	for (t_list *j = i->next; j != NULL; j = j->next) {
    		if (cmp(m->data, j->data))
                m = j;
            // swap
    		void *tmp = m->data;
    		m->data = i->data;
    		i->data = tmp;    		
    	}
	}
    return list;
}

t_list *mx_create_node(void *data) {
    if (!data) return NULL;
    t_list *temp = malloc(sizeof(t_list));
    if (!temp) return NULL;
    temp->data = data;
    temp->next = NULL;
    return temp;
}

void printlist(t_list *list) {
	t_list *q = list;
    while (q->next != NULL) {    
        printf("%s ", q->data);
        q = q->next;
	}
	printf("%s ", q->data); 
}

int main() {
    char *a = "6";
    char *b = "4";
    char *c = "8";
    char *d = "2";
    t_list *head = mx_create_node(a);
    t_list *s1 = mx_create_node(b);
    t_list *s2 = mx_create_node(c);
    t_list *s3 = mx_create_node(d);
    head->next = s1;
    s1->next = s2;
    s2->next = s3;
    
	printlist(head);
	printf("\n");
    t_list *f = mx_sort_list(head, cmp);
    printlist(f);
    return 0;
}
