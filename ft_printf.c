# include "libftprintf.h"

int ft_printf(void) //(const char *, ...)
{
    write(1, "Test", 4);
    printf("\n Test len: %ld\n", ft_strlen("test_ch"));
    return(1);
}