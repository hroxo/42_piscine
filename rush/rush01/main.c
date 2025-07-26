/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 11:13:58 by hroxo             #+#    #+#             */
/*   Updated: 2025/07/26 19:29:28 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	input_is_valid2(int *out);

int	input_is_valid(char *str, int *out)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] && j < 16)
	{
		if (str[i] >= '1' && str[i] <= '4')
			out[j++] = str[i] - '0';
		else if (str[i] != ' ')
		{
			write(1, "Error\n", 6);
			return (1);
		}
		i++;
	}
	if (j != 16)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	if (input_is_valid2(out) == 1)
		return (1);
	return (0);
}

int	input_is_valid2(int *out)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (out[i] + out[i + 4] < 3 || out[i] + out[i + 4] > 5)
		{
			write(1, "Error\n", 6);
			return (1);
		}
		if (out[i + 8] + out[i + 12] < 3 || out[i + 8] + out[i + 12] > 5)
		{
			write(1, "Error\n", 6);
			return (1);
		}
		i++;
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int	*out;

	out = malloc(16 * 4);
	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	if (input_is_valid(argv[1], out) == 1)
		return (2);
	free(out);
	return (0);
}
