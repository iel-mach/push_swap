/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swaps.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-mach <iel-mach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 00:19:51 by iel-mach          #+#    #+#             */
/*   Updated: 2022/02/15 22:02:12 by iel-mach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swapx(t_node **head, char c)
{
	t_node	*tmp;

	tmp = (*head)->next;
	(*head)->next = tmp->next;
	tmp->next = *head;
	*head = tmp;
	if (c == 'a')
		write(1, "sa\n", 3);
	else if (c == 'b')
		write(1, "sb\n", 3);
}

void	ft_rx(t_node **head, char c)
{
	t_node	*tmp;

	tmp = (*head);
	(*head) = (*head)->next;
	tmp->next = NULL;
	ft_lstback(head, tmp);
	if (c == 'a')
		write(1, "ra\n", 3);
	else if (c == 'b')
		write(1, "rb\n", 3);
}

void	ft_rrx(t_node **head, char c)
{
	t_node	*tmp;
	t_node	*last;

	if (!head || !(*head))
	{
		return ;
	}
	last = *head;
	tmp = *head;
	while (last->next)
		last = last->next;
	if (tmp ->next)
	{
		while (tmp->next->next)
			tmp = tmp->next;
		ft_lstadd_front(head, last);
		tmp->next = NULL;
	}
	if (c == 'a')
		write(1, "rra\n", 4);
	else if (c == 'b')
		write(1, "rrb\n", 4);
}

void	ft_push_b(t_node **head, t_node **stack_b)
{
	t_node	*tmp;
	t_node	*b;
	t_node	*a;
	int		value;
	int		index;

	if (*head == NULL)
		return ;
	a = *head;
	b = *stack_b;
	value = a->data;
	index = a->index;
	tmp = ft_newnode(value, index);
	ft_lstadd_front(stack_b, tmp);
	ft_dellst(head);
	write(1, "pb\n", 3);
}

void	ft_push_a(t_node **head, t_node **stack_b)
{
	t_node	*tmp;
	t_node	*b;
	t_node	*a;
	int		value;
	int		index;

	a = *head;
	b = *stack_b;
	value = b->data;
	index = b->index;
	tmp = ft_newnode(value, index);
	ft_lstadd_front(head, tmp);
	ft_dellst(stack_b);
	write(1, "pa\n", 3);
}
