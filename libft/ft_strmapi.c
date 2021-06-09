/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofriedhe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 16:58:41 by ofriedhe          #+#    #+#             */
/*   Updated: 2020/02/19 16:58:44 by ofriedhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new;
	int		i;

	new = ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!new)
		return (NULL);
	i = -1;
	while (s[++i])
		new[i] = f(i, s[i]);
	new[i] = '\0';
	return (new);
}
