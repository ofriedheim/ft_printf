/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofriedhe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 11:37:34 by ofriedhe          #+#    #+#             */
/*   Updated: 2020/02/20 11:37:35 by ofriedhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		wordcount(const char *s, char c)
{
	int		i;
	int		wc;

	i = 0;
	wc = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		if (s[i] != c)
			wc++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (wc);
}

static	char	*ft_subdup(const char *s, int start, int end)
{
	char	*str;
	int		i;

	str = (char*)malloc(end - start + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (start < end)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}

char			**ft_split(char const *s, char c)
{
	char	**splits;
	int		i;
	int		start;
	int		end;
	int		word;

	splits = (char**)malloc(sizeof(char *) * (wordcount(s, c) + 1));
	if (!splits)
		return (NULL);
	i = 0;
	word = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		start = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		end = i;
		splits[word++] = ft_subdup(s, start, end);
	}
	splits[word] = NULL;
	return (splits);
}
