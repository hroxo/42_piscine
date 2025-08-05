/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_natoi.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 15:51:35 by hroxo             #+#    #+#             */
/*   Updated: 2025/08/05 19:06:31 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "ft_helper.h"
#include <stdlib.h>

int	ft_strlen(char *str);

int	ft_natoi(char *str, int i)
{
	int		n;
	long	result;

	result = 0;
	n = 0;
	while (str[n] && n < i && (str[n] == 32 || (str[n] < 14 && str[n] > 8)))
		n++;
	if (str[n] == '-')
	{
		write(1, MAP_ERROR, 10);
		write(1, COMMAND_ERROR, ft_strlen(COMMAND_ERROR));
		return (-1);
	}
	else if (str[n] == '+')
		n++;
	while (str[n] && n < i && (str[n] <= '9' || str[n] >= '0'))
	{
		result = (str[n] - '0') + (result * 10);
		n++;
	}
	return (result);
}
