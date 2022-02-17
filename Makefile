# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iel-mach <iel-mach@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/16 07:25:04 by iel-mach          #+#    #+#              #
#    Updated: 2022/02/17 08:03:21 by iel-mach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CHECKER_NAME = checker
FLAGS = -Wall -Wextra -Werror
SRCS = ft_newnode.c ft_sort_tab.c ft_sort_utils.c \
			ft_sort_utils2.c ft_sort100.c \
			ft_sort3.c ft_sort4.c ft_sort5.c \
			ft_swaps.c ft_utils_check.c \
			ft_utils_check2.c push_swap.c ft_utils.c

SRCSB = ft_checker.c ft_utils.c get_next_line_utils.c \
			get_next_line.c ft_utils_check2.c ft_newnode.c \
			ft_utils_check.c ft_sort100.c ft_sort_tab.c \
			ft_sort_utils.c ft_sort_utils2.c ft_swaps.c \
			ft_sort5.c ft_sort4.c ft_sort3.c
all : $(NAME) $(CHECKER_NAME)

$(NAME) : $(SRCS)
			@gcc $(FLAGS) $(SRCS)  -o $(NAME)
$(CHECKER_NAME) : $(SRCSB)
			@gcc $(FLAGS) $(SRCSB)  -o $(CHECKER_NAME)

clean:
	@rm -f $(NAME) $(CHECKER_NAME)

fclean: clean

re: fclean all