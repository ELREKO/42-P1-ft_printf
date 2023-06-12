#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include "libft/libft.h"

int ft_printf(const char *, ...);
void ft_print_str_sep(const char *str, int ch);

#endif