# include "ft_printf.h"
# include <limits.h>

static void ft_printheader(char *arg)
{
    printf("\n\n---------------------------------------\n");
    printf("\t\t %s\n", arg);
    printf("---------------------------------------\n\n");
}

void	test_c(void)
{
	int	x, y;
	x = 0;
	y = 0;
	printf("\n----------- TEST: %%c -----------\n\n");
	printf("Testing: (\"\\t%%c\\n\", 'a')\n");
	x +=    printf("  Ft\t:\t%c\n", 'a');
	y += ft_printf("  Ft\t:\t%c\n", 'a');
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\tThe character %%c is visible.\\n\", 'x')\n");
	x += printf("  Or\t:\tThe character %c is visible.\n", 'x');
	y += ft_printf("  Ft\t:\tThe character %c is visible.\n", 'x');
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
}

int main(void)
{
//return Value printf
ft_printheader("Test %c");
    char c_char = 'c';
    printf("   printf (b): |%c|", c_char);    printf("\n");
    ft_printf("ft_printf (b): |%c|", c_char);     ft_printf("\n");
    c_char = 't';
    printf("   printf (0): |%c|", c_char);     printf("\n");
    ft_printf("ft_printf (0): |%c|", c_char);     ft_printf("\n");
    c_char = 'x';
    printf("   printf (p): |%c|", '0'+256);     printf("\n");
    ft_printf("ft_printf (p): |%c|",'0'+256);     ft_printf("\n");
    printf("   printf (p): |%c|", '0'-256);     printf("\n");
    ft_printf("ft_printf (p): |%c|",'0'-256);     ft_printf("\n");
    test_c();


ft_printheader("Test %s");
    char *s_str = "TEST";
    printf("   printf: |%s|", s_str );    printf("\n");
    ft_printf("ft_printf: |%s|", s_str );     ft_printf("\n");
    s_str = "Test Test";
    printf("   printf: |%s|", s_str );     printf("\n");
    ft_printf("ft_printf: |%s|:", s_str );     ft_printf("\n");
    s_str = "Test Test Test";
    printf("   printf: |%s|", s_str );     printf("\n");
    ft_printf("ft_printf: |%s|", s_str );     ft_printf("\n");

ft_printheader("Test %p");
    void *ptr = "Test"; 
    printf   ("   Printf: |%p|", ptr);   printf("\n");
    ft_printf("ft_printf: |%p|", ptr);   ft_printf("\n");
    ptr = "NULL"; 
    printf   ("   Printf: |%p|", ptr);   printf("\n");
    ft_printf("ft_printf: |%p|", ptr);   ft_printf("\n");


ft_printheader("Test %d");
    int d_int = INT_MAX;
    printf("   printf: |%d|", d_int );    printf("\n");
    ft_printf("ft_printf: |%d|", d_int  );     ft_printf("\n");
    d_int = -7;
    printf("   printf: |%d|", d_int );    printf("\n");
    ft_printf("ft_printf: |%d|", d_int  );     ft_printf("\n");

ft_printheader("Test %i");
    int i_int = INT_MIN;
    printf("   printf: |%i|", i_int );    printf("\n");
    ft_printf("ft_printf: |%i|", i_int   );     ft_printf("\n");
    i_int = -9;
    printf("   printf: |%i|", i_int );    printf("\n");
    ft_printf("ft_printf: |%i|", i_int   );     ft_printf("\n");

ft_printheader("Test %u");
    
    unsigned int un_int = UINT_MAX;
    printf("   printf: |%u|", un_int );    printf("\n");
    ft_printf("ft_printf: |%u|", un_int   );     ft_printf("\n"); 
    un_int = -2;
    printf("   printf: |%u|", un_int );    printf("\n");
    ft_printf("ft_printf: |%u|", un_int   );     ft_printf("\n");


ft_printheader("Test %x (lower)");
    
    unsigned int x_int = 0xFF;
    printf("   printf: |%x|", x_int );   printf("\n");
    ft_printf("ft_printf: |%x|", x_int   );     ft_printf("\n");


ft_printheader("Test %X (upper)");
    
    unsigned int X_int = 0xff;
    printf("   printf: |%X|", X_int );    printf("\n");
    ft_printf("ft_printf: |%X|", X_int   );     ft_printf("\n");

ft_printheader("Test %% ");

    printf("   printf: |%%|");    printf("\n");
    ft_printf("ft_printf: |%%|");     ft_printf("\n");

return (0);

}