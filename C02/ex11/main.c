void	ft_putchar(char c);
void	ft_putstr_non_printable(char *str);

int	main(void)
{
	char str[] = { 'O', 'i', ' ', -1, 'v', 'o', 'c', 'e', ' ', 'e', 's', 't', 'a', ' ', 'b', 'e', 'm', '?', '\0' };
	ft_putstr_non_printable("Oi\avoce esta bem?");
	ft_putchar('\n');
	ft_putstr_non_printable("Oi\bvoce esta bem?");
	ft_putchar('\n');
	ft_putstr_non_printable("Oi\tvoce esta bem?");
	ft_putchar('\n');
	ft_putstr_non_printable("Oi\nvoce esta bem?");
	ft_putchar('\n');
	ft_putstr_non_printable("Oi\vvoce esta bem?");
	ft_putchar('\n');
	ft_putstr_non_printable("Oi\fvoce esta bem?");
	ft_putchar('\n');
	ft_putstr_non_printable("Oi\rvoce esta bem?");
	ft_putchar('\n');
	ft_putstr_non_printable("Oi\x0Evoce esta bem?");
	ft_putchar('\n');
	ft_putstr_non_printable("Oi\x1Fvoce esta bem?");
	ft_putchar('\n');
	ft_putstr_non_printable(str);
	ft_putchar('\n');

	return (0);
}
