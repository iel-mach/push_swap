/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-mach <iel-mach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 02:42:20 by iel-mach          #+#    #+#             */
/*   Updated: 2022/02/17 01:50:54 by iel-mach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	ft_print_stack(t_node **a, t_node **b)
// {
// 	printf("Stack A\n");
// 	while (*a)
// 	{
// 		printf("[%d]\n",(*a)->index);
// 		*a = (*a)->next;
// 	}
// 	printf("Stack B\n");
// 	while (*b)
// 	{
// 		printf("|%d|\n", (*b)->index);
// 		*b = (*b)->next;
// 	}
// }

int	ft_check(char **s)
{
	int	i;

	i = 1;
	if (!*s)
		return (0);
	while (s[i])
	{
		if (!ft_check_digit(s[i]))
			exit(1);
		i++;
	}
	if (!ft_check_doubl(s))
		return (0);
	if (!ft_limit_check(s))
	{
		write(1, "Error\n", 6);
		exit(1);
	}
	return (1);
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

void	ft_checks(t_node **a)
{
	if (ft_checksort(a))
		exit(0);
	else
		ft_indexing(a);
}

void	ft_main(t_node **a, char **s)
{
	int	i;

	i = 1;
	if (!ft_check(s))
		exit(1);
	while (s[i])
		ft_creat_node(a, ft_atoi(s[i++]), 0);
	ft_checks(a);
}

int	main(int ac, char **av)
{
	t_node	*a;
	t_node	*b;
	int		i;

	if (ac > 1)
	{
		a = NULL;
		b = NULL;
		i = ac - 1;
		ft_main(&a, av);
		if (i == 2)
			ft_sort2(&a);
		else if (i == 3)
			ft_sort3(&a, &b);
		else if (i == 4)
			ft_sort4(&a, &b);
		else if (i == 5)
			ft_sort5(&a, &b);
		else if (i > 5)
			ft_sort100(&a, &b);
	}
}
