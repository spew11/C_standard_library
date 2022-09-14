#include "libspewc.h"

t_list	*ft_lstnew(void *content) {
	t_list	*new = (t_list *)malloc(sizeof(t_list) * 1);
	new->content = content;
	new->next = 0;
	return new;
}
