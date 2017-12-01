NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRC = $(wildcard srcs/*.c)
OBJ= *.o

all: $(NAME)

$(NAME):
	                $(CC) -c $(SRC) $(CFLAGS) -I includes
	                       ar rcs $(NAME) $(OBJ)
	                        ranlib $(NAME)

clean:
	                /bin/rm -f $(OBJ)

fclean: clean
	                /bin/rm -f $(NAME)

re: fclean all
