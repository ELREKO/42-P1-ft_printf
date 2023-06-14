#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdint.h>

# include "libft/libft.h"

int ft_printf(const char *, ...);
void ft_print_str_sep(const char *str, int ch);
void	*ft_memchr_cp(const void *str, int ch, size_t size_cmp);
size_t	ft_strlen_cp(const char *str);
int ft_printf_char(int arg);
int ft_printf_string(char *arg);
int ft_printf_ptr(void *arg);
int ft_printf_int(int arg);
int ft_printf_uns_int(unsigned int arg);
int ft_printf_hex_lower(unsigned int arg);
int ft_printf_hex_upper(unsigned int arg);


#endif