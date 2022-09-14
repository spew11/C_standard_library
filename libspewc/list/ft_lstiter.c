#include "libspewc.h"

void	ft_lstiter(t_list *lst, void (*f)(void *)) {
	t_list	*now = lst;
	while (now) {
		f(now->content);
		now = now->next;
	}
	return ;
}
