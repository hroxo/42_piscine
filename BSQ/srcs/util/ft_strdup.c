/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 12:05:11 by hroxo             #+#    #+#             */
/*   Updated: 2025/08/04 19:04:18 by ando-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_utils.h"

char	*ft_strdup(char *src)
{
	int		n;
	char	*output;

	n = 0;
	output = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!output)
		return (0);
	while (src[n])
	{
		output[n] = src[n];
		n++;
	}
	output[n] = 0;
	return (output);
}
