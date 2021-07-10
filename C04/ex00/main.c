#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	printf("%d\n", ft_strlen(""));
	printf("%d\n", ft_strlen("N"));
	printf("%d\n", ft_strlen("No"));
	printf("%d\n", ft_strlen("Nom"));
	printf("%d\n", ft_strlen("Nome"));
	printf("%d\n", ft_strlen("Nome1"));
	return (0);
}
