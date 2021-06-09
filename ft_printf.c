/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_//printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oliver <oliver@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 01:47:54 by oliver            #+#    #+#             */
/*   Updated: 2021/04/22 19:55:38 by oliver           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "libft/libft.h"
#include "ft_printf.h"

void	flag_adjust(char *str, t_flags *flags)
{

	if (flags->prec != 0)
		flags->pad = ' ';
	if (flags->prec < ft_strlen(str))
	{
		flags->prec = 0;
		if (flags->width >= ft_strlen(str))
		{
			flags->total += flags->width;
			flags->width -= ft_strlen(str);
		}
		else
			flags->total += ft_strlen(str);
	}
	else
		flags->width -= flags->prec;
	flags->prec -= flags->prec != 0 ? ft_strlen(str) : 0;

}

void	helper(char *str, t_flags *flags)
{
//	printf("Helper has been entered\n");
//	printf("flags->prec == '%zu'\n", flags->prec);
//	printf("Width AKA number of spaces to print == %zu\n", flags->width);
//	printf("flags->prec == '%zu'\n", flags->prec);
	flag_adjust(str, flags);
	if (flags->just == 'l')
	{
		if (flags->prec != 0)
			while ((flags->prec)--)
				ft_putchar('0');
		ft_putstr(str);
		while ((flags->width)--)
			ft_putchar(' ');
	}
	else
	{
		while ((flags->width)--)
			ft_putchar(flags->pad);
//		printf("finished printing width\n\n");
//		printf("flags->prec == '%zu'\n", flags->prec);
		if (flags->prec > 0)
			while ((flags->prec)-- > 0)
				ft_putchar('0');
//		printf("finished printing prec\n\n");
		ft_putstr(str);
	}
}

void	mount_flags(const char *str, t_flags *flags, va_list args)
{
	size_t	temp;

	temp = 0;
	while (not_specifier(str, flags) && str[flags->index])
	{
		flags->index++;
//		printf("Just inside mount_flags while\t\tstr == '%c'\n\n", str[flags->index]);
		if (str[flags->index] == '%')
		{
			ft_putchar_increment('%', flags);
			return ;
		}
		if (str[flags->index] == '-')
			flags->just = 'l';
		if (str[flags->index] == '0')
		{
			flags->pad = '0';
//			printf("flags->pad has been set\n");
		}
		else if (str[flags->index] >= '0' && str[flags->index] <= '9')
		{
			temp = num_set(str, flags);
			flags->width = temp;
//			printf("flags->width inside wid if == %zu\n", flags->width);
//			printf("index == %zu, str[index] == %c\n", flags->index, str[flags->index]);
		}
		if (str[flags->index] == '.')
		{
			//printf("inside prec\n");
			flags->index++;
			if (str[flags->index] == '*')
				temp = va_arg(args, int);
			else
				temp = num_set(str, flags);
			flags->prec = temp;
			//printf("\nflags->prec inside prec is == %zu\n", flags->prec);
			//printf("index == %zu\n", flags->index);
			break ;
		}
		//printf("reached end of mount_flags\n");
	}
//	printf("STR AT END OF LOOP == '%c'\n\n", str[flags->index]);
}

size_t		num_set(const char *str, t_flags *flags)
{
	int		j;
	char	*sub;

	j = 0;
	while (str[j] >= '0' && str[j] <= '9')
		j++;
	sub = (char*)malloc((j) + 1);
	j = 0;
	while (str[flags->index] >= '0' && str[flags->index] <= '9' &&
			str[flags->index] != '\0')
	{
		sub[j] = str[flags->index];
		j++;
		flags->index++;
	}
	sub[j] = '\0';
	size_t num = atoi(sub);
	return (num);
}

int		ft_printf(const char *str, ...)
{
	va_list args;
	t_flags	*flags;

	flags = (t_flags*)malloc(sizeof(t_flags));
	va_start(args, str);
	reset_flags(flags);
	flags->index = 0;
	while (str[flags->index])
	{
		if(str[flags->index] == '%')
		{
			//printf("Inside ft_//printf if *str == '%%'\n");
			mount_flags(str, flags, args);
/*			printf("\n\n");
			printf("flags->just = %c\n", flags->just);
			printf("flags->pad = '%c'\n", flags->pad);
			printf("flags->prec = %zu\n", flags->prec);
			printf("flags->width = %zu\n", flags->width);
			printf("flags->index = %zu\n", flags->index);
			printf("flags->total = %zu\n\n", flags->total);
			printf("flags mounted successfully. Next will be switchboard\n");
*/
			switchboard(str, flags, args);
//			printf("Switchboard passed\n");
			reset_flags(flags);
//			printf("flags reset\n");
		}
		else
		{
			//printf("inside else statement\n");
			ft_putchar_increment(str[flags->index], flags);
		}
		if (str[flags->index])
			flags->index++;
	}
	va_end(args);
	return (flags->total);
	return (0);
}
