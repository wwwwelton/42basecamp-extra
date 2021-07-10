#include <stdio.h>
#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data);

void	ft_put_struct(t_list *list)
{
	while(list != 0)
	{
		printf("%d", *((int *)list->data));
		list = list->next;
		if (list)
			printf("\n");
	}
}

int	main(void)
{
	t_list **tab_list;
	t_list *list;
	int	n1;
	int	n2;
	int	n3;

	tab_list = &list;

	n1 = 0;
	list = ft_create_elem(&n1);

	n2 = 1;
	list->next = ft_create_elem(&n2);

	n3 = 3;
	ft_list_push_front(tab_list, &n3);

	ft_put_struct(*tab_list);

	printf("\n");
	return (0);
}
