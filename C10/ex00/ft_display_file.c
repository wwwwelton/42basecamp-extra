//clear && ./ft_display_file ../../C07/ex00/ft_strdup.c
#include <unistd.h>
#include <fcntl.h>

int	main(int argc, char **argv)
{
	int		file_descriptor;
	int		read_byte;
	char	c;

	if (argc > 2)
	{
		write(2, "Too many arguments.\n", 21);
		return (1);
	}
	else if (argc < 2)
	{
		write(2, "File name missing.\n", 20);
		return (1);
	}
	else if (argc == 2)
	{
		file_descriptor = open(argv[1], O_RDONLY);
		if (file_descriptor == -1)
		{
			write(2, "Cannot read file.\n", 19);
			close(file_descriptor);
			return (1);
		}
		while (1)
		{
			read_byte = read(file_descriptor, &c, 1);
			if (read_byte == 0)
				break ;
			if (read_byte == -1)
			{
				write(2, "Cannot read file.\n", 19);
				break ;
			}
			write(1, &c, 1);
		}
		close(file_descriptor);
	}
	return (0);
}

//https://man7.org/linux/man-pages/man2/open.2.html
//https://man7.org/linux/man-pages/man2/read.2.html
//https://man7.org/linux/man-pages/man2/close.2.html
//https://c-for-dummies.com/blog/?p=4046

//https://en.wikipedia.org/wiki/Write_(system_call)

//https://pubs.opengroup.org/onlinepubs/007904875/basedefs/fcntl.h.html

/*
int main(int argc, char **argv)
{
	int	fd;
	char str[74];

	if (argc > 1)
	{
		fd = open(argv[1], O_RDONLY);

		read(fd, &str, 74);
		write(1, &str, 74);
	}
	else
		ft_putstr("File name missing.\n");

	return (0);
}
*/
