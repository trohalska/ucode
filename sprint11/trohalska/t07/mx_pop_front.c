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
		if (!p) return;
		free(*list); // удалить
		*list = p; // передать значение следующего
	}
}
