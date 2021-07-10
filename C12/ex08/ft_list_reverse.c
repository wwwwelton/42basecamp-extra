#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*list_prev;
	t_list	**list_current;
	t_list	*list_next;

	list_prev = (void *)0;
	list_current = begin_list;
	while ((*list_current))
	{
		list_next = (*list_current)->next;
		(*list_current)->next = list_prev;
		list_prev = (*list_current);
		(*list_current) = list_next;
	}
	(*list_current) = list_prev;
}
