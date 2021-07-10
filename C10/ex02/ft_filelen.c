#include "ft.h"

int	ft_filelen(char *file)
{
	int		fd;
	int		i;
	char	c;

	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		write(2, strerror(errno), ft_strlen(strerror(errno)));
		write(1, "\n", 1);
		return (-1);
	}
	i = 0;
	while (read(fd, &c, 1))
		i++;
	close(fd);
	return (i);
}
