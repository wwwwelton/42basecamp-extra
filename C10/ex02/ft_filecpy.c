#include "ft.h"

char	*ft_filecpy(char *file, char *str)
{
	int		fd;
	int		i;
	char	c;

	if (ft_filelen(file) == -1)
		return ('\0');
	str = malloc(sizeof(str) * ft_filelen(file) + 1);
	fd = open(file, O_RDONLY);
	i = 0;
	while (read(fd, &c, 1))
	{
		str[i] = c;
		i++;
	}
	str[i] = '\0';
	return (str);
}
