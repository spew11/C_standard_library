#include "libspewc.h"

t_list	*ft_lstlast(t_list *lst) {
	t_list	*now = lst;
	while (now->next) {
		now = now->next;
	}
	return (now);
}
