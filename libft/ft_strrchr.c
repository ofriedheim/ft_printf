/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofriedhe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 11:44:32 by ofriedhe          #+#    #+#             */
/*   Updated: 2020/02/19 11:44:33 by ofriedhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*cpy;
	char	*needle;
	size_t	i;

	cpy = (char*)s;
	i = ft_strlen(s);
	needle = NULL;
	if (!c)
		return (&(cpy[i]));
	while (*cpy)
	{
		if (*cpy == c)
			needle = cpy;
		cpy++;
	}
	if (!needle)
		return (0);
	return (needle);
}
