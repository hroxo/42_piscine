/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 17:57:47 by hroxo             #+#    #+#             */
/*   Updated: 2025/07/21 11:11:18 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	n;
	unsigned int	s;
	unsigned int	i;

	i = 0;
	n = 0;
	if (size > 0)
	{
		s = size - 1;
		while (n < s && src[n] != '\0')
		{
			dest[n] = src[n];
			n++;
		}
		dest[n] = '\0';
	}
	while (src[i] != '\0')
		i++;
	return (i);
}
