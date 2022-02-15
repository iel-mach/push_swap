/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-mach <iel-mach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 02:42:20 by iel-mach          #+#    #+#             */
/*   Updated: 2022/02/15 23:45:39 by iel-mach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void	ft_print_stack(t_node **a, t_node **b)
{
	printf("Stack A\n");
	while (*a)
	{
		printf("[%d]\n",(*a)->data);
		*a = (*a)->next;
	}
	printf("Stack B\n");
	while (*b)
	{
		printf("|%d|\n", (*b)->data);
		*b = (*b)->next;
	}
}
void	ft_creat_node(t_node **head, int value, int index)
{
	t_node	*new_nod;
	t_node	*last;

	new_nod = ft_newnode(value, index);
	if (*head == NULL)
	{
		*head = new_nod;
		new_nod->next = NULL;
	}
	else
	{
		last = (*head);
		while (last->next != NULL)
			last = last->next;
		last->next = new_nod;
		new_nod->next = NULL;
	}

}


int main(int ac, char **av)
{
 
	if (ac > 2)
	{
		t_node *a;
		t_node *b;
		int i;

		i = 1;
		a = NULL;
		b = NULL;
		if(!ft_check(av))
			exit(1);
		while (av[i])
		{
			ft_creat_node(&a,ft_atoi(av[i]), 0);
			i++;
		}
		if(ft_checksort(&a))
			return  0;
		ft_indexing(&a);
		int z = ac - 1;
		if (z == 2)
			ft_sort2(&a);
		else if (z == 3)
			ft_sort3(&a, &b);
		else if (z == 4)
			ft_sort4(&a, &b);
		else if (z == 5)
			ft_sort5(&a, &b);
		else if (z > 5)
			ft_sort100(&a, &b);
	}
}