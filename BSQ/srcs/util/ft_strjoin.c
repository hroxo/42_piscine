/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 17:31:13 by hroxo             #+#    #+#             */
/*   Updated: 2025/08/04 19:04:44 by ando-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "ft_utils.h"

int	total_len(int size, char **strs)
{
	int	i;
	int	len;

	len = 0;
	i = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	return (len + 1);
}

char	*ft_strjoin(int size, char **strs)
{
	int		i;
	char	*output;

	if (size < 1)
	{
		output = malloc(1);
		if (output == 0)
			return (output);
		output[0] = 0;
		return (output);
	}
	output = malloc(total_len(size, strs));
	i = 0;
	if (output == 0)
		return (0);
	output[0] = 0;
	while (i < size)
	{
		ft_strcat(output, strs[i]);
		i++;
	}
	return (output);
}
