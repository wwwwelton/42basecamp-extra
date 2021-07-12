#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_matrixlen(int size, char **str)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (i < size)
	{
		count = count + ft_strlen(str[i]);
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	size_d;

	size_d = ft_strlen(dest);
	i = 0;
	while (src[i])
	{
		dest[size_d + i] = src[i];
		i++;
	}
	dest[i + size_d] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		total_size;
	char	*str;

	if (size == 0)
		return ((char *)malloc(1));
	total_size = ft_matrixlen(size, strs) + ft_strlen(sep) + 1;
	str = (char *)malloc(sizeof(strs) * total_size);
	if (str == NULL)
		return ((void *)0);
	i = 0;
	while (i < size)
	{
		str = ft_strcat(str, strs[i]);
		if (i < size - 1)
			str = ft_strcat(str, sep);
		i++;
	}
	return (str);
}
