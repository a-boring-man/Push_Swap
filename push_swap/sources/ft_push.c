/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 17:34:04 by jrinna            #+#    #+#             */
/*   Updated: 2021/12/21 18:49:26 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	push_a_b(t_push_swap *ref)
{
	t_double_list	*new_lsta;

	if (ref && ref->stack_a)
	{
		new_lsta = ref->stack_a->next;
		new_lsta->previous = ref->stack_a->previous;
		ref->stack_a->previous->next = new_lsta;
		ref->stack_a->previous = ref->stack_a;
		ref->stack_a->next = ref->stack_a;
		ft_dlstadd_front(&(ref->stack_b), ref->stack_a);
		if (ref->stack_a == new_lsta)
			ref->stack_a = NULL;
		else
			ref->stack_a = new_lsta;
		write(1, "pb\n", 3);
	}
	/* // #region debug
	t_double_list *tmpa;
	t_double_list *tmpb;
	int counter = 7;
	tmpa = (*lsta);
	tmpb = (*lstb);
	printf("stack_a  : ");
	while (counter-- > 0 && tmpa)
	{
		printf("%d, ", tmpa->content);
		tmpa = tmpa->next;
	}
	counter = 7;
	printf("\nstack_b  : ");
	while (counter-- > 0 && tmpb)
	{
		printf("%d, ", tmpb->content);
		tmpb = tmpb->next;
	}
	counter = 7;
	printf("\nstack_ar : ");
	while (counter-- > 0 && tmpb)
	{
		printf("%d, ", tmpa->content);
		tmpa = tmpa->previous;
	}
	counter = 7;
	printf("\nstack_br : ");
	while (counter-- > 0 && tmpb)
	{
		printf("%d, ", tmpb->content);
		tmpb = tmpb->previous;
	}
	printf("\n---\n");
	// #endregion */
}

void	push_b_a(t_push_swap *ref)
{
	t_double_list	*new_lstb;

	if (ref && ref->stack_b)
	{
		new_lstb = ref->stack_b->next;
		new_lstb->previous = ref->stack_b->previous;
		ref->stack_b->previous->next = new_lstb;
		ref->stack_b->previous = ref->stack_b;
		ref->stack_b->next = ref->stack_b;
		ft_dlstadd_front(&(ref->stack_a), ref->stack_b);
		if (ref->stack_b == new_lstb)
			ref->stack_b = NULL;
		else
			ref->stack_b = new_lstb;
		write(1, "pa\n", 3);
	}
	/* // #region debug
	t_double_list *tmpa;
	t_double_list *tmpb;
	int counter = 7;
	tmpa = (*lsta);
	tmpb = (*lstb);
	printf("stack_a : ");
	while (counter-- > 0 && tmpa)
	{
		printf("%d, ", tmpa->content);
		tmpa = tmpa->next;
	}
	counter = 7;
	printf("\nstack_b : ");
	while (counter-- > 0 && tmpb)
	{
		printf("%d, ", tmpb->content);
		tmpb = tmpb->next;
	}
	counter = 7;
	printf("\nstack_ar : ");
	while (counter-- > 0 && tmpa)
	{
		printf("%d, ", tmpa->content);
		tmpa = tmpa->previous;
	}
	counter = 7;
	printf("\nstack_br : ");
	while (counter-- > 0 && tmpb)
	{
		printf("%d, ", tmpb->content);
		tmpb = tmpb->previous;
	}
	printf("\n---\n");
	// #endregion */
}
