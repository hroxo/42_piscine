int	ft_atoi(const char *str)
{
	int n;
	int sig;
	long	result;

	result = 0;
	sig = 1;
	n = 0;
	while (str[n] == ' ' || (str[n] < 14 && str[n] > 8))
		n++;
	if (str[n] == '-' || str[n] == '+')
	{
		if (str[n] == '-')
			sig *= -1;
		n++;
	}
	while (str[n] < '9' + 1 && str[n] > '0' - 1)
	{
		result = (str[n] - '0')	+ result * 10;
		n++;
	}
	return (result * sig);
}
