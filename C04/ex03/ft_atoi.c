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

int	ft_atoi(char *str)
{
	int	nb;
	int	signal;

	signal = 1;
	nb = 0;
	while ((*str == '-' || *str == '+' || ft_isspace(*str)) && *str != '\0')
	{
		if (*str == '-')
			signal = -signal;
		str++;
	}
	while (*str >= '0' && *str <= '9' && *str != '\0')
	{
		nb = (nb * 10) + (*str - '0');
		str++;
	}
	return (nb * signal);
}
