#include "list.h"

int mx_list_size(t_list *list) {
	int k = 1;
	if (list == NULL)
		return 0;	

	t_list *p = list;
	if (!p) return k;
	while (p && p->next != NULL) {
		k++;
		p = p->next;
	}
	return k;
}
