# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iel-mach <iel-mach@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/16 07:25:04 by iel-mach          #+#    #+#              #
#    Updated: 2022/02/17 02:46:48 by iel-mach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
FLAGS = -Wall -Wextra -Werror
SRCS = ft_newnode.c ft_sort_tab.c ft_sort_utils.c \
			ft_sort_utils2.c ft_sort100.c \
			ft_sort3.c ft_sort4.c ft_sort5.c \
			ft_swaps.c ft_utils_check.c \
			ft_utils_check2.c push_swap.c
all : $(NAME)

$(NAME) : $(SRCS)
			@gcc $(FLAGS) $(SRCS)  -o $(NAME)

clean:
	@rm -f $(NAME) 

fclean: clean

re: fclean all