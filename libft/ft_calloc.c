/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofriedhe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/15 15:03:01 by ofriedhe          #+#    #+#             */
/*   Updated: 2020/04/15 15:03:01 by ofriedhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
	void	*fresh;

	fresh = malloc(nmemb * size);
	if (!fresh)
		return(NULL);
	ft_bzero(fresh, (nmemb * size));
	return (fresh);
}