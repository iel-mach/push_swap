/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-mach <iel-mach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 23:53:44 by iel-mach          #+#    #+#             */
/*   Updated: 2022/02/15 23:23:25 by iel-mach         ###   ########.fr       */
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
	int index;
	struct node	*next;

} t_node;


int 	ft_check_doubl(char **s);
int 	ft_check_digit(char *s);
int		ft_atoi(const char *s);
int		ft_isdigit(int c);
int		ft_check(char **s);
t_node	*ft_newnode(int value, int index);
void	ft_swapx(t_node **head, char c);
void    ft_lstback(t_node **a, t_node *b);
void	ft_rx(t_node **head, char c);
void	ft_rrx(t_node **head, char c);
void	ft_lstadd_front(t_node **head, t_node *new);
void	ft_dellst(t_node **head);
void	ft_push_b(t_node **head, t_node **stack_b);
void	ft_push_a(t_node **head, t_node **stack_b);
int		ft_checksort(t_node **head);
void	ft_sort2(t_node **head);
int		ft_check_min(t_node **head);
int		ft_findindex(t_node **head, int min);
void	ft_sort3(t_node **head, t_node **b);
void	ft_sort4(t_node **head, t_node **b);
void	ft_sort5(t_node **head, t_node **b);
void	ft_sort100(t_node **head, t_node **b);
void	ft_print_stack(t_node **a, t_node **b);
int		ft_sizestack(t_node **head);
void	ft_indexing(t_node **head);
int		ft_ind(int data, int *arr, t_node **head);
int		ft_check_max(t_node **head);
int 	ft_push(t_node **a);
void	ft_count_push(t_node **a, t_node **b, int push, int min, int max, int med);
int		ft_position(t_node **a);
int		find_pos(t_node **stack_a, int min, int max);
void	ft_edit_last(t_node **a);
int		ft_check_9(int number, t_node **b);
int		ft_check_last(t_node **a);
void	ft_boocl(t_node **a, t_node **b, int number);
void	ft_art(t_node **a, t_node **b, int pos, int push, int min, int max, int med);

#endif