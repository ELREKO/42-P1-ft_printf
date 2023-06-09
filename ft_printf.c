# include "libftprintf.h"

int ft_printf(const char *format, ...)
{
    va_list ap;
    char ch;

    va_start(ap, format);
    while (*format)
    {
        ch = *format;
        write(1, &ch, 1);
        format++;
    }
    va_end(ap);
    return(1);
}