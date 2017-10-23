##
## Makefile for Colle1 in /Users/romain/Documents/CPE/Colle1
##
## Made by Deguerville Romain
## Login   <romain@epitech.net>
##
## Started on  Mon Apr 25 14:06:50 2016 Deguerville Romain
## Last update Mon Apr 25 14:07:19 2016 Deguerville Romain
##

NAME		= 	generateur

CC			= 	gcc

RM			= 	rm -rf

CFLAGS  +=	-I./include \
						-W -Wall -Werror -Wextra \

LIB			=		-lncurses \

SRC			=		./src/main.c \
						./src/error_arg.c \
						./src/initialisation.c \
						./src/generate.c \
						./src/aff_labi.c \

OBJ   = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(OBJ) $(LIB) $(CFLAGS) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re : clean fclean all
