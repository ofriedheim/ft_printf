#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "libft/libft.h"
#include "ft_printf.h"

void	ft_putchar_increment(char c, t_flags *flags)
{
	write(1, &c, 1);
	flags->total++;
}