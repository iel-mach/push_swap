/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_check2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-mach <iel-mach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 00:54:42 by iel-mach          #+#    #+#             */
/*   Updated: 2022/02/16 07:24:00 by iel-mach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_pos(t_node **stack_a, int min, int max)
{
	t_node	*temp;
	int		i;

	i = 0;
	temp = (*stack_a);
	while (temp)
	{
		if (temp->index >= min && temp->index <= max)
			return (i);
		temp = temp->next;
		i++;
	}
	return (-1);
}

int	ft_check_max(t_node **head)
{
	t_node	*tmp;
	int		max;
	int		index;

	if (*head == NULL)
		return (0);
	tmp = *head;
	max = tmp->index;
	while (tmp)
	{
		if (tmp->index > max)
			max = tmp->index;
		tmp = tmp->next;
	}
	index = ft_findindex(head, max);
	return (index);
}

int	ft_check_min(t_node **head)
{
	t_node	*tmp;
	int		min;
	int		index;

	if (*head == NULL)
		return (0);
	tmp = *head;
	min = tmp->index;
	while (tmp)
	{
		if (tmp->index < min)
			min = tmp->index;
		tmp = tmp->next;
	}
	index = ft_findindex(head, min);
	return (index);
}

int	ft_findindex(t_node **head, int min)
{
	t_node	*tmp;
	int		index;

	tmp = *head;
	index = 0;
	while (tmp && tmp->next)
	{
		if (tmp->index == min)
			return (index);
		index++;
		tmp = tmp->next;
	}
	return (index);
}

int	ft_checksort(t_node **head)
{
	t_node	*tmp;

	tmp = *head;
	while (tmp->next)
	{
		if (tmp->data > tmp->next->data)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}
