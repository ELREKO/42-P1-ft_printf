#include "ft_printf.h"

int main(void)
{
 // Test mit %c
    printf("Printf with c: %-c", 'b');
    printf("\n");
    ft_printf("ft_printf with c: %c%", 'p');
    ft_printf("\n");
    ft_printf("\n------------------------- \n\n");
// Test mit %s 

// Test mit %p
    void *ptr; 
    ptr = "Test"; 
    printf("Printf with p: %p", ptr);
    printf("\n");
    ft_printf("ft_printf with p: %p", ptr);
    ft_printf("\n");
    ft_printf("\n------------------------- \n\n");

    return (0);
    


}