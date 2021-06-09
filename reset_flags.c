#include "ft_printf.h"
#include "libft/libft.h"

void	reset_flags(t_flags *flags)
{
	flags->just = 'r';
	flags->pad = ' ';
	flags->prec = 0;
	//flags->total = 0;
	flags->width = 0;
}