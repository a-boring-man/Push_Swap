/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 15:26:20 by jrinna            #+#    #+#             */
/*   Updated: 2021/12/23 14:06:05 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	ft_free(t_push_swap *ref)
{
	t_double_list	*tmp;

	if (ref && ref->stack_a)
		ref->stack_a->previous->next = NULL;
	while (ref && ref->stack_a)
	{
		tmp = ref->stack_a->next;
		free(ref->stack_a);
		ref->stack_a = tmp;
	}
	if (ref && ref->stack_b)
		ref->stack_b->previous->next = NULL;
	while (ref && ref->stack_b)
	{
		tmp = ref->stack_b->next;
		free(ref->stack_b);
		ref->stack_b = tmp;
	}
}

static void	ft_algo_init(t_push_swap *ref)
{
	if (ft_already_sort(ref))
		return ;
	else if (ref->size > 5)
		ft_push_swap_9000(ref);
	else if (ref->size > 3)
		ft_push_swap_5(ref);
	else if (ref->size < 4)
		ft_push_swap_3(ref);
}

int	main(int argc, char **argv)
{
	int				*stack_a;
	t_push_swap		ref;
	t_double_list	*tmp;

	if (argc < 2)
		return (0);
	if (ft_check_error(argc, argv))
	{
		ft_putstr_fd("Error\n", 2);
		return (0);
	}
	stack_a = ft_create_stack(argc, argv);
	stack_a = ft_ranking(stack_a, argc - 1);
	ref.stack_a = ft_create_llstack(stack_a, argc - 1);
	ref.size = argc - 1;
	ft_algo_init(&ref);
	ft_free(&ref);
}
