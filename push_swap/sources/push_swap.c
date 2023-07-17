/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 15:26:20 by jrinna            #+#    #+#             */
/*   Updated: 2021/12/21 19:41:08 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_algo_init(t_push_swap *ref)
{
	if (ft_already_sort(ref))
		// #region debug
		printf("already sorted");
	// #endregion;
	/* if (size > 100)
		ft_push_swap_500(stack_a, size);*/
	else if (ref->size > 5)
		ft_push_swap_100(ref);
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
	/* // #region debug
	int i = -1;
	printf("\navant :\n\n");
	tmp = ref.stack_a;
	while (++i < argc - 1)
	{
		printf("%d, ", tmp->content);
		tmp = tmp->next;
	}
	// #endregion */
	ft_algo_init(&ref);
	/* // #region debug
	i = -1;
	printf("\napres :\n\n");
	tmp = ref.stack_a;
	while (++i < argc - 1)
	{
		printf("%d, ", tmp->content);
		tmp = tmp->next;
	}
	printf("\n");
	// #endregion */
}
