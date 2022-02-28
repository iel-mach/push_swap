/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-mach <iel-mach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 02:42:20 by iel-mach          #+#    #+#             */
/*   Updated: 2022/02/17 22:07:37 by iel-mach         ###   ########.fr       */
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
	return (0);
}
