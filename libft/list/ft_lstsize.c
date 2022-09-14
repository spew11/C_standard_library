#include "libspewc.h"

int	ft_lstsize(t_list *lst) {
	int size = 0;
	t_list	*now = lst;
	while (now) {
		size++;
		now = now->next;
	}
	return size;
}
