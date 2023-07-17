/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_9000.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 10:36:22 by jrinna            #+#    #+#             */
/*   Updated: 2021/12/23 11:48:50 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_push_swap_9000(t_push_swap *ref)
{
	int	i;
	int	j;

	i = 0;
	while (!ft_already_sort(ref))
	{
		j = -1;
		while (++j < ref->size)
		{
			if ((ref->stack_a->content >> i) & 1)
				rotate_a(ref);
			else
				push_a_b(ref);
		}
		while (ref->stack_b)
			push_b_a(ref);
		i++;
	}
}
