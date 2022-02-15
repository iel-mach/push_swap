/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newnode.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-mach <iel-mach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 02:57:21 by iel-mach          #+#    #+#             */
/*   Updated: 2022/02/15 20:37:23 by iel-mach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*ft_newnode(int value, int index)
{
	t_node	*new_node;

	new_node = (t_node *)malloc(sizeof(t_node));
	if (!new_node)
		return (NULL);
	new_node->data = value;
	new_node->index = index;
	new_node->next = NULL;
	return (new_node);
}

void	ft_lstback(t_node **a, t_node *b)
{
	t_node	*last;

	if (*a == NULL)
	{
		*a = b;
		b->next = NULL;
	}
	else
	{
		last = (*a);
		while (last->next != NULL)
			last = last->next;
		last->next = b;
		b->next = NULL;
	}
}

void	ft_lstadd_front(t_node **head, t_node *new)
{
	if (*head != NULL)
	{
		new->next = *head;
		*head = new;
	}
	else
		*head = new;
}

void	ft_dellst(t_node **head)
{
	t_node	*tmp;

	if (head == NULL || *head == NULL)
		exit(0);
	tmp = *head;
	*head = (*head)->next;
	free(tmp);
}
