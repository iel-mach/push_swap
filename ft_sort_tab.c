/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-mach <iel-mach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 00:53:31 by iel-mach          #+#    #+#             */
/*   Updated: 2022/02/17 01:00:42 by iel-mach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	swap;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				swap = tab[i];
				tab[i] = tab[j];
				tab[j] = swap;
			}
			j++;
		}
		i++;
	}
}

int	*ft_array(t_node **head)
{
	t_node	*temp;
	int		index;
	int		len;
	int		*arr;

	temp = *head;
	index = 0;
	len = ft_sizestack(head);
	arr = malloc(sizeof(int) * (len));
	while (temp)
	{
		arr[index] = temp->data;
		temp = temp->next;
		index++;
	}
	ft_sort_int_tab(arr, len);
	return (arr);
}

int	ft_ind(int data, int *arr, t_node **head)
{
	int	i;

	i = 0;
	while (i < ft_sizestack(head))
	{
		if (arr[i] == data)
			return (i);
		i++;
	}
	return (0);
}
