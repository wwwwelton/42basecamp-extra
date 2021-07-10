#include <stdio.h>

int	ft_count_if(char **tab, int length, int(*f)(char*));

int	ft_check_str_is_empty(char *str)
{
	if (str[0] != '\0')
		return (1);
	return (0);
}

int	main(void)
{
	char *tab[] = { "abcde", "abcde", "abcde"};
	int	(*ptr)(char *);

	ptr = &ft_check_str_is_empty;

	printf("%d", ft_count_if(tab, 3, ptr));
	return (0);
}
