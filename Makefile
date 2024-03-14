NAME = ft_printf.a
CC = gcc
FLAGS = -Wall -Wextra -Werror
INCLUDE = include/
SRC = src/test.c
OBJ = $(SRC:.c=.o)
LIBFT_DIR = libft/

all: libftbuild $(NAME)

%.o: %.c
	$(CC) $(FLAGS) -I $(INCLUDE) -o $@ -c $<

libftbuild:
	make -C $(LIBFT_DIR)

$(NAME): $(OBJ) $(LIBFT_DIR)libft.a
	cp $(LIBFT_DIR)libft.a $(NAME)
	ar -rc $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)
	make clean -C $(LIBFT_DIR)

fclean: clean
	rm -rf $(NAME)
	make fclean -C $(LIBFT_DIR)

re: fclean all

.PHONY: all clean fclean re
