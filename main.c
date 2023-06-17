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
	ft_printheader("Test %c");
	printf("Testing: (\"\\t%%c\\n\", 'a')\n");
	x +=    printf("  Ft\t:\t%c\n", 'x');
	y += ft_printf("  Ft\t:\t%c\n", 'x');
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"%%c\", '0')\n");
	x +=    printf("%c", '0'); printf("\n");
	y += ft_printf("%c", '0'); printf("\n");
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\tThe character %%c is visible.\\n\", 'x')\n");
	x += printf("  Or\t:\tThe character %c is visible.\n", 'x');
	y += ft_printf("  Ft\t:\tThe character %c is visible.\n", 'x');
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
}

void    test_s(void)
{
    int	x, y;
	x = 0;
	y = 0;
    ft_printheader("Test %s");
    printf("Testing: (\"\\t%%s\\n\", 'TEST')\n");
	x +=    printf("  Ft\t:\t%s\n", "TEST");
	y += ft_printf("  Ft\t:\t%s\n", "TEST");
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\" NULL %%s NULL %%s\", Test , Test)\n");
	x +=    printf(" NULL %s NULL %s", "Test", "Test"); printf("\n");
	y += ft_printf(" NULL %s NULL %s", "Test", "Test"); printf("\n");
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
}

void    test_i(void)
{
    int	x, y;
	x = 0;
	y = 0;
    ft_printheader("Test %i");
    printf("Testing: (\"\\t%%i\\n\", 9)\n");
	x +=    printf(" %i ", 9); printf("\n");
	y += ft_printf(" %i ", 9); printf("\n");
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\t%%i\\n\", 10)\n");
	x +=    printf(" %i ", 10); printf("\n");
	y += ft_printf(" %i ", 10); printf("\n");
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
    x = 0;
	y = 0;
	printf("Testing: (\"\\t%%i\\n\", 100)\n");
	x +=    printf(" %i ", 100); printf("\n");
	y += ft_printf(" %i ", 100); printf("\n");
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
    x = 0;
	y = 0;
	printf("Testing: (\"\\t%%i\\n\", 1001)\n");
	x +=    printf(" %i ", 1001); printf("\n");
	y += ft_printf(" %i ", 1001); printf("\n");
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
}

void    test_u(void)
{
    int	x, y;
	x = 0;
	y = 0;
    ft_printheader("Test %u");
    printf("Testing: (\"\\t%%u\\n\", 9)\n");
	x +=    printf(" %u ", 9); printf("\n");
	y += ft_printf(" %u ", 9); printf("\n");
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\t%%u\\n\", -1)\n");
	x +=    printf(" %u ", -1); printf("\n");
	y += ft_printf(" %u ", -1); printf("\n");
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
    x = 0;
	y = 0;
	printf("Testing: (\"\\t%%u\\n\", 100)\n");
	x +=    printf(" %u ", 100); printf("\n");
	y += ft_printf(" %u ", 100); printf("\n");
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
    x = 0;
	y = 0;
	printf("Testing: (\"\\t%%u\\n\", 1001)\n");
	x +=    printf(" %u ", 1001); printf("\n");
	y += ft_printf(" %u ", 1001); printf("\n");
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
}

void    test_percent(void)
{
    int	x, y;
	x = 0;
	y = 0;
    ft_printheader("Test %%");
    printf("Testing: (\"\\t%%%%\\n\")\n");
	x +=    printf(" %%%% "); printf("\n");
	y += ft_printf(" %%%% "); printf("\n");
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
    printf("Testing: (\"\\t%%%%%%%%\\n\")\n");
	x +=    printf(" %%%%%%%% "); printf("\n");
	y += ft_printf(" %%%%%%%% "); printf("\n");
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
}



int main(void)
{
    //test_c();

    //test_s();

    //test_p(void);

    //test_i();

    //test_u();

   // test_percent();

    int num = 42;
    int *ptr = &num;  // Speicheradresse von 'num' in 'ptr' speichern

    printf("Die Speicheradresse von 'num' ist: %p\n", (void*)&num);
    printf("Der Wert von 'ptr' ist: %p\n \n \n", (void*)ptr);
    void *Test = "Test";
    printf("Pointer printf %p\n", Test);
    ft_printf("%p\n", Test);


printf("%lu\n", -ULONG_MAX );

return (0);
}