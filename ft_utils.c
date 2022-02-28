/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-mach <iel-mach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 05:44:16 by iel-mach          #+#    #+#             */
/*   Updated: 2022/02/17 23:42:20 by iel-mach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

void	ft_main(t_node **a, char **s)
{
	int	i;

	i = 1;
	if (!ft_check(s))
		exit(1);
	while (s[i])
		ft_creat_node(a, ft_atoi(s[i++]), 0);
	ft_checks(a);
}

void	ft_main2(t_node **a, char **s)
{
	int	i;

	i = 1;
	if (!ft_check(s))
		exit(1);
	while (s[i])
		ft_creat_node(a, ft_atoi(s[i++]), 0);
}

void	ft_checks(t_node **a)
{
	if (ft_checksort(a))
		exit(0);
	else
		ft_indexing(a);
}

int	ft_check(char **s)
{
	int	i;

	i = 1;
	if (!*s)
		return (0);
	while (s[i])
	{
		if (!ft_check_digit(s[i]))
			exit(1);
		i++;
	}
	if (!ft_check_doubl(s))
		return (0);
	return (1);
}
