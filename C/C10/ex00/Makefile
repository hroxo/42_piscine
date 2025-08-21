NAME = ft_display_file
CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -Iincludes

SRC = main.c
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
