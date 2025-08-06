/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdin.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ando-sou <ando-sou@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 13:52:09 by ando-sou          #+#    #+#             */
/*   Updated: 2025/08/06 14:10:07 by ando-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STDIN_H
# define FT_STDIN_H

struct s_map	inicializer(void);
struct s_map	rules_stdin(int fd, int x, int first_line_len);
void			helper_map(char *buf, int *first_line_len, int *x);
char			*read_all_fd(int fd, int *out_len, int total, int i);

#endif
