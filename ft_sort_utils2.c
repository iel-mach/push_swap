/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_utils2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-mach <iel-mach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 23:08:00 by iel-mach          #+#    #+#             */
/*   Updated: 2022/02/17 04:05:08 by iel-mach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_position(t_node **a)
{
	t_node	*tmp;
	int		min;

	tmp = *a;
	min = tmp->index;
	while (tmp != NULL)
	{
		if (tmp->index < min)
			min = tmp->index;
		tmp = tmp->next;
	}
	return (min);
}

int	ft_push(t_node **a)
{
	int	push;

	if (ft_sizestack(a) <= 100)
		push = ((ft_sizestack(a) - 5) / 3) + 1;
	else
		push = ((ft_sizestack(a) - 5) / 5) + 1;
	return (push);
}

void	ft_push_to_b(t_node **a, t_node **b, int pos)
{
	int	size;

	size = ft_sizestack(a);
	if (pos < size / 2)
	{
		while (pos)
		{
			ft_rx(a, 'a');
			pos--;
		}
		ft_push_b(a, b, 1);
	}
	else
	{
		while (pos < ft_sizestack(a))
		{
			ft_rrx(a, 'a');
			pos++;
		}
		ft_push_b(a, b, 1);
	}
}

void	ft_art(t_node **a, t_node **b, t_push *push)
{
	int	size;

	size = ft_sizestack(a);
	if ((*a)->index <= push->max && (*a)->index >= push->min)
		ft_push_b(a, b, 1);
	else
	{
		ft_push_to_b(a, b, push->pos);
		if ((*b)->index < push->med)
			ft_rx(b, 'b');
	}
}

void	ft_boocl(t_node **a, t_node **b, int number)
{
	int	last;
	int	size;
	int	j;

	size = ft_sizestack(b);
	while (size)
	{
		last = ft_check_last(a);
		j = ft_check_max(b);
		if (ft_check_9(number, b) == 1)
		{
			if (number == (*b)->index)
				ft_push_a(a, b, 1);
			else
				ft_push_to_a(a, b, last, j);
		}
		else
			ft_rrx(a, 'a');
		size = ft_sizestack(b);
		number = (*a)->index - 1;
	}
	while (!ft_checksort(a))
		ft_rrx(a, 'a');
}
