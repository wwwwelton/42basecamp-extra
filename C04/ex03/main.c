#include <unistd.h>

int	ft_atoi(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	temp;
	int			div;

	temp = nb;
	div = 1;
	if (temp < 0)
	{
		ft_putchar('-');
		temp = -temp;
	}
	while (nb / 10 != 0)
	{
		nb = nb / 10;
		div = div * 10;
	}
	while (div != 0)
	{
		ft_putchar(temp / div + '0');
		temp = temp % div;
		div = div / 10;
	}
}

int	main(void)
{
	ft_putnbr(ft_atoi("-0abc0"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi(" --+--42  "));
	ft_putchar('\n');
	ft_putnbr(ft_atoi(" --+-42 ab "));
	ft_putchar('\n');
	ft_putnbr(ft_atoi(" ---+--+1234ab567"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi(" 2147483647a "));
	ft_putchar('\n');
	ft_putnbr(ft_atoi(" -2147483648a "));
	ft_putchar('\n');

	return (0);
}
