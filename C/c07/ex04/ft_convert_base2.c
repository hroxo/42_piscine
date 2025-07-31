/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 08:32:29 by hroxo             #+#    #+#             */
/*   Updated: 2025/07/30 12:26:43 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_atoi_base(char *str, char *base);

int	check(char *base);

int	ft_strlen(char *base);

int	size_nbr(int nbr, char *base_to)
{
	long	temp;
	int		size;
	int		len;

	size = 0;
	len = ft_strlen (base_to);
	temp = nbr;
	if (temp < 0)
	{
		temp *= -1;
		size++;
	}
	while (temp)
	{
		temp /= len;
		size++;
	}
	return (size);
}

void	trans_out(int nbr, char *out, int *i, char *base)
{
	int	len;
	int	j;

	j = *i;
	len = ft_strlen(base);
	if (nbr == 0)
	{
		out[0] = base[0];
		out[1] = 0;
	}
	while (nbr > 0)
	{
		out[j] = base[nbr % len];
		nbr /= len;
		j -= 1;
	}
	*i = j;
}

char	*nbr_to_base(long nbr, char *base, int size)
{
	int		i;
	char	*out;
	int		neg;

	out = malloc(size + 1);
	if (out == 0)
		return (0);
	out[size] = 0;
	neg = 0;
	i = size - 1;
	if (nbr < 0)
	{
		neg = 1;
		nbr *= -1;
	}
	trans_out(nbr, out, &i, base);
	if (neg == 1)
	{
		out[i] = '-';
		i--;
	}
	return (out);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	nb;
	char	*out;
	int		size;

	if (check(base_to) == 0 || check(base_from) == 0)
		return (0);
	nb = ft_atoi_base(nbr, base_from);
	size = size_nbr(nb, base_to);
	out = nbr_to_base(nb, base_to, size);
	return (out);
}
