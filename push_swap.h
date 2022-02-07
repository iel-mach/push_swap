/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhaba <mbouhaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 23:53:44 by iel-mach          #+#    #+#             */
/*   Updated: 2022/02/07 12:34:20 by mbouhaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

typedef struct node
{
	int data;
	struct node	*next;
} t_node;


int check_doubl(char **s);
int check_digit(char *s);
int	ft_atoi(const char *s);
int	ft_isdigit(int c);
int	ft_check(char **s);
t_node	*newnode(int value);
void	ft_swapx(t_node **head);
void    ft_lstback(t_node **a, t_node *b);
void	ft_rx(t_node **head);

#endif