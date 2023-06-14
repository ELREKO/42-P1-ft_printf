#include "ft_printf.h"

int ft_printf_ptr(void *arg)
{
    uintptr_t ptr_value;
    int leading_zeros;
    int hex_digits;
    int count;
    char hex_digit;
    ptr_value = (uintptr_t)arg;

    write(1, "0x", 2);
 
    leading_zeros = 1; 
    hex_digits = sizeof(void *) * 2;
    count = (hex_digits - 1) * 4;
    while (count >= 0)
    {
        hex_digit = "0123456789abcdef"[(ptr_value >> count) & 0xf];
        
        if (hex_digit != '0' || !leading_zeros)
        {
            leading_zeros = 0; // Setze das Flag auf 0, um keine weiteren führenden Nullen zu schreiben
            write(1, &hex_digit, 1);
        }
        
        count -= 4;
    }
    return (0);
}
