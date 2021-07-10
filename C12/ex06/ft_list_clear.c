#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list	*list_current;
	t_list	*list_next;

	list_current = begin_list;
	while (list_current != 0)
	{
		list_next = list_current->next;
		free_fct(list_current->data);
		free_fct(list_current);
		list_current = list_next;
	}
}
