all: libft.a

libft.a: srcs/ft_putchar.o srcs/ft_swap.o srcs/ft_putstr.o srcs/ft_strlen.o srcs/ft_strcmp.o
	ar rcs libft.a srcs/ft_putchar.o srcs/ft_swap.o srcs/ft_putstr.o srcs/ft_strlen.o srcs/ft_strcmp.o

srcs/ft_putchar.o: srcs/ft_putchar.c includes/ft.h
	cc -Wall -Wextra -Werror -Iincludes -c srcs/ft_putchar.c -o srcs/ft_putchar.o

srcs/ft_swap.o: srcs/ft_swap.c includes/ft.h
	cc -Wall -Wextra -Werror -Iincludes -c srcs/ft_swap.c -o srcs/ft_swap.o

srcs/ft_putstr.o: srcs/ft_putstr.c includes/ft.h
	cc -Wall -Wextra -Werror -Iincludes -c srcs/ft_putstr.c -o srcs/ft_putstr.o

srcs/ft_strlen.o: srcs/ft_strlen.c includes/ft.h
	cc -Wall -Wextra -Werror -Iincludes -c srcs/ft_strlen.c -o srcs/ft_strlen.o

srcs/ft_strcmp.o: srcs/ft_strcmp.c includes/ft.h
	cc -Wall -Wextra -Werror -Iincludes -c srcs/ft_strcmp.c -o srcs/ft_strcmp.o

clean:
	rm -f srcs/ft_putchar.o srcs/ft_swap.o srcs/ft_putstr.o srcs/ft_strlen.o srcs/ft_strcmp.o

fclean: clean
	rm -f libft.a

re: fclean all
