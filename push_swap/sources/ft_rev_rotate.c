/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_rotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 17:17:50 by jrinna            #+#    #+#             */
/*   Updated: 2021/12/21 17:52:34 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	reverse_rotate_a(t_push_swap *ref)
{
	if (ref->stack_a)
	{
		ref->stack_a = ref->stack_a->previous;
		write(1, "rra\n", 4);
	}
}

void	reverse_rotate_b(t_push_swap *ref)
{
	if (ref->stack_b)
	{
		ref->stack_b = ref->stack_b->previous;
		write(1, "rrb\n", 4);
	}
}

static void	reverse_rotate_mute(t_double_list **lst)
{
	if (*lst)
		*lst = (*lst)->previous;
}

void	reverse_rotate_ab(t_push_swap *ref)
{
	if (ref->stack_a && ref->stack_b)
	{
		reverse_rotate_mute(&(ref->stack_a));
		reverse_rotate_mute(&(ref->stack_b));
		write(1, "rrr\n", 4);
	}
}
