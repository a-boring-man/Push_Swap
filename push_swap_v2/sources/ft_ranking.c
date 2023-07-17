/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ranking.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 16:40:14 by jrinna            #+#    #+#             */
/*   Updated: 2021/12/23 13:28:48 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	*ft_ranking(int *stack_a, int size)
{
	int	*new_stack_a;
	int	i;
	int	j;

	i = -1;
	new_stack_a = malloc(sizeof(int) * size);
	while (++i < size)
		new_stack_a[i] = 1;
	i = -1;
	while (++i < size)
	{
		j = -1;
		while (++j < size)
			if (i != j && stack_a[i] > stack_a[j])
				new_stack_a[i]++;
	}
	free (stack_a);
	return (new_stack_a);
}
