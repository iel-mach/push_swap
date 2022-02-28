/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_check.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-mach <iel-mach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 02:41:07 by iel-mach          #+#    #+#             */
/*   Updated: 2022/02/17 23:43:10 by iel-mach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_check_limit(int sign, unsigned long rus)
{
	if (((rus > 2147483648) && sign == -1) \
		|| (rus > 2147483647 && sign == 1))
	{
		write (2, "Error\n", 6);
		exit (EXIT_FAILURE);
	}
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
		ft_check_limit(sign, rus);
	}
	return (sign * rus);
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
