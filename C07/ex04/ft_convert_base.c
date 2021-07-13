#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_base_index_to_int(char nbr, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (nbr == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_check_base(char *base)
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
		if (count > 1 || base[i] == '+' || base[i] == '-'
			|| base[i] == ' ' || (base[i] >= 9 && base[i] <= 13))
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strdup(char *str)
{
	char	*dest;
	int		i;

	dest = (char *)malloc(sizeof(str) * ft_strlen(str) + 1);
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_atoi_base(char *str, char *base)
{
	int		temp;
	int		signal;
	char	*nb;
	int		i;

	temp = 0;
	signal = 1;
	nb = ft_strdup(str);
	if (nb == NULL)
		return (0);
	i = 0;
	while (nb[i] == '+' || nb[i] == '-' || nb[i] == ' '
		|| (nb[i] >= 9 && nb[i] <= 13))
	{
		if (nb[i] == '-')
			signal = -signal;
		i++;
	}
	while (nb[i])
	{
		temp = (temp * ft_strlen(base)) + ft_base_index_to_int(nb[i], base);
		i++;
	}
	free(nb);
	return (temp * signal);
}
