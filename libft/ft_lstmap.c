/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofriedhe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 12:50:39 by ofriedhe          #+#    #+#             */
/*   Updated: 2020/02/21 12:50:41 by ofriedhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*curr;
	t_list	*head;

	curr = lst;
	new = (t_list*)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new = f(curr);
	head = new;
	curr = curr->next;
	while (curr)
	{
		new->next = f(curr);
		new = new->next;
		curr = curr->next;
	}
	new->next = NULL;
	return (head);
}
