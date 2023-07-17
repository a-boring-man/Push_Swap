/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_already_sort.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 16:41:12 by jrinna            #+#    #+#             */
/*   Updated: 2021/12/21 19:19:29 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_already_sort(t_push_swap *ref)
{
	int				i;
	int				c;
	t_double_list	*tmp;

	i = -1;
	c = 0;
	tmp = ref->stack_a;
	if (ref->size == 1)
		return (1);
	while (tmp && ++i < ref->size - 1)
	{
		if (tmp->content > tmp->next->content)
			c++;
		tmp = tmp->next;
	}
	return (!c);
}
