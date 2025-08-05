/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_m.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 13:29:23 by hroxo             #+#    #+#             */
/*   Updated: 2025/08/05 20:24:19 by ando-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h> 
#include <stdio.h> 
#include <unistd.h> 
#include <fcntl.h> 
#include "ft_helper.h" 
#include "ft_structs.h" 
#include "ft_utils.h" 

void	helper_map(int fd, int *first_line_len, int *x)
{
	char	file_char;
	int		new_line_counter;
	int		count_every_char;

	count_every_char = 0;
	new_line_counter = 0;
	while ((read(fd, &file_char, 1) && new_line_counter < 2)
		|| file_char == '\0')
	{
		if (file_char == '\n')
			new_line_counter++;
		else
			if (new_line_counter == 0)
				(*first_line_len)++;
		count_every_char++;
	}
	count_every_char -= *first_line_len;
	if (new_line_counter < 2 || count_every_char <= 2)
	{
		write(1, MAP_ERROR, 10);
		exit (1);
	}
	*x = count_every_char - 1;
}
