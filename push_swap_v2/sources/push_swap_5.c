/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_5.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 19:13:00 by jrinna            #+#    #+#             */
/*   Updated: 2021/12/21 19:51:40 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	ft_push_swap_5_sort(t_push_swap *ref)
{
	if (ref->stack_a->content == 5)
		rotate_a(ref);
	if (ref->stack_a->next->content == 5)
		reverse_rotate_a(ref);
	if (ref->stack_a->content > ref->stack_a->next->content
		&& ref->stack_b->content < ref->stack_b->next->content)
		swap_ab(ref);
	if (ref->stack_a->content > ref->stack_a->next->content)
		swap_a(ref);
	if (ref->stack_b->content < ref->stack_b->next->content)
		swap_b(ref);
	push_b_a(ref);
	push_b_a(ref);
}

void	ft_push_swap_5(t_push_swap *ref)
{
	int				counter;

	ref->stack_b = NULL;
	counter = 0;
	while (ref->stack_a->previous->content < 3)
		reverse_rotate_a(ref);
	while (counter < 2)
	{
		if (ref->stack_a->content < 3)
		{
			push_a_b(ref);
			counter++;
		}
		else
			rotate_a(ref);
	}
	ft_push_swap_5_sort(ref);
}
