/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofriedhe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 16:50:55 by ofriedhe          #+#    #+#             */
/*   Updated: 2020/02/18 16:50:57 by ofriedhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*ds;
	const char	*ss;

	if (!dst && !src)
		return (0);
	ds = (char*)dst;
	ss = (const char*)src;
	if (ds > ss)
		while (len--)
			ds[len] = ss[len];
	else
	{
		i = -1;
		while (++i < len)
			ds[i] = ss[i];
	}
	return (dst);
}
