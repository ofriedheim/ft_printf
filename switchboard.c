#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "libft/libft.h"
#include "ft_printf.h"

void	switchboard(const char *str, t_flags *flags, va_list args)
{
//	printf("\ninside switchboard\n");
//	printf("flags->prec == '%zu'\n", flags->prec);
//	printf("index == %zu, str[index] == %c\n\n", flags->index, str[flags->index]);
	if (str[flags->index] == 'c')
	{
//		printf("Inside str[index] == 'c'\n");
		char_out(flags, args);
	}
	else if (str[flags->index] == 's')
		str_out(flags, args);
	else if (str[flags->index] == 'p')
		point_out(flags, args);
	else if (str[flags->index] == 'd' || *str == 'i')
	{
		//printf("inside switchboard flag == int\n");
		int_out(flags, args);
	}
	else if (str[flags->index] == 'u')
		uint_out(flags, args);
	else if (str[flags->index] == 'x')
		hex_out_lower(flags, args);
	else if (str[flags->index] == 'X')
		hex_out_upper(flags, args);
}
