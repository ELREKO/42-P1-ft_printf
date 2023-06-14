# include "ft_printf.h"

int ft_printf(const char *format, ...)
{
    va_list ap;
    char *str_mem;
    int i_mem;
    void *ptr_mem;
    char *str;

    str = ft_strdup(format);

    va_start(ap, format);
    while (*str)
    {
        if (*str == '%')
        {
            str = ft_memchr(str, '%', ft_strlen(str));
            //printf("---%s--- \n", str);
            if (str[1] == 'c')
            {
                i_mem = va_arg(ap, int);
               // printf("ja im char \n");
                write(1, &i_mem, 1);    
            }
            if (str[1] == 's')
            {
                str_mem = va_arg(ap, char*);
                //printf("ja im string \n");
                write(1, str_mem, ft_strlen(str_mem));    
            }
            if (str[1] == 'p')
            {
                ptr_mem = va_arg(ap, void *);
                //printf("ja im pointer \n");
                uintptr_t ptr_value = (uintptr_t)ptr_mem;

                char prefix[] = "0x";
                write(1, prefix, sizeof(prefix) - 1); // Präfix "0x" schreiben

                int leading_zeros = 1; // Flag für führende Nullen

                // Bytes des Pointers einzeln schreiben
                for (int i = (sizeof(void *) * 2 * 4) - 4; i >= 0; i -= 4)
                {
                    char hex_digit = "0123456789abcdef"[(ptr_value >> i) & 0xf];

                    if (hex_digit != '0' || !leading_zeros)
                    {
                        if (hex_digit == '0')
                        {
                            //printf("\nleadingzone =0 \n");
                            leading_zeros = 0; // Setze das Flag auf 0, um keine weiteren führenden Nullen zu schreiben
                        }
                        write(1, &hex_digit, 1);
                        //leading_zeros = 0; // Setze das Flag auf 0, um keine weiteren führenden Nullen zu schreiben
                    }
                }
            }

            if (str[1] == '\0')
                continue;
            str = str+2;
        }
        //printf("str %s -- \n", str);
        write(1, &*str, 1);
        str++;
    }
    va_end(ap);
    return(1);
}