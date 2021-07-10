#include <unistd.h>
#include <limits.h>
#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int));

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr == INT_MIN)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr < 10)
		ft_putchar(nbr + '0');
	if (nbr >= 10 && nbr <= INT_MAX)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
}

int	ft_mult_two(int n)
{
	n = n * 2;
	return (n);
}

int	main(void)
{
	int	i;
	int	tab[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int	*tab2;

	tab2 = ft_map(tab, 10, &ft_mult_two);

	i = 0;
	while(i < 10)
	{
		ft_putnbr(tab2[i]);
		if (i < 9)
			ft_putchar(' ');
		i++;
	}
	free(tab2);
	return (0);
}
