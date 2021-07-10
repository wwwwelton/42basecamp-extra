#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*list;

	list = (t_list *)malloc(sizeof(t_list));
	list->data = data;
	list->next = NULL;
	return (list);
}

t_list	*ft_list_last(t_list *begin_list)
{
	while (begin_list->next)
		begin_list = begin_list->next;
	return (begin_list);
}

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*list_last_elem;
	t_list	*list;

	if (begin_list == NULL)
		return ;
	list_last_elem = ft_list_last(*begin_list);
	list = ft_create_elem(data);
	if (list == NULL)
		return ;
	list_last_elem->next = list;
}
