#include <stdlib.h>

int	ft_strlen(char *str);
int	ft_check_base(char *base);
int	ft_atoi_base(char *str, char *base);

void	ft_strev(char *str)
{
	char	temp;
	int		i;
	int		len;

	len = ft_strlen(str);
	i = 0;
	while (i < (len / 2))
	{
		temp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = temp;
		i++;
	}
}

void	ft_putnbr_base(long int nbr, char *base, char *result, int signal)
{
	int	i;

	i = 0;
	if (nbr == 0)
	{
		result[i] = '0';
		i++;
	}
	while (nbr > 0)
	{
		result[i] = base[nbr % ft_strlen(base)];
		i++;
		nbr = nbr / ft_strlen(base);
	}
	if (signal)
	{
		result[i] = '-';
		i++;
	}
	result[i] = '\0';
	ft_strev(result);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long int	temp;
	long int	n;
	int			digits;
	int			signal;
	char		*result;

	if (!ft_check_base(base_from) || !ft_check_base(base_to))
		return (NULL);
	temp = ft_atoi_base(nbr, base_from);
	signal = 0;
	if (temp < 0)
	{
		temp = -temp;
		signal = 1;
	}
	digits = 0;
	n = temp;
	while (n)
	{
		n = n / ft_strlen(base_to);
		digits++;
	}
	result = (char *)malloc(sizeof(result) * (digits + signal + 1));
	ft_putnbr_base(temp, base_to, result, signal);
	return (result);
}
