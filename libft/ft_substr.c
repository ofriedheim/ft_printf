/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofriedhe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 11:05:37 by ofriedhe          #+#    #+#             */
/*   Updated: 2020/02/20 11:05:38 by ofriedhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	count;
	char	*sub;

	count = 0;
	sub = ft_calloc(len + 1, sizeof(char));
	if (!sub)
		return (NULL);
	if (*s == '\0')
		return (NULL);
	while (count < len)
		sub[count++] = s[start++];
	sub[count] = '\0';
	return (sub);
}
