#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "libft/libft.h"

#define TRUE 1
#define FALSE 0

/*
TODO:
-fix makefile. figure out how to compile it all with libft.a

FINISHED:
-pointer
-char
-string
-int
-hex low
-hex cap
-unsigned int
	-figure out why it's reading too far
	-it was because it was reading num as an int and not long long



*/

typedef struct		s_flags
{
	char			just;
	char			pad;
	size_t			prec;
	size_t			width;
	size_t			index;
	size_t			total;

}					t_flags;

int					ft_printf(const char *str, ...);

void				char_out(t_flags *flags, va_list args);
void				hex_out_lower(t_flags *flags, va_list args);
void				hex_out_upper(t_flags *flags, va_list args);
void				int_out(t_flags* flags, va_list args);
void				point_out(t_flags *flags, va_list args);
void				str_out(t_flags *flags, va_list args);
void				uint_out(t_flags* flags, va_list args);

void				flag_adjust(char *str, t_flags *flags);
void				helper(char *str, t_flags *flags);
void				mount_flags(const char *str,t_flags *flags, va_list args);
void				switchboard(
					const char *str, t_flags *flags, va_list args
					);
size_t				num_set(const char *str, t_flags *flags);
void				reset_flags(t_flags *flags);
int					not_specifier(const char *str, t_flags *flags);
void				ft_putchar_increment(char c, t_flags *flags);



#endif