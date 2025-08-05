/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solver.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ando-sou <ando-sou@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 20:00:50 by ando-sou          #+#    #+#             */
/*   Updated: 2025/08/05 20:37:56 by ando-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SOLVER_H
# define FT_SOLVER_H

void	get_around(int **grid, int x, int y, int n);
void	draw_bbq(int **grid, int max, int i, int j);
int		check_poss(int **grid, int x, int y);

#endif
