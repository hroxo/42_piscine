int	ft_atoi(char *str)
{
	int	out;
	int	i;
	int	sig;

	sig = 1;
	i = 0;
	out = 0;
	while (str[i] == 32 || (str[i] > 8 && str[i] < 14))
		i++;
	while(str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sig *= -1;
		i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		out = (out * 10) + (str[i] - '0');
		i++;
	}
	return (out * sig);
}
