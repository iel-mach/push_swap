/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-mach <iel-mach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 20:29:28 by iel-mach          #+#    #+#             */
/*   Updated: 2022/02/17 04:05:21 by iel-mach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_count_push(t_node **a, t_node **b, t_push *push)
{
	while (push->push > 0)
	{
		push->pos = find_pos(a, push->min, push->max);
		ft_art(a, b, push);
		push->push--;
	}
}

void	ft_edit_last(t_node **a)
{
	t_node	*tmp;

	tmp = *a;
	tmp->next->next->next->next->index = -1;
}

int	ft_check_9(int number, t_node **b)
{
	t_node	*tmp;

	tmp = *b;
	while (tmp != NULL)
	{
		if (number == tmp->index)
			return (1);
		tmp = tmp->next;
	}
	return (-1);
}

int	ft_check_last(t_node **a)
{
	t_node	*tmp;

	tmp = *a;
	while (tmp)
	{
		if (tmp->next == NULL)
			return (tmp->index);
		tmp = tmp->next;
	}
	return (-1);
}

void	ft_push_to_a(t_node **a, t_node **b, int last, int j)
{
	if ((*b)->index < (*a)->index && (*b)->index > last)
	{
		ft_push_a(a, b, 1);
		ft_rx(a, 'a');
	}
	else
	{
		if (j <= ft_sizestack(b) / 2)
			ft_rx(b, 'b');
		else
			ft_rrx(b, 'b');
	}
}
