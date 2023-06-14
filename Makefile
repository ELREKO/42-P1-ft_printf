NAME			=	libftprintf.a

CC				=	gcc
CFLAGS			=	-Wall -Wextra -Werror
AR				=	ar
ARFLAGS 		=	rcs
RM				=	rm -rf

SRCS			=	ft_printf.c \
				ft_printf_char.c \
				ft_printf_string.c \
				ft_printf_ptr.c \
				ft_printf_int.c \
				ft_printf_hex_low.c \
				ft_printf_hex_up.c 

OBJ_DIR			=	obj
OBJS			=	$(SRCS:%.c=$(OBJ_DIR)/%.o)

LIBFT_PATH		=	./libft
LIBFT			=	$(LIBFT_PATH)/libft.a

$(OBJ_DIR)/%.o:		%.c
					$(CC) $(CFLAGS) -c $< -o $@

all:				$(NAME)

$(NAME):			$(LIBFT) $(OBJ_DIR) $(OBJS)
				cp	$(LIBFT) $(NAME)
					$(AR) $(ARFLAGS) $(NAME) $(OBJS)

$(LIBFT):
					make -C $(LIBFT_PATH) all

$(OBJ_DIR):
					mkdir -p $(OBJ_DIR)

clean:
					make -C $(LIBFT_PATH) clean
					$(RM) $(OBJ_DIR)

fclean:				clean
					make -C $(LIBFT_PATH) fclean
					$(RM) $(NAME)
					rm -f program
					rm -f test

re:					fclean all

main: $(NAME) main.c
	$(CC) $(CFLAGS) main.c -o program -L. -lftprintf -L$(LIBFT_PATH) -lft -o program

test: $(NAME) main.c
	cc main.c -o program -L. -lftprintf -L$(LIBFT_PATH) -lft -o test
	./test

run: main
	./program

.PHONY:				all clean fclean re libft