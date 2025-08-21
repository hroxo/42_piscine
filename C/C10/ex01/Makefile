NAME = ft_cat
CC = cc
CFLAGS = -Wall -Werror -Wextra
INCLUDES = -Iincludes

SRC = main.c srcs/print_file.c srcs/print_error.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(INCLUDES) $(OBJ) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(NAME)

.PHONY: all clean fclean
