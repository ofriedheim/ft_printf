/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofriedhe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 19:27:12 by ofriedhe          #+#    #+#             */
/*   Updated: 2020/02/18 19:27:13 by ofriedhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*s2;

	s2 = (char*)malloc(ft_strlen(s1) + 1);
	if (!s2)
		return (NULL);
	len = -1;
	while (s1[++len])
		s2[len] = s1[len];
	s2[len] = '\0';
	return (s2);
}
