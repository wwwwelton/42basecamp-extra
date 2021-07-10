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

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*list;

	if (begin_list == NULL)
		return ;
	list = ft_create_elem(data);
	if (list == NULL)
		return ;
	list->next = *begin_list;
	*begin_list = list;
}
