#include <stdio.h>

int		ft_atoi_base(char *str, char *base);

int	main(void)
{
	printf("%d\n", ft_atoi_base("-1", "0123456789"));
	printf("%d\n", ft_atoi_base("42", "0123456789"));
	printf("%d\n", ft_atoi_base("101010", "01"));
	printf("%d\n", ft_atoi_base("52", "01234567"));
	printf("%d\n", ft_atoi_base("2A", "0123456789ABCDEF"));
	printf("%d\n", ft_atoi_base("2147483647", "0123456789"));
	printf("%d\n", ft_atoi_base("-2147483648", "0123456789"));
	printf("%d\n", ft_atoi_base("42", "0"));
	printf("%d\n", ft_atoi_base("42", "1"));
	printf("%d\n", ft_atoi_base("42", ""));
	printf("%d\n", ft_atoi_base("42", "0123456789 "));
	printf("%d\n", ft_atoi_base("42", " 0123456789"));
	return (0);
}
