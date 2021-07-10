#include <stdio.h>
#include "ft_list.h"

t_list	*ft_list_push_strs(int size, char **strs);

void	ft_put_struct(t_list *list)
{
	while(list != 0)
	{
		printf("%s", (char *)(list->data));
		list = list->next;
		if (list)
			printf("\n");
	}
}

int	main(void)
{
	char *strs[] = { "Lorem", "Ipsum", "simply", "dummy", "dolor" };

	ft_put_struct(ft_list_push_strs(5, strs));

	printf("\n");
	return (0);
}
