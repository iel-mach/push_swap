/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-mach <iel-mach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 02:42:20 by iel-mach          #+#    #+#             */
/*   Updated: 2022/02/07 16:37:02 by iel-mach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void	creat_node(t_node **head, int value)
{
	t_node	*new_nod;
	t_node	*last;

	new_nod = newnode(value);
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
    // int i;
	// t_node *a;
	// t_node *b;

	// b = NULL;
	// if (!ft_check(av))
	// 	return(0);
	// a = 

	t_node *a;
	t_node *b;
	int i;
	int nb;

	i = 1;
	a = NULL;
	b = NULL;
	if(!ft_check(av))
	{
		exit(1);
	}
	while (av[i])
	{
		creat_node(&a,ft_atoi(av[i]));
		i++;
	}
	ft_swapx(&a);
	printf("Stack A\n");
	while (a)
	{
		printf("|%d|\n", a->data);
		a = a->next;
	}
	

}