/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofriedhe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 11:25:32 by ofriedhe          #+#    #+#             */
/*   Updated: 2020/02/20 11:25:33 by ofriedhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

char		*ft_strtrim(char const *s)
{
	int		i;
	int		start;
	int		end;
	char	*trim;

	i = 0;
	start = 0;
	end = 0;
	while (ft_isspace(s[i++]) == 1)
		start++;
	while (s[i])
		i++;
	i--;
	while (ft_isspace(s[i]) == 1)
		i--;
	end = i;
	trim = (char*)malloc((end - start) + 2);
	if (!trim)
		return (NULL);
	i = 0;
	while (start <= end)
		trim[i++] = s[start++];
	trim[i] = '\0';
	return (trim);
}
