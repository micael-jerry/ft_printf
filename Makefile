NAME = ft_printf.a
CC = gcc
FLAGS = -Wall -Wextra -Werror
INCLUDE = ./include

SRC_DIR = ./src
SRC = ft_printf.c

OBJ_DIR = ./obj
OBJ = $(SRC:.c=.o)

LIBFT_DIR = ./libft
LIBFT = libft.a

TEST_DIR = ./test
TEST_FILE = $(TEST_DIR)/main.c
TEST_NAME = ft_printf.test

all: $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	mkdir -p $(OBJ_DIR)
	$(CC) $(FLAGS) -I $(INCLUDE) -o $@ -c $<

libftbuild:
	make -C $(LIBFT_DIR)

$(NAME): libftbuild $(OBJ_DIR)/$(OBJ) $(LIBFT_DIR)/$(LIBFT)
	cp $(LIBFT_DIR)/$(LIBFT) $(NAME)
	ar -rc $(NAME) $(OBJ_DIR)/$(OBJ)

clean:
	rm -rf $(OBJ_DIR)
	make clean -C $(LIBFT_DIR)

fclean: clean
	rm -rf $(NAME)
	make fclean -C $(LIBFT_DIR)

re: fclean all

test: $(TEST_FILE) $(NAME)
	$(CC) -o $(TEST_NAME) $^
	./$(TEST_NAME)
	make testclean

testclean: fclean $(TEST_NAME)
	rm -rf $(TEST_NAME)

.PHONY: all clean fclean re test
