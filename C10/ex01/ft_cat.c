#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <fcntl.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	char	c;
	int		fd;
	int		i;

	if (argc < 2 || argv[1][0] == '-')
	{
		while (read(0, &c, 1))
			write(1, &c, 1);
		return (0);
	}
	if (argc >= 2)
	{
		i = 1;
		while(i < argc)
		{
			fd = open(argv[i], O_RDONLY);
			if (fd < 0)
			{
				write(2, strerror(errno), ft_strlen(strerror(errno)));
				return (errno);
			}
			while (read(fd, &c, 1))
				write(1, &c, 1);
			i++;
		}
	}
	if (close(fd) < 0)
	{
		write(2, strerror(errno), ft_strlen(strerror(errno)));
		return (errno);
	}
	return (0);
}

//https://pubs.opengroup.org/onlinepubs/7908799/xsh/read.html
//https://man7.org/linux/man-pages/man2/open.2.html

//https://pubs.opengroup.org/onlinepubs/7908799/xsh/unistd.h.html

/*
i = 0;
	if(argc < 2 || argv[1][0] == '-')
	{
		while(read(0, &str_cat[i], 1))
			i++;
		write(1, str_cat, i);
	}
	*/

/*
char c;
	int	bytes_count;

	bytes_count = 0;
	if(argc < 2)
	{
		while(read(0, &c, 1))
		{
			write(1, &c, 1);
			bytes_count++;
		}
	}
*/

	// if(argc < 2 || argv[1][0] == '-')
	// {
	// 	while(read(0, &str_cat[i], 1))
	// 	{
	// 		i++;
	// 		write(1, str_cat, i);
	// 	}
	// }

// if(read(0, &c, 1) == -1)
// 		{
// 			write(1, strerror(errno), ft_strlen(strerror(errno)));
// 		}
