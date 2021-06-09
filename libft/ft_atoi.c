/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofriedhe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 14:04:57 by ofriedhe          #+#    #+#             */
/*   Updated: 2020/02/19 14:04:58 by ofriedhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	unsigned long long	sum;
	int					i;
	int					sign;

	sum = 0;
	i = 0;
	sign = 1;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-')
	{
		i++;
		sign = -1;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] == '0')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
		sum = sum * 10 + (str[i++] - '0');
	if (sum > 9223372036854775807ull)
		return (sign == 1 ? -1 : 0);
	return ((int)(sum * sign));
}
