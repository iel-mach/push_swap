/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-mach <iel-mach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 22:58:27 by iel-mach          #+#    #+#             */
/*   Updated: 2022/02/17 01:40:49 by iel-mach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_i0(t_node **head, t_node **b)
{
	ft_push_b(head, b);
	ft_sort2(head);
	ft_push_a(head, b);
}

void	ft_sort3(t_node **head, t_node **b)
{
	int	i;

	i = ft_check_min(head);
	if (i == 0)
		ft_i0(head, b);
	else if (i == 1)
	{
		if ((*head)->index > (*head)->next->next->index)
			ft_rx(head, 'a');
		else
			ft_swapx(head, 'a');
	}
	else
	{
		if ((*head)->index > (*head)->next->index)
		{
			ft_swapx(head, 'a');
			ft_rrx(head, 'a');
		}
		else
			ft_rrx(head, 'a');
	}
}
