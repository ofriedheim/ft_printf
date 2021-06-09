/*

character is compatible with the following flags
"-" AKA Left justify


*/

#include <stdio.h>
#include "ft_printf.h"
#include "libft/libft.h"

void	char_out(t_flags *flags, va_list args)
{
	int		c;
	
	flags->total += flags->width != 0 ? flags->width : 1;
	flags->pad = ' ';
	flags->width -= flags->width != 0 ? 1 : 0;
//	printf("Flags->width == %zu\n", flags->width);
	c = va_arg(args, int);
//	printf("c == %c\n", c);
	if (flags->just == 'l')
	{
		ft_putchar(c);
		while ((flags->width)--)
			ft_putchar(flags->pad);
	}
	else
	{
		while ((flags->width)--)
			ft_putchar(flags->pad);
		ft_putchar(c);
	}
}
