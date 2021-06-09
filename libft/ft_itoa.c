/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofriedhe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 14:54:22 by ofriedhe          #+#    #+#             */
/*   Updated: 2020/02/25 14:54:24 by ofriedhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	itoa_helper(char *str, int n, long long divis)
{
	while (divis > 0)
	{
		*str = ((n / divis) + '0');
		n %= divis;
		divis /= 10;
		str++;
	}
	*str = '\0';
}

char	*ft_itoa(int n)
{
	long long	divis;
	char		buf[20];
	char		*str;

	divis = 1;
	str = buf;
	if (n < 0)
	{
		if (n == -2147483648)
			return (ft_strdup("-2147483648"));
		*str = '-';
		str++;
		n *= -1;
	}
	while (divis <= n)
		divis *= 10;
	divis /= 10;
	if (n == 0)
		str = ft_strdup("0");
	else
	{
		itoa_helper(str, n, divis);
		str = ft_strdup(buf);
	}
	return (str);
}
