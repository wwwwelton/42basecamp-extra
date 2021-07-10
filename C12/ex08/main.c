//clear && valgrind ./a.out *.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list);

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

void	ft_put_struct(t_list *list)
{
	while(list != 0)
	{
		printf("%s | %p", (char *)(list->data), list->data);
		list = list->next;
		if (list)
			printf("\n");
	}
}

int	main(void)
{
	t_list **tab_list;
	t_list *list;
	char *str1;
	char *str2;
	char *str3;
	char *str4;

	str1 = strdup("Lorem");
	str2 = strdup("Ipsum");
	str3 = strdup("Dorim");
	str4 = strdup("dolor");

	tab_list = &list;

	list = ft_create_elem(str1);
	ft_list_push_back(tab_list, str2);
	ft_list_push_back(tab_list, str3);
	ft_list_push_back(tab_list, str4);

	ft_put_struct(*tab_list);
	printf("\n");

	printf("----------------");
	printf("\n");

	ft_list_reverse(tab_list);

	ft_put_struct(*tab_list);
	printf("\n");

	return (0);
}
