#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_is_printable(char c)
{
	if (c >= 32 && c <= 126)
		return (c);
	return (0);
}

void	ft_print_hex(int nbr)
{
	if (nbr < 16)
	{
		if (nbr > 9)
			ft_putchar(nbr + 87);
		else
			ft_putchar(nbr + '0');
		return ;
	}
	if (nbr >= 16)
	{
		ft_print_hex(nbr / 16);
		ft_print_hex(nbr % 16);
	}
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (ft_is_printable(*str))
			write(1, str, 1);
		else
		{
			if (*str < 0)
			{
				str++;
				continue ;
			}
			write(1, "\\", 1);
			if (*str < 16)
				ft_putchar('0');
			ft_print_hex(*str);
		}
		str++;
	}
}
