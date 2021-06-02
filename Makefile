##
## EPITECH PROJECT, 2020
## lib
## File description:
## Makefile
##

PRINTF =	printf/hexadecimal.c \
			printf/my_function.c \
			printf/my_printf.c \
			printf/my_prints.c \
			printf/my_prints_v2.c \
			printf/octal.c \
			printf/pointer.c \
			printf/my_strcat.c \
			printf/my_strcmp.c \
			printf/my_strcpy.c \
			printf/my_strdup.c \
			printf/my_strncmp.c

SRC		=	$(wildcard *.c check/*.c move/*.c map/*.c game/*.c)

NAME	=		my_sokoban

LIB		=		libmy.a

all: $(NAME)

$(NAME):
	gcc -c $(PRINTF)
	ar rc $(LIB) *o
	rm *.o
	chmod +x $(LIB)
	gcc -o $(NAME) $(SRC) -lncurses -lmy -L./ -W -Wall -Werror

clean:
	find . -type f -name "*~" -o -name "#*#" -delete
	rm -f *gc*
	rm -f *~*

fclean: clean
	rm -f $(LIB)
	rm -f $(NAME)

re: fclean all
