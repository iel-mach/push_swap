/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-mach <iel-mach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 02:41:07 by iel-mach          #+#    #+#             */
/*   Updated: 2022/02/07 20:06:54 by iel-mach         ###   ########.fr       */
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

int check_digit(char *s)
{
    int i;

    i = 0;
    if (s[i] == '-' || s[i] == '+')
        i++;
    while (s[i])
    {
        if (!ft_isdigit(s[i]))
        {
            write (1, "ERROR CHAR\n", 12);
            return (0);
        }
        i++;
    }
    return (1);
}

int check_doubl(char **s)
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
                write (1, "ERROR double\n", 13);
                return (0);
            }
            j++;
        }
        i++;
    }
    return (1);
}
int	ft_check(char **s)
{
	int i;

	i = 1;
	while(s[i])
	{
		if(!check_digit(s[i]))
			return(0);
		i++;
	}
	if (!check_doubl(s))
		return(0);
	return (1);
}