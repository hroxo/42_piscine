/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 16:07:07 by hroxo             #+#    #+#             */
/*   Updated: 2025/07/21 16:19:16 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	n;

	n = 0;
	i = 0;
	while (dest[i] != 0)
		i++;
	while (n < nb && src[n] != 0)
	{
		dest[i] = src[n];
		i++;
		n++;
	}
	dest[i] = 0;
	return (dest);
}
