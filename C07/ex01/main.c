#include <stdio.h>

int		*ft_range(int min, int max);

int		main(void)
{
	int	*range;
	int	i;
	int min;
	int max;

	min = -1;
	max = 10;

	range = ft_range(min, max);
	i = 0;
	while(i < (max - min))
	{
		printf("%d ", range[i]);
		i++;
	}

	return (0);
}
