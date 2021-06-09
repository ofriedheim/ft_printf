/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofriedhe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 16:28:34 by ofriedhe          #+#    #+#             */
/*   Updated: 2020/02/18 16:28:36 by ofriedhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char*)dst;
	s2 = (unsigned char*)src;
	while (n--)
	{
		if (*s2 == (unsigned char)c)
		{
			*s1 = *s2;
			s1++;
			return (s1);
		}
		*s1 = *s2;
		s1++;
		s2++;
	}
	return (0);
}
