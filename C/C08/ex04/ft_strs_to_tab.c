/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 16:46:31 by hroxo             #+#    #+#             */
/*   Updated: 2025/08/02 20:14:34 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "ft_stock_str.h" 
int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n])
		n++;
	return (n);
}

char	*ft_strdup(char *src)
{
	int		n;
	char	*out;

	n = 0;
	out = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!out)
		return (NULL);
	while (src[n])
	{
		out[n] = src[n];
		n++;
	}
	out[n] = 0;
	return (out);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int	i;
    t_stock_str *arr;
	
	arr = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!arr)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		arr[i].size = ft_strlen(av[i]);
		arr[i].str = av[i];
		arr[i].copy = ft_strdup(av[i]);
		i++;
	}
	arr[i].str = 0;
	arr[i].copy = 0;
	arr[i].size = 0;
	return (arr)
}
