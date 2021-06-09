/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofriedhe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 18:16:55 by ofriedhe          #+#    #+#             */
/*   Updated: 2020/02/18 18:16:56 by ofriedhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	void	*str;

	str = (void*)s;
	while (n)
	{
		if (*(unsigned const char*)str == (unsigned const char)c)
			return (str);
		str++;
		n--;
	}
	return (NULL);
}
