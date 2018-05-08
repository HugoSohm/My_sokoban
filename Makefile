##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Made by Hugo SOHM
##

NAME	=	my_sokoban

SRC	=	src/main.c		\
		src/dispmap.c		\
		src/my_sokoban.c	\
		src/my_sokoban_mv.c	\
		src/options.c		\
		lib/my/my_putstr.c	\
		lib/my/my_putchar.c

CFLAGS	+=	-Iinclude/

OBJ	=	$(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) -lncurses

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
