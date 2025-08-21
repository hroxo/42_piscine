int	ft_atoi(char *str)
{
	int	n;
	int	result;

	result = 0;
	n = 0;
	while (str[n] == 32 || (str[n] > 8 && str[n] < 14))
		n++;
	if (str[n] == '+' || str[n] == '-')
		n++;
	while (str[n] <= '9' && str[n] >= '0')
	{
		result = str[n] - '0' + (result * 10);
		n++;
	}
	return (result);
}
