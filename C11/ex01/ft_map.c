#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	i;
	int	*tab2;

	tab2 = malloc(sizeof(tab) * length);
	if (tab2 == NULL)
		return (NULL);
	i = 0;
	while (i < length)
	{
		tab2[i] = f(tab[i]);
		i++;
	}
	return (tab2);
}
