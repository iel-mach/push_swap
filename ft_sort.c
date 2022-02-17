/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-mach <iel-mach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 22:17:31 by iel-mach          #+#    #+#             */
/*   Updated: 2022/02/17 00:56:46 by iel-mach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort2(t_node **head)
{
	if ((*head)->data > (*head)->next->data)
		ft_swapx(head, 'a');
}

int	ft_sizestack(t_node **head)
{
	int		con;
	t_node	*temp;

	con = 0;
	temp = *head;
	while (temp)
	{
		con++;
		temp = temp->next;
	}
	return (con);
}

void	ft_indexing(t_node **head)
{
	int		*t;
	t_node	*tmp;

	t = ft_array(head);
	tmp = *head;
	while (tmp != NULL)
	{
		tmp->index = ft_ind(tmp->data, t, head);
		tmp = tmp->next;
	}
	free(t);
}

void	ft_sort100(t_node **a, t_node **b)
{
	int		number;
	int		size;
	t_push	push;

	size = ft_sizestack(a);
	while (size > 5)
	{
		push.push = ft_push(a);
		push.min = ft_position(a);
		push.max = (push.push + push.min) - 1;
		push.med = (push.min + push.max) / 2;
		ft_count_push(a, b, &push);
		size = ft_sizestack(a);
	}
	ft_sort5(a, b);
	ft_edit_last(a);
	number = (*a)->index - 1;
	ft_boocl(a, b, number);
}
