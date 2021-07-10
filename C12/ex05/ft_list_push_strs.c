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

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*list_last_elem;
	t_list	*tab_list;
	t_list	*list;
	int		i;

	i = 0;
	list = ft_create_elem(strs[i]);
	tab_list = list;
	i++;
	while (i < size)
	{
		list_last_elem = ft_list_last(list);
		list = ft_create_elem(strs[i]);
		list_last_elem->next = list;
		i++;
	}
	return (tab_list);
}
