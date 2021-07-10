#include <stdio.h>
#include <string.h>

char	*ft_strdup(char *src);

int	main(void)
{
	char	*str = { "Teste1" };
	char	*dest;

	char	*str2 = { "Teste2" };
	char	*dest2;

	dest2 = strdup(str2);
	dest = ft_strdup(str);

	printf("   STRDUP: %s\n", dest2);
	printf("FT_STRDUP: %s\n", dest);
	return (0);
}
