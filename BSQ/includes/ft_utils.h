/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 16:15:02 by hroxo             #+#    #+#             */
/*   Updated: 2025/08/04 19:09:34 by ando-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_UTILS_H
# define FT_UTILS_H

char	*ft_strjoin(int size, char **strs);
char    *ft_strcat(char *dest, char *src);
char	*ft_strdup(char *src);
int		ft_strcmp(char *s1, char *s2);
int		ft_natoi(char *str, int i);
int		ft_strlen(char *str);
int		ft_atoi(char *str);
void	ft_swap(int *a, int *b);
void	ft_putstr(char *str);
void	ft_putchar(char c);
void	erro_helper(void);
void	ft_putnbr(int nb);

#endif
