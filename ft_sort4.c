/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort4.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-mach <iel-mach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 23:00:17 by iel-mach          #+#    #+#             */
/*   Updated: 2022/02/16 23:10:22 by iel-mach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_i2(t_node **head, t_node **b)
{
	ft_rx(head, 'a');
	ft_rx(head, 'a');
	ft_push_b(head, b);
	ft_sort3(head, b);
	ft_push_a(head, b);
}

void	ft_sort4(t_node **head, t_node **b)
{
	int	i;

	i = ft_check_min(head);
	if (i == 0)
	{
		ft_push_b(head, b);
		ft_sort3(head, b);
		ft_push_a(head, b);
	}
	else if (i == 1)
	{
		ft_swapx(head, 'a');
		ft_push_b(head, b);
		ft_sort3(head, b);
		ft_push_a(head, b);
	}
	else if (i == 2)
		ft_i2(head, b);
	else if (i == 3)
	{
		ft_rrx(head, 'a');
		ft_push_b(head, b);
		ft_sort3(head, b);
		ft_push_a(head, b);
	}
}
