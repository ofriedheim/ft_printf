
/*

compatible with:
-	AKA left justify
0	AKA pad with zeros;
	ignored witth precision
	ignored with left justify
.	AKA precision
.*	AKA precision, where precision is the variable preceding the value to be output (precision number, value_outt)
*/

#include <stdio.h>
#include "ft_printf.h"
#include "libft/libft.h"

void	int_out(t_flags* flags, va_list args)
{
	int		num;;
	char	*str;

//	printf("int_out has been successfully entered\n");
	if (flags->just == 'l')
		flags->pad = ' ';
	num = va_arg(args, int);
	str = ft_itoa(num);
//	printf("\n\nstr == '%s'", str);
	helper(str, flags);
}
