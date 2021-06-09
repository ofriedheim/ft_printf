/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofriedhe </var/mail/ofriedhe>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 13:46:14 by ofriedhe          #+#    #+#             */
/*   Updated: 2020/09/22 13:46:14 by ofriedhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */#include "libft.h"

#include "libft.h"

static int	count_digits(long int n, int base)
{
	int c;

	c = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= base;
		c++;
	}
	return (c);
}

static void	check_sign(long int *nbr, int *sign)
{
	*sign = 0;
	if (*nbr < 0)
	{
		*sign = 1;
		*nbr *= -1;
	}
}

char		*ft_itoa_base(long int num, int base, int lower)
{
	char	*str;
	char	*digits;
	int		len;
	int		i;
	int		sign;

	check_sign(&num, &sign);
	len = 0;
	if (lower == 1)
		digits = "0123456789abcdef";
	else
		digits = "0123456789ABCDEF";
	i = -1;
	len = count_digits(num, base) + sign;
	if (!(str = (char*)malloc((sizeof(*str) * len + 1 + sign))))
		return (NULL);
	str[len] = '\0';
	while (++i < len)
	{
		str[len - 1 - i] = digits[num % base];
		num /= base;
	}
	if (sign == 1)
		str[0] = '-';
	return (str);
}
