NAME = ft_display_file
CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRC = $(wildcard *.c)
OBJ= $(SRC:.c=.o)

all: $(NAME)

$(NAME):
		$(CC) -c $(SRC) -o $@ $(OBJ) $(CFLAGS)

clean:
		/bin/rm -rf $(OBJ)

fclean: clean
		/bin/rm -rf $(NAME)

re: fclean all
