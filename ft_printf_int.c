# include "ft_printf.h"

int ft_printf_uns_int(unsigned int arg)
{
    printf("using ui %d" , arg);
    return (0);
}

int ft_printf_int(int arg)
{
    char ch;

    if (arg == -2147483648)
    {
        write(1, "-2147483648", 11);
        return (11);
    }
    if (arg < 0)
    {   
        arg *= -1;
        write(1, "-", 1);
    }
    while (arg > 10)
    {
        ft_printf_int(arg%10);
        arg /= 10;
    }
    if (arg < 10)
    {
        ch = arg + 48;
        write(1, &ch, 1);
    }
    return (0);
}

