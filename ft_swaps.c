/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swaps.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhaba <mbouhaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 00:19:51 by iel-mach          #+#    #+#             */
/*   Updated: 2022/02/07 12:34:40 by mbouhaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swapx(t_node **head)
{
	t_node *tmp;

	//printf("head : %d\n", (*head)->data);
	//printf("tmp : %d\n", tmp->data);
	tmp  = (*head)->next;
	(*head)->next = tmp->next;
	tmp->next = *head;
	*head = tmp;

}

void	ft_rx(t_node **head)
{
	t_node *tmp;

	tmp = (*head);
	//printf("%d", tmp->data);
	(*head) = (*head)->next;
	tmp->next = NULL;
	ft_lstback(head, tmp);
}