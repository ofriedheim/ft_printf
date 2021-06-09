/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofriedhe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 11:13:55 by ofriedhe          #+#    #+#             */
/*   Updated: 2020/02/20 11:13:56 by ofriedhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*cat;
	int		i;
	int		j;

	cat = ft_calloc((ft_strlen(s1) + ft_strlen(s2) + 1), sizeof(char));
	if (!cat)
		return (NULL);
	i = -1;
	j = -1;
	while (s1[++i])
		cat[++j] = s1[i];
	i = -1;
	while (s2[++i])
		cat[++j] = s2[i];
	cat[++j] = '\0';
	return (cat);
}
