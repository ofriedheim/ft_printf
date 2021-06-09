#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "libft/libft.h"
#include "ft_printf.h"

/*TESTED:
-char
-int
-hex lower
-hex upper
-pointer is half complete, will need to redo the tests to verify the accuracy
*/

/*
TODO:
	fix string out
	create new string out flag adjuster
	*/

void	char_comp()
{
	printf("Test 1:\n%d\n", printf("%5c\n", 'x'));
	printf("Test 2:\n%d\n", printf("%-5c\n", 'x'));
	printf("Test 3:\n%d\n", printf("%05c\n", 'x'));
	printf("Test 4:\n%d\n", printf("%.5c\n", 'x'));

}

void	char_test()
{
//	TEST 1 standard test, width only
	printf("Test 1:\n%d\n", ft_printf("%5c\n", 'x'));
	
//	TEST 2 standard test, widtht + left justify	
	printf("Test 2:\n%d\n", ft_printf("%-5c\n", 'x'));

//	TEST 3 pad zero
	printf("Test 3:\n%d\n", ft_printf("%05c\n", 'x'));

//	TEST 4 check that precision is discarded with left justify
	printf("Test 4:\n%d\n", ft_printf("%.5c\n", 'x'));
}

void	hex_lower_test()
{
//	TEST 1 standard test, width + prec
	printf("TEST 1:\n%d\n", ft_printf("%10.5x\n", 42069));

//	TEST 2 standard test, width + pad 0
	printf("TEST 2:\n%d\n", ft_printf("%010x\n", 42069));

//	TEST 3 standard test, width + left justify
	printf("TEST 3:\n%d\n", ft_printf("%-10x\n", 42069));

//	TEST 4 make sure pad zero is discarded with left justify
	printf("TEST 4:\n%d\n", ft_printf("%-10.5x\n", 42069));

//	TEST 5 make sure pad zero is discarded with precision
	printf("TEST 5:\n%d\n", ft_printf("%010.5x\n", 42069));
}

void	hex_lower_comp()
{
	printf("Test 1:\n%d\n", printf("%10.5x\n", 42069));
	printf("Test 2:\n%d\n", printf("%010x\n", 42069));
	printf("Test 3:\n%d\n", printf("%-10x\n", 42069));
	printf("Test 4:\n%d\n", printf("%-10.5x\n", 42069));
	printf("Test 5:\n%d\n", printf("%010.5x\n", 42069));
}

void	hex_upper_test()
{
//	TEST 1 standard test, width + prec
	printf("TEST 1:\n%d\n", ft_printf("%10.5X\n", 42069));

//	TEST 2 standard test, width + pad 0
	printf("TEST 2:\n%d\n", ft_printf("%010X\n", 42069));

//	TEST 3 standard test, width + left justify
	printf("TEST 3:\n%d\n", ft_printf("%-10X\n", 42069));

//	TEST 4 make sure pad zero is discarded with left justify
	printf("TEST 4:\n%d\n", ft_printf("%-10.5X\n", 42069));

//	TEST 5 make sure pad zero is discarded with precision
	printf("TEST 5:\n%d\n", ft_printf("%010.5X\n", 42069));
}
void	hex_upper_comp()
{
	printf("TEST 1:\n%d\n", printf("%10.5X\n", 42069));
	printf("TEST 2:\n%d\n", printf("%010X\n", 42069));
	printf("TEST 3:\n%d\n", printf("%-10X\n", 42069));
	printf("TEST 4:\n%d\n", printf("%-10.5X\n", 42069));
	printf("TEST 5:\n%d\n", printf("%010.5X\n", 42069));
}
void	int_comp()
{
	printf("\n%d\n", printf("Test 1: %10.5d\n", 42069));
	printf("\n%d\n", printf("Test 2: %010d\n", 42069));
	printf("\n%d\n", printf("Test 3: %010.5d\n", 42069));
	printf("\n%d\n", printf("Test 4: %-010d\n", 42069));

}

void	ft_int_test()
{
// 	TEST 1 - standard test, width and precision
	printf("\n%d\n", ft_printf("Test 1: %10.5d\n", 42069));

//	TEST 2 standard test pad with 0
	printf("\n%d\n", ft_printf("Test 2: %010d\n", 42069));

//	TEST 3 - make sure that pad with zero is properly discarded with precision
	printf("\n%d\n", ft_printf("Test 3: %010.5d\n", 42069));

//	TEST 4 - make sure that pad with zero is properly discarded with left justify
	printf("\n%d\n", ft_printf("Test 4: %-010d\n", 42069));
}

void	pointer_test()
{
	int		a = 42069;
	int		*b;

	b = &a;

//	TEST 1, standard test, width
	printf("Test 1:\n%d\n", ft_printf("%20p\n", b));

//	TEST 2, standard test, width + left justify
	printf("Test 2:\n%d\n", ft_printf("%-20p\n", b));

//	TEST 3, check precision is discarded
	printf("Test 3:\n%d\n", ft_printf("%20.5p\n", b));
	
//	TEST 4 check that pad zero is discarded	
	printf("Test 4:\n%d\n", ft_printf("%020p\n", b));

}

void	pointer_comp()
{
	int a = 42069;
	int *b;

	b = &a;

	printf("Test 1:\n%d\n", printf("%20p\n", b));
	printf("Test 2:\n%d\n", printf("%-20p\n", b));
	printf("Test 3:\n%d\n", printf("%20.5p\n", b));
	printf("Test 4:\n%d\n", printf("%020p\n", b));
}

void	string_test()
{
//	TEST 1, standard test
	printf("TEST 1:\n%d\n", ft_printf("%20s\n", "This is a test"));

//	TEST 2, standard test, left justify
	printf("TEST 2:\n%d\n", ft_printf("%-20s\n", "This is a test"));

//	TEST 3, precision
	printf("TEST 3:\n%d\n", ft_printf("%20.5s\n", "This is a test"));

//	standard test, should NOT truncate
	printf("Test 4:\n%d\n", ft_printf("%20s\n", "This is a test. abcdefghijklmnop"));

//	left justify, no truncation
	printf("Test 5:\n%d\n", ft_printf("%-20s\n", "This is a test. abcdefghijklmnop"));

//	precision, should truncate	
	printf("Test 6:\n%d\n", ft_printf("%20.5s\n", "This is a test. abcdefghijklmnop"));

}

void	string_comp()
{
	printf("Test 1:\n%d\n", printf("%20s\n", "This is a test"));
	printf("Test 2:\n%d\n", printf("%-20s\n", "This is a test"));
	printf("Test 3:\n%d\n", printf("%20.5s\n", "This is a test"));
	printf("Test 4:\n%d\n", printf("%20s\n", "This is a test. abcdefghijklmnop"));
	printf("Test 5:\n%d\n", printf("%-20s\n", "This is a test. abcdefghijklmnop"));
	printf("Test 6:\n%d\n", printf("%20.5s\n", "This is a test. abcdefghijklmnop"));


}

int		main()
{
	string_test();
//	string_comp();
}
