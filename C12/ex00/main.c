#include <stdio.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data);

int	main(void)
{
	t_list *list;
	int	n;
	int	*ptr;

	n = 15;

	list = ft_create_elem(&n);
	ptr = list->data;

	printf("%d", *((int*)list->data));
	return (0);
}
