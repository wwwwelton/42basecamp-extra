#include <stdio.h>
#include <stdlib.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int	main(void)
{
	char *nbr = { "52" };
	char *base_from = { "0123456789" };
	char *base_to = { "01" };
	char *result;

	result = ft_convert_base(nbr, base_from, base_to);
	printf("BASE:     52\n");
	printf("RESULT:   %s\n", result);
	printf("EXPECTED: 110100\n\n");

	printf("NBR: %s | BASE_FROM: %s | BASE_TO: %s\n", nbr, base_from, base_to);
	printf("NBR: 52 | BASE_FROM: 0123456789 | BASE_TO: 01\n\n");

	result = ft_convert_base("-1", "0123456789", "01");
	printf("BASE:     -1\n");
	printf("RESULT:   %s\n", result);
	printf("EXPECTED: -1\n\n");

	result = ft_convert_base("0", "0123456789", "01");
	printf("BASE:     0\n");
	printf("RESULT:   %s\n", result);
	printf("EXPECTED: 0\n\n");

	result = ft_convert_base("42", "0123456789", "01");
	printf("BASE:     42\n");
	printf("RESULT:   %s\n", result);
	printf("EXPECTED: 101010\n\n");

	result = ft_convert_base("-42", "0123456789", "01");
	printf("BASE:     -42\n");
	printf("RESULT:   %s\n", result);
	printf("EXPECTED: -101010\n\n");

	result = ft_convert_base("--42", "0123456789", "01");
	printf("BASE:     --42\n");
	printf("RESULT:   %s\n", result);
	printf("EXPECTED: 101010\n\n");

	result = ft_convert_base("2147483647", "0123456789", "0123456789");
	printf("BASE:     2147483647\n");
	printf("RESULT:   %s\n", result);
	printf("EXPECTED: 2147483647\n\n");

	result = ft_convert_base("2147483647", "0123456789", "01");
	printf("BASE:     2147483647\n");
	printf("RESULT:   %s\n", result);
	printf("EXPECTED: 1111111111111111111111111111111\n\n");

	result = ft_convert_base("2147483647", "0123456789", "0123456789ABCDEF");
	printf("BASE:     2147483647\n");
	printf("RESULT:   %s\n", result);
	printf("EXPECTED: 7FFFFFFF\n\n");

	result = ft_convert_base("-2147483648", "0123456789", "0123456789");
	printf("BASE:     -2147483648\n");
	printf("RESULT:   %s\n", result);
	printf("EXPECTED: -2147483648\n\n");

	result = ft_convert_base("-2147483648", "0123456789", "01");
	printf("BASE:     -2147483648\n");
	printf("RESULT:   %s\n", result);
	printf("EXPECTED: -10000000000000000000000000000000\n\n");

	result = ft_convert_base("-2147483648", "0123456789", "0123456789ABCDEF");
	printf("BASE:     -2147483648\n");
	printf("RESULT:   %s\n", result);
	printf("EXPECTED: -80000000\n\n");

	free(result);
	return (0);
}

/*
2147483647
1111111111111111111111111111111
7FFFFFFF

-2147483648
-10000000000000000000000000000000
-80000000
*/
