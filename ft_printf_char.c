# include "ft_printf.h"

int ft_printf_char(int arg)
{
    write(1, (char *)&arg, 1);
    return (0);
}