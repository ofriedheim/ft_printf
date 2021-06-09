/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofriedhe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 13:43:25 by ofriedhe          #+#    #+#             */
/*   Updated: 2020/02/19 13:43:26 by ofriedhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	count;

	count = 0;
	if (n == 0)
		return (0);
	while (*s1 && *s2 && count < (n - 1))
	{
		if (*s1 != *s2)
			break ;
		s1++;
		s2++;
		count++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
