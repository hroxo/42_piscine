char	**to_default(t_map content, int size)
{
	int	i;
	int	j;
	int	counter;
	char	**out;

	out = malloc(sizeof(char *) * (size / 16) + 1);
	if (!out)
		return (NULL);
	counter = 0;
	i = 0;
	while (counter < size)
	{
		if (counter % 16 == 0 && counter)
		{
			i++;
			if (counter / 16 > 0)
				out[i] = malloc()
		}
	}
}
