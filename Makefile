##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC	= 	src/main.c		\
		src/base.c		\
		src/my_help.c	\
		src/move_sprite.c	\
		src/my_putchar.c	\
		src/my_putstr.c	\

OBJ	= 	$(SRC:.c=.o)

NAME	=	my_rpg

CFLAGS	=	-g3 -I. -lcsfml-graphics -lcsfml-audio -lcsfml-system -lcsfml-window

all:		$(NAME)

$(NAME):	$(OBJ)
		gcc $(OBJ) -o $(NAME) -I./include $(CFLAGS)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all

.PHONY:		all clean fclean  re
