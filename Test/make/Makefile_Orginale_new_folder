NAME = libftprintf.a
SRCS = ft_printf.c ft_print_str_sep.c

CC = gcc
CFLAGS = -Wall -Wextra -Werror
ARFLAGS = -rcs

OBJ_DIR = objs
OBJS = $(addprefix $(OBJ_DIR)/, $(SRCS:.c=.o))

LIBFT_PATH = ./libft
LIBFT = $(LIBFT_PATH)/libft.a

all: $(NAME)

$(NAME): $(OBJ_DIR) $(OBJS) $(LIBFT)
	@ar $(ARFLAGS) $(NAME) $(OBJS)
	@echo "libftprint Done!"

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT):
	make -C $(LIBFT_PATH) all

clean:
	rm -rf $(OBJ_DIR)
	make -C $(LIBFT_PATH) clean

fclean: clean
	rm -f $(NAME)
	make -C $(LIBFT_PATH) fclean
	rm -f program

re: fclean all

main: $(NAME) main.c
	$(CC) $(CFLAGS) main.c -o program -L. -lftprintf -L$(LIBFT_PATH) -lft -o program

run: main
	./program
