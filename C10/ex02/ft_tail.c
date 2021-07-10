#include "ft.h"

int	main(int argc, char **argv)
{
	int		i;
	int		nbytes;
	char	*str;

	nbytes = ft_ctoi(argc, argv);
	i = 1;
	while (i < argc && argv[i][0] != '-')
	{
		str = ft_filecpy(argv[i], str);
		if (argc > 3 && str)
		{
			write(1, "==> ", 4);
			write(1, basename(argv[i]), ft_strlen(basename(argv[i])));
			write(1, " <==", 4);
			write(1, "\n", 1);
		}
		if (str)
			ft_putstrn(str, nbytes);
		i++;
	}
	free(str);
	return (0);
}
