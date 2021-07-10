#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	if(min >= max)
		return (0);
	range = malloc(sizeof(range) * (max - min));
	i = 0;
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}
