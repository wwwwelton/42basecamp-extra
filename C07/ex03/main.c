#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int	main(void)
{
	char *strs[] = { "Ola", "Bom", "Diaaaaaa" };
	char *sep = { "!!!" };
	char *dest;

	dest = ft_strjoin(3, strs, sep);
	printf("%s\n", dest);
	free(dest);

	return (0);
}
