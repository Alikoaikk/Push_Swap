# === Compiler and Flags ===
CC      = gcc
CFLAGS  = -Wall -Wextra -Werror -I includes

# === Files and Folders ===
SRC_DIR = src
SRC     = $(wildcard $(SRC_DIR)/*.c) main.c
OBJ     = $(SRC:.c=.o)
NAME    = push_swap

# === Rules ===

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all