/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-mach <iel-mach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 03:09:49 by iel-mach          #+#    #+#             */
/*   Updated: 2022/02/17 23:31:24 by iel-mach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int	ft_checker1(t_node **a, t_node **b, char *l)
{
	if (ft_strcmp(l, "sa\n") == 0)
		ft_swapx(a, 'c');
	else if (ft_strcmp(l, "sb\n") == 0)
		ft_swapx(b, 'c');
	else if (ft_strcmp(l, "pa\n") == 0)
		ft_push_a(a, b, 0);
	else if (ft_strcmp(l, "pb\n") == 0)
		ft_push_b(a, b, 0);
	else if (ft_strcmp(l, "ra\n") == 0)
		ft_rx(a, 'c');
	else if (ft_strcmp(l, "rb\n") == 0)
		ft_rx(b, 'c');
	else if (ft_strcmp(l, "rra\n") == 0)
		ft_rrx(a, 'c');
	else if (ft_strcmp(l, "rrb\n") == 0)
		ft_rrx(b, 'c');
	else
		return (0);
	return (1);
}

int	ft_checker2(t_node **a, t_node **b, char *l)
{
	if (ft_strcmp(l, "rrr\n") == 0)
	{
		ft_rrx(a, 'c');
		ft_rrx(b, 'c');
		return (1);
	}
	else if (ft_strcmp(l, "rr\n") == 0)
	{
		ft_rx(a, 'c');
		ft_rx(b, 'c');
		return (1);
	}
	else if (ft_strcmp(l, "ss\n") == 0)
	{
		ft_swapx(a, 'c');
		ft_swapx(b, 'c');
		return (1);
	}
	return (0);
}

void	ft_sortchecker(t_node **a, int size)
{
	if (size != ft_sizestack(a))
	{
		write(1, "KO\n", 3);
		return ;
	}
	if (ft_checksort(a))
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}

int	main(int ac, char **av)
{
	t_node	*a;
	t_node	*b;
	char	*l;
	int		size;

	if (ac > 1)
	{
		b = NULL;
		ft_main2(&a, av);
		size = ft_sizestack(&a);
		l = get_next_line(0);
		while (l)
		{
			if (!ft_checker1(&a, &b, l) && !ft_checker2(&a, &b, l))
			{
				free(l);
				write(2, "Error\n", 6);
				exit(1);
			}
			free(l);
			l = get_next_line(0);
		}
		ft_sortchecker(&a, size);
	}
	return (0);
}
