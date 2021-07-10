//clear && gcc -Wall -Wextra -Werror main.c -L. -lft && ./a.out
//-L. == -L library '.' pasta atual | -lft == libft -l é uma convenção de lib, ft nome da lib
//rm -rf *.o && rm -rf *.a
#include <stdio.h>
void	ft_putchar(char c);
void	ft_swap(int *a, int *b);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);

int	main(void)
{
	int		a = 24;
	int		b = 42;
	char	*str = {"Hello Wolrd"};
	char	*s1 = {"Welton"};
	char	*s2 = {"Warley"};

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
