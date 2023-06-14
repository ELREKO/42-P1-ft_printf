# include "ft_printf.h"

int ft_printf_string(char *arg)
{
    write(1, arg, ft_strlen(arg));
    return(0);
}