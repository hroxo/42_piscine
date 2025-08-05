/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_remove_nl.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ando-sou <ando-sou@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 18:00:51 by ando-sou          #+#    #+#             */
/*   Updated: 2025/08/05 18:10:24 by ando-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_remove_nl(char *str)
{
	int		i;
	int		l;
	char	*final_str;

	i = -1;
	l = 0;
	while (str[++i])
		if (str[i] != '\n')
			l++;
	final_str = malloc(l + 1);
	i = 0;
	l = 0;
	while (str[i])
	{
		if (str[i] != '\n')
		{
			final_str[l] = str[i];
			l++;
		}
		i++;
	}
	final_str[i] = 0;
	return (final_str);
}
