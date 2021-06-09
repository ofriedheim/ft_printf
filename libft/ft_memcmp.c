/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofriedhe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 18:36:44 by ofriedhe          #+#    #+#             */
/*   Updated: 2020/02/18 18:36:45 by ofriedhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			count;

	str1 = (unsigned char*)s1;
	str2 = (unsigned char*)s2;
	count = 0;
	if (!str1)
		return (*str1);
	if (!str2)
		return (*str2);
	if (n == 0)
		return (0);
	while (count < (n - 1))
	{
		if (str1[count] != str2[count])
			break ;
		count++;
	}
	return ((unsigned char)str1[count] - (unsigned char)str2[count]);
}
