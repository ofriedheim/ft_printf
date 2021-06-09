/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofriedhe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 10:59:19 by ofriedhe          #+#    #+#             */
/*   Updated: 2020/02/19 10:59:20 by ofriedhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dstlen;
	size_t	dstorigin;

	i = 0;
	j = 0;
	dstlen = sizeof(dst);
	i = ft_strlen(dst);
	dstorigin = i;
	if (i >= dstsize)
		return (dstsize + ft_strlen(src));
	dstsize -= i + 1;
	if (dstsize == 0)
		return (dstorigin + ft_strlen(src));
	while (dstsize && src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
		dstsize--;
	}
	dst[i - (i == dstlen ? 1 : 0)] = '\0';
	return (dstorigin + ft_strlen(src));
}
