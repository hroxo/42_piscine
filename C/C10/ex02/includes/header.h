#ifndef HEADER_H
#define HEADER_H

int		ft_atoi(char *str);
void	print_error(char *file);
int		ft_strcmp(char *s1, char *s2);
int		check_flag(char *c_flag, char *nbyte);
int		ft_strlen(char *str);
char	 *tail_text(int fd, int bit_cap);
void	print_text(char *file_content, char *file_name, int flag);
char	*ft_strncat(char *dest, char *src, int size);
char	*ft_strcpy(char *dest, char *src);
void	ft_putstr(char *str);
void	print_text(char *file_content, char *file_name, int flag);

#endif
