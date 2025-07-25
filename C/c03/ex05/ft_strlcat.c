/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 08:33:33 by hroxo             #+#    #+#             */
/*   Updated: 2025/07/23 08:35:01 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	ldest;
	unsigned int	lsrc;
	unsigned int	n;
	unsigned int	result;

	n = 0;
	ldest = 0;
	lsrc = 0;
	while (dest[ldest])
		ldest++;
	while (src[lsrc])
		lsrc++;
	result = ldest;
	if (size <= ldest)
		return (size + lsrc);
	while (src[n] && size > ldest + 1)
	{
		dest[ldest] = src[n];
		ldest++;
		n++;
	}
	dest[ldest] = 0;
	return (result + lsrc);
}
