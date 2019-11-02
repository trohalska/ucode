#include "list.h"

void mx_foreach_list(t_list *list, void (*f)(t_list *node)) {
	if (list == NULL)
		return;	

	t_list *p = list;
	if (!p) return;
	while (p && p->next != NULL) {
		f(p);
		p = p->next;
	}
}
