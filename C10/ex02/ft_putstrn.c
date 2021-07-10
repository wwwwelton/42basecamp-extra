#include "ft.h"

void	ft_putstrn(char *str, int index)
{
	int	i;

	i = ft_strlen(str) - index;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}
