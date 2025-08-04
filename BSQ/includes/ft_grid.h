/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_grid.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ando-sou <ando-sou@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 18:17:26 by ando-sou          #+#    #+#             */
/*   Updated: 2025/08/04 18:27:25 by ando-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_GRID_H
# define FT_GRID_H

int		**create_grid(char *board, long board_w, long board_h, char *chars);
void	show_grid(int **grid, char *chars);

#endif
