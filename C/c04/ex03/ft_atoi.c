/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 10:42:08 by hroxo             #+#    #+#             */
/*   Updated: 2025/07/23 11:34:27 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	n;
	int	score;
	int	result;

	result = 0;
	score = 0;
	n = 0;
	while (str[n] == ' ' || (8 < str[n] && str[n] < 15))
		n++;
	while (str[n] == '-' || str[n] == '+')
	{
		if (str[n] == '-')
			score++;
		n++;
	}
	while (str[n] < '9' + 1 && str[n] > '0' - 1)
	{
		result = (str[n] - '0') + result * 10;
		n++;
	}
	if (score % 2 != 0)
		result = -result;
	return (result);
}
