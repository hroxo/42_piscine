NAME        = bsq
CC          = cc
CFLAGS      = -Wall -Wextra -Werror
INCLUDES    = -Iincludes -Isrcs/util/includes

SRC         = $(wildcard srcs/**/*.c) main.c
OBJ         = $(SRC:.c=.o)

all: $(NAME) clean

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(INCLUDES) $(OBJ) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

