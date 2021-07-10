#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max);

int		main(void)
{
	int	*range;
	int	i;
	int min;
	int max;
	int result;

	min = 0;
	max = 10;

	result = ft_ultimate_range(&range, min, max);
	i = 0;
	while(i < (max - min))
	{
		printf("%d ", range[i]);
		i++;
	}
	printf("\nResult: %d", result);

	return (0);
}
