
CC =		gcc
CFLAGS =	-W -Wall -Wextra
NAME =		libmy.a
SRC =		my_putchar.c \
		my_isneg.c \
		my_swap.c \
		my_putstr.c \
		my_strlen.c \
		my_strcpy.c \
		my_strncpy.c \
		my_strcmp.c \
		my_strncmp.c \
		my_strcat.c \
		my_strncat.c \
		my_strstr.c \
		my_getnbr.c \
		my_put_nbr.c \
		my_str_to_wordtab.c \
		my_strdup.c


RM =		rm -f
$(NAME):	$(SRC)
		$(CC) $(CFLAGS) -c $(SRC)
		ar r $(NAME) *.o
		ranlib $(NAME)

all:		$(NAME)

clean:
		$(RM) *.o

fclean:			clean
		$(RM) $(NAME)

re:		fclean all
