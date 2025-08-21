int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;
	int	j;

	i = 0;
	while (i < length)
	{
		j = i + 1;
		if (((*f) (tab[i], tab[j]) > 0) && (j < length))
			return (0);
		i++;
	}
	return(1);
}
