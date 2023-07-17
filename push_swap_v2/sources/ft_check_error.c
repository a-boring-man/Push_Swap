/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 16:38:06 by jrinna            #+#    #+#             */
/*   Updated: 2022/01/03 10:12:03 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	ft_isdigit_and_signe(int c)
{
	return ((c > 47 && c < 58) || c == '-');
}

static int	ft_is_perfect(char *s)
{
	int	i;

	i = 0;
	if (!ft_strlen(s))
		return (0);
	while (s[i])
	{
		if ((!ft_isdigit(s[i]) && i != 0)
			|| (!ft_isdigit(s[i]) && i == 0 && s[i] != '-'))
			return (0);
		i++;
	}
	return (1);
}

static int	ft_check_double(int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	while (av[++i])
	{
		j = 0;
		while (++j < ac)
			if (j != i && (ft_atol(av[i]) == ft_atol(av[j])))
				return (1);
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
		if (!ft_is_perfect(av[i]))
			return (1);
		if (ft_atol(av[i]) > INT_MAX || ft_atol(av[i]) < INT_MIN)
			return (1);
	}
	if (ft_check_double(ac, av))
		return (1);
	return (0);
}
