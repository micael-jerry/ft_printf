NAME = ft_printf.a
CC = gcc
FLAGS = -Wall -Wextra -Werror
INCLUDE = ./include

SRC_DIR = ./src
SRC = ft_print_chr.c ft_print_str.c ft_printf.c

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

$(LIBFT_DIR)/$(LIBFT):
	make -C $(LIBFT_DIR)

$(NAME): $(LIBFT_DIR)/$(LIBFT) $(addprefix $(OBJ_DIR)/,$(OBJ))
	cp $(LIBFT_DIR)/$(LIBFT) $(NAME)
	ar -rc $(NAME) $(addprefix $(OBJ_DIR)/,$(OBJ))

clean:
	rm -rf $(OBJ_DIR)
	make clean -C $(LIBFT_DIR)

fclean: clean
	rm -rf $(NAME)
	make fclean -C $(LIBFT_DIR)

re: fclean all

test: $(TEST_FILE) $(NAME)
	$(CC) -o $(TEST_NAME) $^
	@python $(TEST_DIR)/python/test_header.py
	./$(TEST_NAME)
	@python $(TEST_DIR)/python/test_footer.py
	make testclean

testclean: fclean $(TEST_NAME)
	rm -rf $(TEST_NAME)

.PHONY: all clean fclean re test
