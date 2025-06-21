CC      = gcc
CFLAGS  = -Wall -Wextra -Werror -I includes

SRC_DIR = src
SRC     = $(wildcard $(SRC_DIR)/*.c) main.c
OBJ     = $(SRC:.c=.o)
NAME    = push_swap

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all