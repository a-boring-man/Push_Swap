/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_100.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 14:34:32 by jrinna            #+#    #+#             */
/*   Updated: 2021/12/22 14:14:31 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_push_split_b(t_push_swap *ref)
{
	if (ref->csplit == ref->split)
		ft_push_last_n(ref, ref->size - 2 * ft_max(ref->size / ref->csplit, 3));
}

void	ft_multisplit(t_push_swap *ref)
{
	ref->csplit = ref->split;
	ft_push_split_b(ref);
}

static t_double_list	*ft_first_split(t_push_swap *ref, int split)
{
	int	tmp;

	tmp = ref->size;
	while (ref->size > ft_max(tmp / split, 3))
	{
		ft_push_first_n(ref, tmp - (ref->size / 2));
		ref->size = ref->size / 2;
	}
	ref->size = tmp;
	return (ref->stack_b);
}

void	ft_push_swap_100(t_push_swap *ref)
{
	ref->stack_b = NULL;
	ref->split = 32;
	ref->stack_b = ft_first_split(ref, ref->split);
	ft_multisplit(ref);
}
