NAME = libftprintf.a
CC = gcc
FLAGS = -Wall -Wextra -Werror
INCLUDE = include/
SRC = src/test.c
OBJ = $(subst src/,obj/,$(SRC:.c=.o))

all: $(NAME)

obj/%.o: src/%.c
	$(CC) $(FLAGS) -I $(INCLUDE) -o $@ -c $<

$(NAME): $(OBJ)
	ar -rc $(NAME) $(OBJ)

clean:
	rm -rf *.o */*.o

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
