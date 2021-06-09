/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofriedhe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 11:26:14 by ofriedhe          #+#    #+#             */
/*   Updated: 2020/02/19 11:26:15 by ofriedhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*cpy;

	cpy = (char*)s;
	while (*cpy != '\0')
	{
		if (*cpy == (unsigned char)c)
			return (cpy);
		cpy++;
	}
	if (c == 0)
		return (cpy);
	return (NULL);
}
