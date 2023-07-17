/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   link_list_core.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 17:32:53 by jrinna            #+#    #+#             */
/*   Updated: 2021/12/23 14:05:10 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_double_list	*ft_dlstnew(int content)
{
	t_double_list	*new;

	new = malloc(sizeof(t_double_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = new;
	new->previous = new;
	return (new);
}

void	ft_dlstadd_front(t_double_list **lst, t_double_list *new)
{
	if (*lst)
	{
		new->next = *lst;
		new->previous = (*lst)->previous;
		new->next->previous = new;
		new->previous->next = new;
	}
	*lst = new;
}
