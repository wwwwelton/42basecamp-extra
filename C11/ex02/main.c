#include <string.h>
#include <stdio.h>

int	ft_any(char **tab, int(*f)(char*));

int	ft_check_is_not_a(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] == 'a')
			return (1);
		i++;
	}
	return (0);
}

int main(void)
{
	char *tab[] = { "aaaaaa", "bbbbbb", "bbbbbb" };
	int	result;

	result = ft_any(tab, &ft_check_is_not_a);
	printf("%d\n", result);
	return (0);
}
