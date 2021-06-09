/*

pointer is compatible with the following flags:
- 	AKA left justify
*/

#include <stdio.h>
#include "ft_printf.h"
#include "libft/libft.h"

static void	pointer_helper(char *str, t_flags *flags)
{
	flag_adjust(str, flags);
	flags->width -= flags->width != 0 ? 2 : 0;
	if (flags->just == 'l')
	{
		ft_putstr("0x");
		if (flags->prec != 0)
			while ((flags->prec)--)
				ft_putchar('0');
		ft_putstr(str);
		while ((flags->width)--)
			ft_putchar(' ');
	}
	else
	{
		if (flags->pad == '0')
			ft_putstr("0x");
		while ((flags->width)--)
			ft_putchar(flags->pad);
		if (flags->pad != '0')
			ft_putstr("0x");
		if (flags->prec > 0)
			while ((flags->prec)-- > 0)
				ft_putchar('0');
		ft_putstr(str);
	}
}

void	point_out(t_flags *flags, va_list args)
{
	char	*str;
	void	*ptr;

	flags->prec = 0;
	ptr = va_arg(args, void*);
	str = ft_itoa_pointer(ptr);
	pointer_helper(str, flags);
}
