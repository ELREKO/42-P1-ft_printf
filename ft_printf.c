# include "libftprintf.h"

int ft_printf(const char *format, ...)
{
    va_list ap;
    char *mem;

    va_start(ap, format);
    while (*format)
    {
        if (*format == '%')
        {
            format = ft_memchr(format, '%', ft_strlen(format));
            if (format[1] == 's')
            {
                mem = va_arg(ap, char*);
                write(1, mem, ft_strlen(mem));    
            }
            if (format[2] == '%')
                format++;
            else
                format = format+2;
        }
        write(1, &*format, 1);
        format++;
    }
    va_end(ap);
    return(1);
}