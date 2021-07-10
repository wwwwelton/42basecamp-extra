#include "ft.h"

int	ft_ctoi(int argc, char **argv)
{
	int	i;
	int	j;
	int	nbytes;

	nbytes = 0;
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (argv[i][0] == '-' && argv[i][1] == 'c')
				if (argv[i][j] >= '0' && argv[i][j] <= '9')
					nbytes = nbytes * 10 + (argv[i][j] - '0');
			j++;
		}
		i++;
	}
	return (nbytes);
}
