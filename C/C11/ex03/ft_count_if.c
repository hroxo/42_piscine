int	ft_count_if(char **tab, int length, int(*f)(char*))
{
	int	i;
	int	score;

	score = 0;
	i = 0;
	while (tab[i])
	{
		if (((*f)(tab[i])))
			score++;
		i++;
	}
	return (score);
}
