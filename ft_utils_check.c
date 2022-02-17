/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_check.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-mach <iel-mach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 02:41:07 by iel-mach          #+#    #+#             */
/*   Updated: 2022/02/17 02:45:14 by iel-mach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

long int	ft_atoi(const char *s)
{
	int				sign;
	unsigned long	rus;

	sign = 1;
	rus = 0;
	if (s[0] == '\0')
	{
		write(2, "Error\n", 6);
		exit(EXIT_FAILURE);
	}
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

int	ft_limit_check(char **s)
{
	long int	num;
	int			i;

	i = 0;
	while (s[i])
	{
		num = ft_atoi(s[i]);
		if (num > 2147483647 || num < -2147483648)
			return (0);
		i++;
	}
	return (1);
}

int	ft_check_digit(char *s)
{
	int	i;

	i = 0;
	if ((s[i] == '-' && (s[i + 1] >= 48 && s[i + 1] <= 57)) \
	|| (s[i] == '+' && (s[i + 1] >= 48 && s[i + 1] <= 57)))
		i++;
	if (s == NULL)
	{
		write(1, "Error\n", 6);
		return (0);
	}
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

int	ft_check_doubl(char **s)
{
	long int	a;
	long int	b;
	int			i;
	int			j;

	i = 1;
	while (s[i])
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
