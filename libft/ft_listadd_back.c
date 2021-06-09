/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofriedhe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 14:21:22 by ofriedhe          #+#    #+#             */
/*   Updated: 2020/02/21 14:21:23 by ofriedhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_listadd_back(t_list **begin_list, void *data, size_t size)
{
	t_list *list;

	list = *begin_list;
	if (!list)
		list = ft_lstnew(data, size);
	while (list->next)
		list = list->next;
	list->next = ft_lstnew(data, size);
}
