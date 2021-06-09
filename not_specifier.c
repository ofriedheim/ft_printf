#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "libft/libft.h"
#include "ft_printf.h"

int		not_specifier(const char *str, t_flags *flags)
{
	if (str[flags->index] == 'c' || str[flags->index] == 's')
		return (FALSE);
	if (str[flags->index] == 'p' || str[flags->index] == 'd')
		return (FALSE);
	if (str[flags->index] == 'i' || str[flags->index] == 'u')
		return (FALSE);
	if (str[flags->index] == 'x' || str[flags->index] == 'X')
		return (FALSE);
	if (str[flags->index] == '\0')
		return (FALSE);
	return (TRUE);
}
