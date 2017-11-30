NAME = ft_display_file
CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRC = $(wildcard *.c)

all: $(NAME)

$(NAME):
		$(CC) $(SRC) -o $@ $(CFLAGS)

clean:
		/bin/rm -rf $(OBJ)

fclean: clean
		/bin/rm -rf $(NAME)

re: fclean all
