NAME = ft_reverse
CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -Iinclude

SRC = main.c ft_list_reverse.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(INCLUDES) $(OBJ) -o $(NAME)
%.c: %.o
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@
clean:
	rm -rf $(OBJ)
fclean:
	rm -rf $(NAME)

.PHONY: all fclean clean
