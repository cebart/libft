NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRC = $(wildcard *.c)
OBJ= $(SRC:.c=.o)

all: $(NAME)

$(NAME):
		$(CC) -c $(SRC) $(CFLAGS) -I .
			ar rcs $(NAME) $(OBJ)
			ranlib $(NAME)

clean:
		/bin/rm -f $(OBJ)

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all