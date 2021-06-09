
/*

compatible with:
-	AKA left justify
.	AKA precision
.*	AKA precision, where precision is the variable preceding the value to be output (precision number, value_outt)
*/

#include <stdio.h>
#include "ft_printf.h"
#include "libft/libft.h"

void	uint_out(t_flags* flags, va_list args)
{
	char			*str;
	unsigned int	num;

	num = va_arg(args, unsigned int);
	str = ft_uitoa(num);
	helper(str, flags);
}
