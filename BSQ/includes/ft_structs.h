/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_structs.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 18:13:29 by hroxo             #+#    #+#             */
/*   Updated: 2025/08/04 18:23:59 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRUCTS_H
# define FT_STRUCTS_H

typedef struct s_map
{
	char	full;
	char	obstacle;
	char	empty;
	int		x_axis;
	int		y_axis;
	char	*map;
}	t_map;

#endif
