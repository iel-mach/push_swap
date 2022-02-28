/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-mach <iel-mach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 23:53:44 by iel-mach          #+#    #+#             */
/*   Updated: 2022/02/17 19:31:41 by iel-mach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

typedef struct node
{
	struct node	*next;
	int			data;
	int			index;

}	t_node;

typedef struct push
{
	int	pos;
	int	push;
	int	min;
	int	max;
	int	med;

}	t_push;
long int	ft_atoi(const char *s);
void		ft_main2(t_node **a, char **s);
int			ft_check_doubl(char **s);
int			*ft_array(t_node **head);
int			ft_check_digit(char *s);
int			ft_limit_check(char **s);
int			ft_isdigit(int c);
int			ft_check(char **s);
t_node		*ft_newnode(int value, int index);
void		ft_swapx(t_node **head, char c);
void		ft_lstback(t_node **a, t_node *b);
void		ft_rx(t_node **head, char c);
void		ft_rrx(t_node **head, char c);
void		ft_lstadd_front(t_node **head, t_node *new);
void		ft_dellst(t_node **head);
void		ft_push_b(t_node **head, t_node **stack_b, int n);
void		ft_push_a(t_node **head, t_node **stack_b, int n);
int			ft_checksort(t_node **head);
void		ft_sort2(t_node **head);
int			ft_check_min(t_node **head);
int			ft_findindex(t_node **head, int min);
void		ft_sort3(t_node **head, t_node **b);
void		ft_sort4(t_node **head, t_node **b);
void		ft_sort5(t_node **head, t_node **b);
void		ft_sort100(t_node **head, t_node **b);
void		ft_print_stack(t_node **a, t_node **b);
int			ft_sizestack(t_node **head);
void		ft_indexing(t_node **head);
int			ft_ind(int data, int *arr, t_node **head);
int			ft_check_max(t_node **head);
int			ft_push(t_node **a);
void		ft_count_push(t_node **a, t_node **b, t_push *push);
int			ft_position(t_node **a);
int			find_pos(t_node **stack_a, int min, int max);
void		ft_edit_last(t_node **a);
int			ft_check_9(int number, t_node **b);
int			ft_check_last(t_node **a);
void		ft_boocl(t_node **a, t_node **b, int number);
void		ft_art(t_node **a, t_node **b, t_push *push);
void		ft_push_to_b(t_node **a, t_node **b, int pos);
void		ft_push_to_a(t_node **a, t_node **b, int last, int j);
void		ft_creat_node(t_node **head, int value, int index);
int			check_line(char *s);
void		ft_main(t_node **a, char **s);
char		*ft_strjoin(char *s1, char *s2);
int			ft_strlen(char *str);
char		*ft_substr(char *s, int start, int len);
char		*ft_before_line(char *s);
char		*ft_after_line(char *s);
char		*ft_getline(int fd, char *a);
char		*get_next_line(int fd);
void		ft_checks(t_node **a);
int			ft_check(char **s);

#endif