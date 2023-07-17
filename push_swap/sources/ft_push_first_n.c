/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_first_n.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 15:12:09 by jrinna            #+#    #+#             */
/*   Updated: 2021/12/22 16:44:28 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_push_first_n(t_push_swap *ref, int n)
{
	int	counter;
	int	tmp;

	counter = 0;
	tmp = ref->size;
	while (tmp-- && counter < n)
	{
		if (ref->stack_a->content <= n)
		{
			push_a_b(ref);
			counter++;
		}
		else
			rotate_a(ref);
	}
}

void	ft_push_last_n(t_push_swap *ref, int cut)
{
	while (ref->stack_b->content > cut)
		push_b_a(ref);
}
