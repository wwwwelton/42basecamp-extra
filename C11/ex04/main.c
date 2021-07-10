#include <stdio.h>

int	ft_is_sort(int *tab, int length, int(*f)(int, int));

int	ft_sort(int a, int b)
{
	return ((unsigned int)a - (unsigned int)b);
}

int main(void)
{
	int	tab1[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	int	tab2[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int	tab3[] = { 0, 1, 2, 3, 4, 5, 6, 7, 9, 8 };
	int	(*ptr)(int, int);

	ptr = &ft_sort;

	printf("0 == %d\n", ft_is_sort(tab1, 10, ptr));
	printf("0 == %d\n", ft_is_sort(tab3, 10, ptr));
	printf("1 == %d\n", ft_is_sort(tab2, 10, ptr));

	return (0);
}
