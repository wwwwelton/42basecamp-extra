#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list);

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

	n1 = 42;
	list = ft_create_elem(&n1);

	n2 = 2;
	ft_list_push_front(tab_list, &n2);

	n3 = 3;
	ft_list_push_front(tab_list, &n3);

	ft_put_struct(ft_list_last(*tab_list));

	printf("\n");
	return (0);
}
