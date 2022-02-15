/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-mach <iel-mach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 22:17:31 by iel-mach          #+#    #+#             */
/*   Updated: 2022/02/16 00:35:38 by iel-mach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort2(t_node **head)
{
	if ((*head)->data > (*head)->next->data)
		ft_swapx(head, 'a');
}

void	ft_sort3(t_node **head, t_node **b)
{
	int	i;

	i = ft_check_min(head);
	if (i == 0)
	{
		ft_push_b(head, b);
		ft_sort2(head);
		ft_push_a(head, b);
	}
	else if (i == 1)
	{
		if ((*head)->index > (*head)->next->next->index)
			ft_rx(head, 'a');
		else
			ft_swapx(head, 'a');
	}
	else
	{
		if ((*head)->index > (*head)->next->index)
		{
			ft_swapx(head, 'a');
			ft_rrx(head, 'a');
		}
		else
			ft_rrx(head, 'a');
	}
}

void	ft_sort4(t_node **head, t_node **b)
{
	int	i;

	i = ft_check_min(head);
	if (i == 0)
	{
		ft_push_b(head, b);
		ft_sort3(head, b);
		ft_push_a(head, b);
	}
	else if (i == 1)
	{
		ft_swapx(head, 'a');
		ft_push_b(head, b);
		ft_sort3(head, b);
		ft_push_a(head, b);
	}
	else if (i == 2)
	{
		ft_rx(head, 'a');
		ft_rx(head, 'a');
		ft_push_b(head, b);
		ft_sort3(head, b);
		ft_push_a(head, b);
	}
	else if (i == 3)
	{
		ft_rrx(head, 'a');
		ft_push_b(head, b);
		ft_sort3(head,b);
		ft_push_a(head, b);
	}
}

void	ft_sort5(t_node **head, t_node **b)
{
	int i;
	i = ft_check_min(head);
	if (i == 0)
	{
		ft_push_b(head, b);
		ft_sort4(head, b);
		ft_push_a(head, b);
	}
	else if (i == 1)
	{
		ft_swapx(head, 'a');
		ft_push_b(head, b);
		ft_sort4(head, b);
		ft_push_a(head, b);
	}
	else if (i == 2)
	{
		ft_rx(head, 'a');
		ft_swapx(head, 'a');
		ft_push_b(head, b);
		ft_sort4(head, b);
		ft_push_a(head, b);
	}
	else if (i == 3)
	{
		ft_rrx(head, 'a');
		ft_rrx(head, 'a');
		ft_push_b(head, b);
		ft_sort4(head, b);
		ft_push_a(head, b);
	}
	else
	{
		ft_rrx(head, 'a');
		ft_push_b(head, b);
		ft_sort4(head, b);
		ft_push_a(head, b);
	}
}
int	ft_sizestack(t_node **head)
{
	int con = 0;
	t_node *temp;
	temp = *head;
	while (temp)
	{
		con++;
		temp = temp->next;
	}
	return (con);
}


void	ft_sort_int_tab(int *tab, int size)
{
    int     i;
     int     j;
    int     swap;

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



int *ft_array(t_node **head)
{
	int index = 0;
	int len = ft_sizestack(head);
	int *arr;
	t_node *temp;

	temp = *head;
	arr = malloc(sizeof(int) * (len));
	while (temp)
	{
		arr[index]= temp->data;

		temp = temp->next;
		index++;
	}
	ft_sort_int_tab(arr, len);
	return (arr);
}

int	ft_ind(int data, int *arr, t_node **head)
{
	int i;

	i = 0;
	while (i < ft_sizestack(head))
	{
		if (arr[i] == data)
			return(i);
		i++;
	}
	return (0);
}
void	ft_indexing(t_node **head)
{
	int *t;
	t_node *tmp;

	t = ft_array(head);
	tmp = *head;
	while(tmp != NULL)
	{
		tmp->index = ft_ind(tmp->data, t, head);
		tmp = tmp->next;
	}
	free(t);
}

void ft_sort100(t_node **a, t_node **b)
{
	int push;
	int min;
	int max;
	int med;
	int number;
	int pos;
	int size;
		
	size = ft_sizestack(a);
	while(size > 5)
		{
			push = ft_push(a);
			min = ft_position(a);
			max = (push + min) - 1;
			med = (min + max) / 2;
			ft_count_push(a, b, push, min, max, med);
			size = ft_sizestack(a);
		}
		ft_sort5(a, b);
		ft_edit_last(a);
		int last = ft_check_last(a);
		number = (*a)->index - 1;
		ft_boocl(a, b, number);
}