/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 16:43:19 by jrinna            #+#    #+#             */
/*   Updated: 2021/12/21 19:51:17 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	swap_a(t_push_swap *ref)
{
	t_double_list	*tmp_next;
	t_double_list	*tmp_previous;

	tmp_previous = ref->stack_a->previous;
	tmp_next = ref->stack_a->next->next;
	if (tmp_next == ref->stack_a)
	{
		ref->stack_a = tmp_previous;
		write(1, "sa\n", 3);
		return ;
	}
	ref->stack_a->previous = ref->stack_a->next;
	ref->stack_a->next->next = ref->stack_a;
	ref->stack_a->next->previous = tmp_previous;
	ref->stack_a->next = tmp_next;
	tmp_previous->next = ref->stack_a->previous;
	tmp_next->previous = ref->stack_a;
	ref->stack_a = ref->stack_a->previous;
	write(1, "sa\n", 3);
	/* // #region debug
	t_double_list *tmp;
	int counter = 7;
	tmp = (*lst);
	printf("stack : ");
	while (counter-- > 0)
	{
		printf("%d, ", tmp->content);
		tmp = tmp->next;
	}
	printf("\n---\n");
	// #endregion */
}

void	swap_b(t_push_swap *ref)
{
	t_double_list	*tmp_next;
	t_double_list	*tmp_previous;

	tmp_previous = ref->stack_b->previous;
	tmp_next = ref->stack_b->next->next;
	if (tmp_next == ref->stack_b)
	{
		ref->stack_b = tmp_previous;
		write(1, "sb\n", 3);
		return ;
	}
	ref->stack_b->previous = ref->stack_b->next;
	ref->stack_b->next->next = ref->stack_b;
	ref->stack_b->next->previous = tmp_previous;
	ref->stack_b->next = tmp_next;
	tmp_previous->next = ref->stack_b->previous;
	tmp_next->previous = ref->stack_b;
	ref->stack_b = ref->stack_b->previous;
	write(1, "sb\n", 3);
	/* // #region
	t_double_list *tmp;
	int counter = 7;
	tmp = (*lst);
	printf("stack : ");
	while (counter-- > 0)
	{
		printf("%d, ", tmp->content);
		tmp = tmp->next;
	}
	printf("\n---\n");
	// #endregion */
}

static void	swap_mute(t_double_list **lst)
{
	t_double_list	*tmp_next;
	t_double_list	*tmp_previous;

	tmp_previous = (*lst)->previous;
	tmp_next = (*lst)->next->next;
	if (tmp_next == *lst)
	{
		*lst = tmp_previous;
		return ;
	}
	(*lst)->previous = (*lst)->next;
	(*lst)->next->next = (*lst);
	(*lst)->next->previous = tmp_previous;
	(*lst)->next = tmp_next;
	tmp_previous->next = (*lst)->previous;
	tmp_next->previous = *lst;
	*lst = (*lst)->previous;
}

void	swap_ab(t_push_swap *ref)
{
	swap_mute(&(ref->stack_a));
	swap_mute(&(ref->stack_b));
	write(1, "ss\n", 3);
	/* // #region
	t_double_list *tmpa;
	t_double_list *tmpb;
	int counter = 7;
	tmpa = (*lst_a);
	tmpb = (*lst_b);
	printf("stack_a  : ");
	while (counter-- > 0)
	{
		printf("%d, ", tmpa->content);
		tmpa = tmpa->next;
	}
	counter = 7;
	printf("\nstack_b  : ");
	while (counter-- > 0)
	{
		printf("%d, ", tmpb->content);
		tmpb = tmpb->next;
	}
	counter = 7;
	tmpa = (*lst_a);
	tmpb = (*lst_b);
	printf("\nstack_ar : ");
	while (counter-- > 0)
	{
		printf("%d, ", tmpa->content);
		tmpa = tmpa->previous;
	}
	counter = 7;
	printf("\nstack_br : ");
	while (counter-- > 0)
	{
		printf("%d, ", tmpb->content);
		tmpb = tmpb->previous;
	}
	printf("\n---\n");
	// #endregion */
}
