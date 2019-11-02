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
