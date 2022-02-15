/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-mach <iel-mach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 20:29:28 by iel-mach          #+#    #+#             */
/*   Updated: 2022/02/15 23:23:11 by iel-mach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"



void	ft_count_push(t_node **a, t_node **b, int push, int min, int max, int med)
{
	int pos;

	while(push > 0)
	{
		pos = find_pos(a, min, max);
		ft_art(a, b, pos, push, min, max, med);
		push--;
	}
}

void	ft_edit_last(t_node **a)
{
	t_node *tmp;

	tmp = *a;
	tmp->next->next->next->next->index = -1;
	
}

int	ft_check_9(int number, t_node **b)
{
	t_node *tmp;

	tmp = *b;
	while(tmp != NULL)
	{
		if (number == tmp->index)
			return (1);
		tmp = tmp->next;
	}
	return (-1);
}

int ft_check_last(t_node **a)
{
	t_node *tmp;

	tmp = *a;
	while (tmp)
	{
		if (tmp->next == NULL)
			return(tmp->index);
		tmp = tmp->next;
	}
	return (-1);
}

void	ft_boocl(t_node **a, t_node **b, int number)
{
	int i;
	int last;

	i = 0;
	last = ft_check_last(a);
	int size = ft_sizestack(b);
	while(0 < size)
	{
		int j = ft_check_max(b);
		if (ft_check_9(number,b) == 1)
		{
			if (number == (*b)->index)
				ft_push_a(a, b);
			else
			{
				if ((*b)->index < (*a)->index && (*b)->index > last)
				{
					ft_push_a(a, b);
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
		}
		else
			ft_rrx(a,'a');
		last = ft_check_last(a);
		size = ft_sizestack(b);
		number = (*a)->index - 1;
		i++;
	}
	while (!ft_checksort(a))
		ft_rrx(a, 'a');
}
