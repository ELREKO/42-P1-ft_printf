# include "ft_printf.h"
# include <limits.h>

static void ft_printheader(char *arg)
{
    printf("\n\n---------------------------------------\n");
    printf("\t\t %s\n", arg);
    printf("---------------------------------------\n\n");
}

int main(void)
{
//return Value printf
ft_printheader("Test %c");

 // Test mit %c
    printf("printf (b): |%c|", 'c');    printf("\n");
    ft_printf("ft_printf (b): |%c|", 'c');     ft_printf("\n");

    printf("Printf (0): |%c|", '0');     printf("\n");
    ft_printf("ft_printf (0): |%c|", '0');     ft_printf("\n");

    printf("Printf (p): |%c|", 'p');     printf("\n");
    ft_printf("ft_printf (p): |%c|", 'p');     ft_printf("\n");


ft_printheader("Test %s");

    printf("printf: |%s|", "Test" );    printf("\n");
    ft_printf("ft_printf: |%s|", "Test" );     ft_printf("\n");

    printf("Printf: |%s|", "Test" );     printf("\n");
    ft_printf("ft_printf: |%s|:", "Test" );     ft_printf("\n");

    printf("Printf: |%s|", "Test" );     printf("\n");
    ft_printf("ft_printf: |%s|", "Test" );     ft_printf("\n");

ft_printheader("Test %p");
    void *ptr; 
    ptr = "Test"; 
    printf   ("   Printf: |%p|", NULL);   printf("\n");
    ft_printf("ft_printf: |%p|", ptr);   ft_printf("\n");

ft_printheader("Test %d");

    printf("printf: |%d|", INT_MIN );    printf("\n");
    ft_printf("ft_printf: |%d|", 17312127   );     ft_printf("\n");

ft_printheader("Test %i");

    printf("printf: |%i|", INT_MIN );    printf("\n");
    ft_printf("ft_printf: |%i|", 17312127   );     ft_printf("\n");

ft_printheader("Test %u");

    printf("printf: |%u|", UINT_MAX );    printf("\n");
    ft_printf("ft_printf: |%u|", 17312127   );     ft_printf("\n");

ft_printheader("Test %x (lower)");

    printf("printf: |%x|", 0xF );    printf("\n");
    ft_printf("ft_printf: |%x|", 12   );     ft_printf("\n");


ft_printheader("Test %X (upper)");

    printf("printf: |%X|", 0xf );    printf("\n");
    ft_printf("ft_printf: |%X|", 12   );     ft_printf("\n");

ft_printheader("Test %% ");

    printf("printf: |%%|");    printf("\n");
    ft_printf("ft_printf: |%%|");     ft_printf("\n");
    return (0);
}