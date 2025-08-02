/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 14:46:50 by hroxo             #+#    #+#             */
/*   Updated: 2025/08/02 17:21:18 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *base)
{
	int	n;

	n = 0;
	while (base[n])
		n++;
	return (n);
}

int	check(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+'
			|| base[i] < 33 || base[i] > 126)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	clear_str(char *str, int *sig)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || (8 < str[i] && str[i] < 15))
		i += 1;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			*sig *= -1;
		i += 1;
	}
	return (i);
}

int	result_int(char *str, char *base, int j, int base_len)
{
	int	result;
	int	sig;
	int	i;

	result = 0;
	sig = 1;
	i = clear_str(str, &sig);
	while (str[i])
	{
		j = 0;
		while (base[j])
		{
			if (str[i] == base[j])
			{
				result = j + result * base_len;
				break ;
			}
			j++;
			if (base[j] == 0)
				return (result * sig);
		}
		i++;
	}
	return (result * sig);
}

int	ft_atoi_base(char *str, char *base)
{
	int	j;
	int	result;
	int	len;

	len = ft_strlen(base);
	j = 0;
	result = result_int(str, base, j, len);
	return (result);
}
