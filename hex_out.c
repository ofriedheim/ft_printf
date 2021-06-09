
/*

compatible with:
-	AKA left justify
0	AKA pad empty space with 0
	ignored with left justify
	ignored with precision
.	AKA precision
.*	AKA precision, where precision is the variable preceding the value to be output (precision number, value_outt)
*/

#include <stdio.h>
#include "ft_printf.h"
#include "libft/libft.h"

void	hex_out_lower(t_flags *flags, va_list args)
{
	int		num;
	char	*str;

	num = va_arg(args, int);
	str = ft_itoa_base(num, 16, 1);
	helper(str, flags);
}

void	hex_out_upper(t_flags *flags, va_list args)
{
	int		num;
	char	*str;

	num = va_arg(args, int);
	str = ft_itoa_base(num, 16, 2);
	helper(str, flags);
}