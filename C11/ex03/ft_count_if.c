int	ft_count_if(char **tab, int length, int(*f)(char*))
{
	int	c;
	int	i;

	if (tab == 0)
		return (0);
	c = 0;
	i = 0;
	while (i < length)
	{
		if (f(tab[i]) == 1)
			c++;
		i++;
	}
	return (c);
}
