#include "libspewc.h"

void	ft_lstclear(t_list **lst, void (*del)(void *)) {
	t_list	*now = *lst;
	t_list	*tmp;
	while (now) {
		del(now->content);
		tmp = now;
		now = now->next;
		free(tmp);
	}
	*lst = 0;
	return ;
}
