NAME = libft.a

SRC = *.c

all : $(NAME)

$(NAME):
	gcc -o $(NAME) $(SRC)

clean :
	/bin/rm -f *.o

fclean :
	/bin/rm -f $(NAME)

re : fclean all