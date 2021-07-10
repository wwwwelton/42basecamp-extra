#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_check_valid_base(char *base)
{
	int	i;
	int	j;
	int	count;

	if (ft_strlen(base) < 2)
		return (0);
	i = 0;
	while (base[i] != '\0')
	{
		count = 0;
		j = 0;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				count++;
			j++;
		}
		if (base[i] == '+' || base[i] == '-' || count > 1)
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int	temp;

	if (ft_check_valid_base(base))
	{
		temp = nbr;
		if (temp < 0)
		{
			ft_putchar('-');
			temp = -temp;
		}
		if (temp < ft_strlen(base))
			ft_putchar(base[temp]);
		if (temp >= ft_strlen(base))
		{
			ft_putnbr_base(temp / ft_strlen(base), base);
			ft_putnbr_base(temp % ft_strlen(base), base);
		}
	}
}
