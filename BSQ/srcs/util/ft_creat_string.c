/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_creat_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 18:09:14 by ando-sou          #+#    #+#             */
/*   Updated: 2025/08/06 19:30:39 by ando-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "ft_utils.h"
#include "ft_helper.h"

char	*ft_create_string(char a, char b, char c)
{
	char	*dest;

	dest = malloc(sizeof(char) * 4);
	if (!dest)
		return (NULL);
	dest[0] = a;
	dest[1] = b;
	dest[2] = c;
	dest[3] = 0;
	return (dest);
}
