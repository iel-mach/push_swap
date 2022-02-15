/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-mach <iel-mach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 02:41:07 by iel-mach          #+#    #+#             */
/*   Updated: 2022/02/15 20:30:40 by iel-mach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_atoi(const char *s)
{
	int				sign;
	unsigned long	rus;

	sign = 1;
	rus = 0;
	while (*s == 32 || (*s >= 7 && *s <= 13))
		s++;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			sign *= (-1);
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		rus = (rus * 10) + (*s - 48);
		s++;
	}
	return (sign * rus);
}

int ft_check_digit(char *s)
{
    int i;

    i = 0;
    if ((s[i] == '-' && (s[i + 1] >= 48 && s[i + 1] <= 57)) \
		|| (s[i] == '+' && (s[i + 1] >= 48 && s[i + 1] <= 57)))
        i++;
    while (s[i])
    {
        if (!ft_isdigit(s[i]))
        {
            write (1, "Error\n", 12);
            return (0);
        }
        i++;
    }
    return (1);
}

int ft_check_doubl(char **s)
{
    int i = 1;
    int j;
    int a;
    int b;

    while(s[i])
    {
        j = i + 1;
        a = ft_atoi(s[i]);
        while (s[j])
        {
            b = ft_atoi(s[j]);
            if (a == b)
            {
                write (1, "Error\n", 13);
                return (0);
            }
            j++;
        }
        i++;
    }
    return (1);
}
int	ft_checksort(t_node **head)
{
	t_node	*tmp;

	tmp = *head;
	while (tmp->next)
	{
		if (tmp->data > tmp->next->data)
			return (0);
		tmp = tmp->next;
	}
	return(1);
}
int	ft_check(char **s)
{
	int i;

	i = 1;
	while(s[i])
	{
		if(!ft_check_digit(s[i]))
			exit(1);
		if (!s[i])
		{
			write (1, "Error\n", 13);
			exit(1);
		}
		i++;
	}
	if (!ft_check_doubl(s))
		return(0);
	return (1);
}

int	ft_findindex(t_node **head, int min)
{
	t_node *tmp;
	int		index;

	tmp = *head;
	index = 0;
	while (tmp && tmp->next)
	{
		if(tmp->index == min)
			return (index);
		index++;
		tmp = tmp->next;
	}
	return(index);
}
int	ft_check_min(t_node **head)
{
	t_node *tmp;
	int		min = 0;
	int		index;

	if (*head == NULL)
		return 0;
	tmp = *head;
	min = tmp->index;
	while (tmp)
	{
		if (tmp->index < min)
			min = tmp->index;
		tmp = tmp->next;
	}
	index = ft_findindex(head, min);
	return (index);
}

int	ft_check_max(t_node **head)
{
	t_node *tmp;
	int		max;
	int		index;

	if (*head == NULL)
		return 0;
	tmp = *head;
	max = tmp->index;
	while (tmp)
	{
		if (tmp->index > max)
			max = tmp->index;
		tmp = tmp->next;
	}
	index = ft_findindex(head, max);
	return (index);
}

int	find_pos(t_node **stack_a, int min, int max)
{
	t_node *temp;
	int i;

	i = 0;
	temp = (*stack_a);
	while (temp)
	{
		if (temp->index >= min && temp->index <= max)
			return (i);
		temp = temp->next;
		i++;
	}
	return (-1);
}