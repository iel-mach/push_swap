/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort5.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-mach <iel-mach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 23:04:18 by iel-mach          #+#    #+#             */
/*   Updated: 2022/02/17 04:04:35 by iel-mach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_i2(t_node **head, t_node **b)
{
	ft_rx(head, 'a');
	ft_swapx(head, 'a');
	ft_push_b(head, b, 1);
	ft_sort4(head, b);
	ft_push_a(head, b, 1);
}

static void	ft_i3(t_node **head, t_node **b)
{
	ft_rrx(head, 'a');
	ft_rrx(head, 'a');
	ft_push_b(head, b, 1);
	ft_sort4(head, b);
	ft_push_a(head, b, 1);
}

static void	ft_i1(t_node **head, t_node **b)
{
	ft_swapx(head, 'a');
	ft_push_b(head, b, 1);
	ft_sort4(head, b);
	ft_push_a(head, b, 1);
}

void	ft_sort5(t_node **head, t_node **b)
{
	int	i;

	i = ft_check_min(head);
	if (i == 0)
	{
		ft_push_b(head, b, 1);
		ft_sort4(head, b);
		ft_push_a(head, b, 1);
	}
	else if (i == 1)
		ft_i1(head, b);
	else if (i == 2)
		ft_i2(head, b);
	else if (i == 3)
		ft_i3(head, b);
	else
	{
		ft_rrx(head, 'a');
		ft_push_b(head, b, 1);
		ft_sort4(head, b);
		ft_push_a(head, b, 1);
	}
}
