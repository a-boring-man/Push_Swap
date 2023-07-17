/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 17:23:56 by jrinna            #+#    #+#             */
/*   Updated: 2021/12/23 14:03:26 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

typedef struct s_double_list
{
	int						content;
	struct s_double_list	*next;
	struct s_double_list	*previous;
}	t_double_list;

typedef struct s_push_swap
{
	t_double_list	*stack_a;
	t_double_list	*stack_b;
	int				size;
}	t_push_swap;

int				ft_check_error(int ac, char **av);
int				*ft_create_stack(int ac, char **av);
t_double_list	*ft_create_llstack(int *stack, int size);
int				*ft_ranking(int *stack_a, int size);
int				ft_already_sort(t_push_swap *ref);
t_double_list	*ft_dlstnew(int content);
void			ft_dlstadd_front(t_double_list **lst, t_double_list *new);
void			swap_a(t_push_swap *ref);
void			swap_b(t_push_swap *ref);
void			swap_ab(t_push_swap *ref);
void			rotate_a(t_push_swap *ref);
void			rotate_b(t_push_swap *ref);
void			rotate_ab(t_push_swap *ref);
void			reverse_rotate_a(t_push_swap *ref);
void			reverse_rotate_b(t_push_swap *ref);
void			reverse_rotate_ab(t_push_swap *ref);
void			push_a_b(t_push_swap *ref);
void			push_b_a(t_push_swap *ref);
void			ft_push_swap_3(t_push_swap *ref);
void			ft_push_swap_5(t_push_swap *ref);
void			ft_push_swap_9000(t_push_swap *ref);

#endif