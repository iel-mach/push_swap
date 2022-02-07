/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstback.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhaba <mbouhaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 11:52:32 by mbouhaba          #+#    #+#             */
/*   Updated: 2022/02/07 12:34:14 by mbouhaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_lstback(t_node **a, t_node *b)
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