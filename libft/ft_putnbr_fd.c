/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofriedhe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 15:25:45 by ofriedhe          #+#    #+#             */
/*   Updated: 2020/02/20 15:25:46 by ofriedhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long long	divis;

	divis = 1;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		if (n == -2147483648)
		{
			ft_putstr_fd("2147483648", fd);
			return ;
		}
		n *= -1;
	}
	if (n == 0)
		ft_putchar_fd('0', fd);
	while (divis <= n)
		divis *= 10;
	divis /= 10;
	while (divis > 0)
	{
		ft_putchar_fd((n / divis) + '0', fd);
		n %= divis;
		divis /= 10;
	}
}
