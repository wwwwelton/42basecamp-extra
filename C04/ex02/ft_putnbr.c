#include <unistd.h>

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

// void	ft_putnbr(int nb)
// {
// 	if (nb == -2147483648)
// 	{
// 		write(1, "-2147483648", 11);
// 		return ;
// 	}
// 	if (nb < 0)
// 	{
// 		ft_putchar('-');
// 		nb = -nb;
// 	}
// 	if (nb < 10)
// 	{
// 		ft_putchar(nb + '0');
// 	}
// 	if (nb >= 10 && nb <= 2147483647)
// 	{
// 		ft_putnbr(nb / 10);
// 		ft_putnbr(nb % 10);
// 	}
// }
