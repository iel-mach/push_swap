/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_utils2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-mach <iel-mach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 23:08:00 by iel-mach          #+#    #+#             */
/*   Updated: 2022/02/15 23:18:44 by iel-mach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_position(t_node **a)
{
	t_node *tmp;
	int min;

	tmp = *a;
	int i;
	min = tmp->index;
	while (tmp != NULL)
	{
		if(tmp->index < min)
			min = tmp->index;
		tmp = tmp->next;
	}
	return (min);
}

int ft_push(t_node **a)
{
	int push;

	if (ft_sizestack(a) <= 100)
		push = ((ft_sizestack(a) - 5) / 4) + 1;
	else
		push = ((ft_sizestack(a) - 5) / 5) + 1;
	return (push);
}

void	ft_art(t_node **a, t_node **b, int pos, int push, int min, int max, int med)
{

	int size;

	size = ft_sizestack(a);
	if((*a)->index <= max && (*a)->index >= min)
		ft_push_b(a, b);
	else
	{
		if (pos < size / 2)
		{
			while(pos != 0)
			{
				ft_rx(a, 'a');
				pos--;
			}
			ft_push_b(a, b);
		}
		else
		{
			while(pos < ft_sizestack(a))
			{
				ft_rrx(a, 'a');
				pos++;
			}
			ft_push_b(a, b);
		}
		if ((*b)->index < med)
			ft_rx(b, 'b');
	}
}