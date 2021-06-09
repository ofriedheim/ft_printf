/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofriedhe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 12:45:33 by ofriedhe          #+#    #+#             */
/*   Updated: 2020/02/19 12:45:34 by ofriedhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t			i;
	size_t			count;
	size_t			temp;

	count = 0;
	if (!(*needle))
		return ((char*)haystack);
	while (*haystack != '\0' && count < len)
	{
		i = 0;
		temp = count;
		while (haystack[i] == needle[i])
		{
			i++;
			if (temp >= len)
				return (NULL);
			if (needle[i] == '\0')
				return ((char*)haystack);
			temp++;
		}
		haystack++;
		count++;
	}
	return (NULL);
}
