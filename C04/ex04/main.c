void	ft_putchar(char c);
void	ft_putnbr_base(int nbr, char *base);

int	main(void)
{
	ft_putnbr_base(-1, "0123456789");
	ft_putchar('\n');
	ft_putnbr_base(1, "0123456789");
	ft_putchar('\n');
	ft_putnbr_base(42, "0123456789");
	ft_putchar('\n');
	ft_putnbr_base(2147483647, "0123456789");
	ft_putchar('\n');
	ft_putnbr_base(-2147483648, "0123456789");
	ft_putchar('\n');
	ft_putnbr_base(42, "01");
	ft_putchar('\n');
	ft_putnbr_base(42, "0123456789ABCDEF");
	ft_putchar('\n');
	ft_putnbr_base(42, "01234567");
	ft_putchar('\n');
	ft_putnbr_base(42, "0");
	ft_putchar('\n');
	ft_putnbr_base(42, "1");
	ft_putchar('\n');
	ft_putnbr_base(42, "");
	ft_putchar('\n');
	return (0);
}
