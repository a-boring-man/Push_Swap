/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 09:29:15 by jrinna            #+#    #+#             */
/*   Updated: 2021/12/21 19:22:05 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_push_swap_3(t_push_swap *ref)
{
	if (ref->stack_a->content == 3)
		rotate_a(ref);
	if (ref->stack_a->next->content == 3)
		reverse_rotate_a(ref);
	if (ref->stack_a->content > ref->stack_a->next->content)
		swap_a(ref);
}
