/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofriedhe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 14:21:44 by ofriedhe          #+#    #+#             */
/*   Updated: 2020/02/21 14:21:45 by ofriedhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_list_size(t_list *begin_list)
{
	int		c;
	t_list	*list;

	c = 0;
	list = begin_list;
	while (list)
	{
		list = list->next;
		c++;
	}
	return (c);
}
