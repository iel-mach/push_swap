/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swaps.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-mach <iel-mach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 00:19:51 by iel-mach          #+#    #+#             */
/*   Updated: 2022/02/07 14:47:06 by iel-mach         ###   ########.fr       */
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