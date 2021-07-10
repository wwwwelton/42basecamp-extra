#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str++))
		i++;
	return (i);
}

int	ft_isspace(char c)
{
	if (
		c == ' '
		|| c == '\f'
		|| c == '\n'
		|| c == '\r'
		|| c == '\t'
		|| c == '\v'
	)
		return (1);
	return (0);
}

int	ft_mini_atoi(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_check_valid_base(char *base)
{
	int	i;
	int	j;
	int	count;

	if (ft_strlen(base) < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		count = 0;
		j = 0;
		while (base[j])
		{
			if (base[i] == base[j])
				count++;
			j++;
		}
		if (count > 1
			|| base[i] == '+' || base[i] == '-'
			|| ft_isspace(base[i]))
			return (0);
		i++;
	}
	return (1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	nbr;
	int	signal;

	signal = 1;
	nbr = 0;
	if (ft_check_valid_base(base))
	{
		while ((*str == '+' || *str == '-' || ft_isspace(*str)) && *str)
		{
			if (*str == '-')
				signal = -signal;
			str++;
		}
		while (*str && ft_mini_atoi(*str, base) > -1)
		{
			nbr = (nbr * ft_strlen(base)) + ft_mini_atoi(*str, base);
			str++;
		}
	}
	return (nbr * signal);
}
