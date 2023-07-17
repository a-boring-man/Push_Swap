/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 16:51:52 by jrinna            #+#    #+#             */
/*   Updated: 2021/12/21 17:57:32 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rotate_a(t_push_swap *ref)
{
	if (ref->stack_a)
	{
		ref->stack_a = ref->stack_a->next;
		write(1, "ra\n", 3);
	}
}

void	rotate_b(t_push_swap *ref)
{
	if (ref->stack_b)
	{
		ref->stack_b = ref->stack_b->next;
		write(1, "rb\n", 3);
	}
}

static void	rotate_mute(t_double_list **lst)
{
	if (*lst)
		*lst = (*lst)->next;
}

void	rotate_ab(t_push_swap *ref)
{
	if (ref->stack_a && ref->stack_b)
	{
		rotate_mute(&(ref->stack_a));
		rotate_mute(&(ref->stack_b));
	}
}
