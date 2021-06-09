/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofriedhe </var/mail/ofriedhe>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/15 16:16:12 by ofriedhe          #+#    #+#             */
/*   Updated: 2020/04/15 16:16:12 by ofriedhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;

	len = 0;
	size--;
	while (len < size && src[len])
	{
		dst[len] = src[len];
		len++;
	}
	dst[len] = '\0';
	return (ft_strlen(src));
}
