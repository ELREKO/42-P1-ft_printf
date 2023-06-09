NAME = libftprintf.a

SRCS = ft_printf.c 

CC = gcc
CFLAG = -Wall -Wextra -Werror 
ARFLAGS = -rcs

OBJS = $(SRCS:.c=.o)

LIBFT_PATH = ./libft
LIBFT = $(LIBFT_PATH)/libft.a

$(LIBFT): 
	make -C $(LIBFT_PATH) all

$(NAME): $(LIBFT) $(OBJS) 
	@ar $(ARFLAGS) $(NAME) $(OBJS)
	@echo "libftprint Done!"

all:	$(NAME)

clean:	
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re:	fclean $(NAME)

main: 	$(NAME) main.c
		$(CC) $(CFLAG) main.c -o program -L. -lftprintf -o program

run:	main
		./program
