NAME = do-op
CC = cc
CFLAGS = -Wall -Werror -Wextra
INCLUDES = -Iincludes

SRC = main.c $(wildcard srcs/**/*.c) srcs/do_op.c
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
