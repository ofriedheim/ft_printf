/*

string is compatible with the following flags:
- AKA left justify

. AKA precision (in strings, the precision is simply the number of characters output)
.* AKA precision with the precision being the value before the string (50, string) truncates but width doesn't
*/

#include <stdio.h>
#include "ft_printf.h"

void	helper_prec(char *str, t_flags *flags)
{
	int		i;

	i = -1;

	if (flags->prec != 0)
		while (++i < flags->prec)
			ft_putchar(str[i]);
	else
		ft_putstr(str);
}

void	helper(char *str, t_flags *flags)
{
	flag_adjust(str, flags);
	if (prec != 0)
	if (flags->just == 'l')
	{
		if (flags->prec != 0)
		while ((flags->width)--)
			ft_putchar(' ');
	}
	else
	{
		while ((flags->width)--)
			ft_putchar(flags->pad);
		ft_putstr(str);
	}
}

void	str_out(t_flags *flags, va_list args)
{
	char	*str;

	str = va_arg(args, char*);
	helper(str, flags);
}
