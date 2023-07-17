/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_creation.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 16:37:23 by jrinna            #+#    #+#             */
/*   Updated: 2021/12/17 16:37:39 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	*ft_create_stack(int ac, char **av)
{
	int	*stack_a;
	int	i;

	i = 1;
	while (av[i])
		i++;
	stack_a = malloc(sizeof(int) * i);
	i = 0;
	while (av[++i])
		stack_a[i - 1] = ft_atoi(av[i]);
	return (stack_a);
}

t_double_list	*ft_create_llstack(int *stack, int size)
{
	t_double_list	*new_stack;
	t_double_list	*new;

	new_stack = NULL;
	while (size--)
	{
		new = ft_dlstnew(stack[size]);
		if (new)
			ft_dlstadd_front(&new_stack, new);
	}
	free(stack);
	return (new_stack);
}
