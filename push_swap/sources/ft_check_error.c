/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 16:38:06 by jrinna            #+#    #+#             */
/*   Updated: 2021/12/23 10:22:30 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	ft_isdigit_and_signe(int c)
{
	return ((c > 47 && c < 58) || c == '-');
}

static int	ft_check_double(int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	while (av[++i])
	{
		j = 1;
		while (j < ac)
		{
			if (j != i && !ft_strcmp(av[i], av[j]))
			{
				// #region debug
				printf("\n i :%d, j :%d, av[i] :%s, av[j] :%s, ft_strcmp(av[i], av[j]) :%d\n", i, j, av[i], av[j], ft_strcmp(av[i], av[j]));
				// #endregion
				return (1);
			}
			j++;
		}
	}
	return (0);
}

int	ft_check_error(int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	while (av[++i])
	{
		j = -1;
		while (av[i][++j])
		{
			if (!ft_isdigit_and_signe(av[i][j]))
			{
				// #region debug
				printf("\ni :%d, j :%d, av[i][j] :%c, ft_isdigit(av[i][j]) :%d\n", i, j, av[i][j], ft_isdigit(av[i][j]));
				// #endregion
				return (1);
			}
		}
		if (ft_atol(av[i]) > INT_MAX || ft_atol(av[i]) < INT_MIN)
		{
			// #region debug
			printf("\nav[i] :%s, ft_atol(av[i]) > INT_MAX :%d, ft_atol(av[i]) < INT_MIN :%d\n", av[i], ft_atol(av[i]) > INT_MAX, ft_atol(av[i]) < INT_MIN);
			// #endregion			
			return (1);
		}
	}
	if (ft_check_double(ac, av))
		return (1);
	return (0);
}
