#include <stdio.h>
#include "ft.h"

int main(void)
{
	int a = 24;
	int b = 42;
	char *str = { "Hello Wolrd" };
	char *s1 = { "Welton" };
	char *s2 = { "Warley" };

	ft_putchar('A');
	printf("\n");
	ft_swap(&a, &b);
	printf("A: %d B: %d\n", a, b);
	ft_putstr(str);
	printf("\n");
	printf("FT_STRLEN: %d\n", ft_strlen(str));
	printf("FT_STRCMP: %d\n", ft_strcmp(s1, s2));

	return (0);
}
